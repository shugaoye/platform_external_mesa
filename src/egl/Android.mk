# Mesa 3-D graphics library
# Version:  7.11
#
# Copyright (C) 2010-2011 Chia-I Wu <olvaffe@gmail.com>
# Copyright (C) 2010-2011 LunarG Inc.
#
# Permission is hereby granted, free of charge, to any person obtaining a
# copy of this software and associated documentation files (the "Software"),
# to deal in the Software without restriction, including without limitation
# the rights to use, copy, modify, merge, publish, distribute, sublicense,
# and/or sell copies of the Software, and to permit persons to whom the
# Software is furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included
# in all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
# THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
# FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
# DEALINGS IN THE SOFTWARE.

# Android.mk for EGL

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

# from main/Makefile
SOURCES = \
	eglapi.c \
	eglarray.c \
	eglconfig.c \
	eglcontext.c \
	eglcurrent.c \
	egldisplay.c \
	egldriver.c \
	eglfallbacks.c \
	eglglobals.c \
	eglimage.c \
	egllog.c \
	eglmisc.c \
	eglmode.c \
	eglscreen.c \
	eglstring.c \
	eglsurface.c \
	eglsync.c

LOCAL_SRC_FILES := \
	$(addprefix main/, $(SOURCES))

LOCAL_CFLAGS := \
	-D_EGL_NATIVE_PLATFORM=_EGL_PLATFORM_ANDROID \
	-D_EGL_DRIVER_SEARCH_DIR=\"/system/lib/egl\" \
	-D_EGL_OS_UNIX=1

ifeq ($(strip $(MESA_BUILD_CLASSIC)),true)
LOCAL_CFLAGS += -D_EGL_BUILT_IN_DRIVER_ANDROID
endif
ifeq ($(strip $(MESA_BUILD_GALLIUM)),true)
LOCAL_CFLAGS += -D_EGL_BUILT_IN_DRIVER_GALLIUM
endif

LOCAL_MODULE := libmesa_egl

include $(MESA_COMMON_MK)
include $(BUILD_STATIC_LIBRARY)

ifeq ($(strip $(MESA_BUILD_CLASSIC)),true)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	drivers/android/egl_android.c \
	drivers/android/droid.c \
	drivers/android/droid_core.c \
	drivers/android/droid_image.c

LOCAL_CFLAGS := \
	-D_EGL_MAIN=_eglBuiltInDriverANDROID \
	-DDEFAULT_DRIVER_DIR=\"/system/lib/dri\"

LOCAL_C_INCLUDES := \
	$(MESA_TOP)/src/mapi \
	$(MESA_TOP)/src/egl/main \
	$(DRM_GRALLOC_TOP) \
	$(DRM_TOP) \
	$(DRM_TOP)/include/drm

# for PCI ID to DRI driver mappings
LOCAL_C_INCLUDES += \
	$(MESA_TOP)/src/mesa/drivers  \
	external/mesa/src/gallium/include \
	external/mesa/src/gallium/winsys

LOCAL_MODULE := libmesa_classic_egl

include $(MESA_COMMON_MK)
include $(BUILD_STATIC_LIBRARY)

# build libGLES if gallium is not enabled
ifneq ($(strip $(MESA_BUILD_GALLIUM)),true)
include $(CLEAR_VARS)

LOCAL_SRC_FILES :=
LOCAL_CFLAGS :=
LOCAL_C_INCLUDES :=

LOCAL_STATIC_LIBRARIES :=

LOCAL_WHOLE_STATIC_LIBRARIES := \
	libmesa_classic_egl \
	libmesa_egl

LOCAL_SHARED_LIBRARIES := \
	libglapi \
	libdrm \
	libdl \
	libhardware \
	liblog \
	libcutils

LOCAL_MODULE := libGLES_mesa
LOCAL_MODULE_PATH := $(TARGET_OUT_SHARED_LIBRARIES)/egl

include $(MESA_COMMON_MK)
include $(BUILD_SHARED_LIBRARY)
endif # MESA_BUILD_GALLIUM

endif # MESA_BUILD_CLASSIC
