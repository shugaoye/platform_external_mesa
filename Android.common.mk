LOCAL_C_INCLUDES += \
	$(MESA_TOP)/include

LOCAL_CFLAGS += \
	-DPTHREADS \
	-fvisibility=hidden \
	-Wno-sign-compare

LOCAL_CFLAGS += \
	-DUSE_X86_ASM

LOCAL_CPPFLAGS := \
	-Wno-error=non-virtual-dtor \
	-Wno-non-virtual-dtor

#LOCAL_STRIP_MODULE := false

LOCAL_MODULE_TAGS := optional
