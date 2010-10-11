ifeq ($(LOCAL_MODULE_CLASS),)
LOCAL_MODULE_CLASS := STATIC_LIBRARIES
endif

intermediates := $(call local-intermediates-dir)

sources := \
	main/api_exec_es1.c \
	main/api_exec_es2.c \
	program/lex.yy.c \
	program/program_parse.tab.c

LOCAL_SRC_FILES := $(filter-out $(sources), $(LOCAL_SRC_FILES))

sources += main/git_sha1.h

sources := $(addprefix $(intermediates)/, $(sources))
LOCAL_GENERATED_SOURCES += $(sources)

LOCAL_C_INCLUDES += $(intermediates)/main

es_gen_DEPS := \
	$(LOCAL_PATH)/main/es_generator.py \
	$(LOCAL_PATH)/main/APIspec.xml \
	$(LOCAL_PATH)/main/APIspecutil.py \
	$(LOCAL_PATH)/main/APIspec.py
define es-gen
	@mkdir -p $(dir $@)
	@echo "ES: $(PRIVATE_MODULE) <= $(notdir $(@))"
	$(hide) python $(word 1,$(es_gen_DEPS)) -S $(word 2,$(es_gen_DEPS)) -V$(1) > $@
endef

define local-l-to-c
	@mkdir -p $(dir $@)
	@echo "Mesa Lex: $(PRIVATE_MODULE) <= $<"
	$(hide) $(LEX) -o$@ $<
endef

define local-y-to-c-and-h
	@mkdir -p $(dir $@)
	@echo "Mesa Yacc: $(PRIVATE_MODULE) <= $<"
	$(hide) $(YACC) -o $@ $<
endef

$(intermediates)/main/api_exec_es1.c: $(es_gen_DEPS)
	$(call es-gen,GLES1.1)

$(intermediates)/main/api_exec_es2.c: $(es_gen_DEPS)
	$(call es-gen,GLES2.0)

$(intermediates)/program/program_parse.tab.c: $(LOCAL_PATH)/program/program_parse.y
	$(local-y-to-c-and-h)

$(intermediates)/program/lex.yy.c: $(LOCAL_PATH)/program/program_lexer.l
	$(local-l-to-c)

$(intermediates)/main/git_sha1.h:
	@mkdir -p $(dir $@)
	@echo "GIT-SHA1: $(PRIVATE_MODULE) <= git"
	$(hide) touch $@
	$(hide) if which git > /dev/null; then \
			git --git-dir $(PRIVATE_PATH)/../../.git log -n 1 --oneline | \
			sed 's/^\([^ ]*\) .*/#define MESA_GIT_SHA1 "git-\1"/' \
			> $@; \
		fi
