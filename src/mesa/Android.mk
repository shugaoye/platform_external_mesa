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

# Android.mk for core mesa

LOCAL_PATH := $(call my-dir)

SUBDIRS :=
ifeq ($(strip $(MESA_BUILD_CLASSIC)),true)
SUBDIRS += $(LOCAL_PATH)/drivers/Android.mk
endif
ifneq ($(filter r300g, $(MESA_GPU_DRIVERS)),)
SUBDIRS += $(LOCAL_PATH)/drivers/dri/r300/compiler/Android.mk
endif

include $(LOCAL_PATH)/sources.mak

common_CFLAGS := \
	-DFEATURE_ES1=1 \
	-DFEATURE_ES2=1

common_C_INCLUDES := \
	$(MESA_TOP)/src/mapi \
	$(MESA_TOP)/src/glsl

ifeq ($(strip $(MESA_BUILD_GALLIUM)),true)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	$(MESA_GALLIUM_SOURCES) \
	$(MESA_GALLIUM_CXX_SOURCES) \
	$(X86_SOURCES)

LOCAL_CFLAGS := $(common_CFLAGS)

LOCAL_C_INCLUDES := \
	$(common_C_INCLUDES) \
	$(MESA_TOP)/src/gallium/include \
	$(MESA_TOP)/src/gallium/auxiliary

LOCAL_MODULE := libmesa_st_mesa

include $(LOCAL_PATH)/Android.gen.mk
include $(MESA_COMMON_MK)
include $(BUILD_STATIC_LIBRARY)
endif # MESA_BUILD_GALLIUM

ifeq ($(strip $(MESA_BUILD_CLASSIC)),true)
include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	$(MESA_SOURCES) \
	$(MESA_CXX_SOURCES) \
	$(X86_SOURCES)

LOCAL_CFLAGS := $(common_CFLAGS) -DFEATURE_GL=1
LOCAL_C_INCLUDES := $(common_C_INCLUDES)

LOCAL_MODULE := libmesa_classic_mesa

include $(LOCAL_PATH)/Android.gen.mk
include $(MESA_COMMON_MK)
include $(BUILD_STATIC_LIBRARY)
endif # MESA_BUILD_CLASSIC

-include $(SUBDIRS)
