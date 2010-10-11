# src/gallium/Android.template.mk

ifneq ($(strip $(GALLIUM_LLVM_VERSION)),)
LOCAL_CFLAGS += -DHAVE_LLVM=$(GALLIUM_LLVM_VERSION)
endif

LOCAL_C_INCLUDES += \
	$(GALLIUM_TOP)/include \
	$(GALLIUM_TOP)/auxiliary \
	$(GALLIUM_TOP)/winsys \
	$(GALLIUM_TOP)/drivers

include $(MESA_COMMON_MK)
