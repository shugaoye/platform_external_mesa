ifeq ($(LOCAL_MODULE_CLASS),)
LOCAL_MODULE_CLASS := STATIC_LIBRARIES
endif

intermediates := $(call local-intermediates-dir)

sources := \
	glsl_lexer.cpp \
	glsl_parser.cpp \
	glcpp/glcpp-lex.c \
	glcpp/glcpp-parse.c

ifneq ($(LOCAL_IS_HOST_MODULE),true)
sources += builtin_function.cpp
endif

LOCAL_SRC_FILES := $(filter-out $(sources), $(LOCAL_SRC_FILES))

LOCAL_C_INCLUDES += $(intermediates) $(intermediates)/glcpp external/mesa/src/glsl/glcpp

sources := $(addprefix $(intermediates)/, $(sources))
LOCAL_GENERATED_SOURCES += $(sources)

define local-l-or-ll-to-c-or-cpp
	@mkdir -p $(dir $@)
	@echo "Mesa Lex: $(PRIVATE_MODULE) <= $<"
	$(hide) $(LEX) --nounistd -o$@ $<
endef

define local-y-to-c-and-h
	@mkdir -p $(dir $@)
	@echo "Mesa Yacc: $(PRIVATE_MODULE) <= $<"
	$(hide) $(YACC) -o $@ $<
endef

define local-yy-to-cpp-and-h
	@mkdir -p $(dir $@)
	@echo "Mesa Yacc: $(PRIVATE_MODULE) <= $<"
	$(hide) $(YACC) -p "_mesa_glsl_" -o $@ $<
	touch $(@:$1=$(YACC_HEADER_SUFFIX))
	echo '#ifndef '$(@F:$1=_h) > $(@:$1=.h)
	echo '#define '$(@F:$1=_h) >> $(@:$1=.h)
	cat $(@:$1=$(YACC_HEADER_SUFFIX)) >> $(@:$1=.h)
	echo '#endif' >> $(@:$1=.h)
	rm -f $(@:$1=$(YACC_HEADER_SUFFIX))
endef

$(intermediates)/glsl_lexer.cpp: $(LOCAL_PATH)/glsl_lexer.ll
	$(call local-l-or-ll-to-c-or-cpp)

$(intermediates)/glsl_parser.cpp: $(LOCAL_PATH)/glsl_parser.yy
	$(call local-yy-to-cpp-and-h,.cpp)

$(intermediates)/glcpp/glcpp-lex.c: $(LOCAL_PATH)/glcpp/glcpp-lex.l
	$(call local-l-or-ll-to-c-or-cpp)

$(intermediates)/glcpp/glcpp-parse.c: $(LOCAL_PATH)/glcpp/glcpp-parse.y
	$(call local-y-to-c-and-h)

BUILTIN_COMPILER := $(BUILD_OUT_EXECUTABLES)/builtin_compiler$(BUILD_EXECUTABLE_SUFFIX)

$(intermediates)/builtin_function.cpp: $(LOCAL_PATH)/builtins/tools/generate_builtins.py $(LOCAL_PATH)/builtins/tools/texture_builtins.py $(BUILTIN_COMPILER) $(LOCAL_PATH)/builtins/profiles/* $(LOCAL_PATH)/builtins/ir/*
	@mkdir -p $(dir $@)
	@echo "GLSL: $(PRIVATE_MODULE) <= $<"
	$(hide) python $< $(BUILTIN_COMPILER) > $@ || rm -f $@
