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

LOCAL_PATH := $(call my-dir)

common_SOURCES := \
	egl/common/egl_g3d.c \
	egl/common/egl_g3d_api.c \
	egl/common/egl_g3d_image.c \
	egl/common/egl_g3d_st.c \
	egl/common/egl_g3d_sync.c \
	egl/common/native_helper.c

android_SOURCES := \
	egl/android/native_android.cpp

include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	$(common_SOURCES) \
	$(android_SOURCES)

LOCAL_CFLAGS := -DHAVE_ANDROID_BACKEND

LOCAL_C_INCLUDES := \
	$(GALLIUM_TOP)/state_trackers/egl \
	$(GALLIUM_TOP)/winsys/sw \
	$(MESA_TOP)/src/egl/main \
	$(DRM_TOP) \
	$(DRM_TOP)/include/drm \
	$(DRM_GRALLOC_TOP)

LOCAL_MODULE := libmesa_st_egl

include $(GALLIUM_TEMPLATE)
include $(BUILD_STATIC_LIBRARY)
