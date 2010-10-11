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

# Either one of, or both of, MESA_BUILD_CLASSIC and MESA_BUILD_GALLIUM must be
# set.  When MESA_BUILD_GALLIUM is not set, EGL consists of
#
#   libmesa_classic_egl
#   libmesa_egl
#
# and the rules for it can be found in src/egl/drivers/android/Android.mk.
#
# When MESA_BUILD_GALLIUM is set, EGL consists of
#
#   libmesa_st_egl
#   libmesa_egl
#   libmesa_st_mesa
#   libmesa_pipe_<DRIVER>
#   libmesa_winsys_<DRIVER>
#   libmesa_gallium
#   <plus libmesa_classic_egl if MESA_BUILD_CLASSIC is also set>
#
# and the rules for it can be found in src/gallium/targets/Android.mk
#
# When MESA_BUILD_CLASSIC is set, DRI drivers are created.  A DRI driver
# consists of
#
#   libmesa_classic_mesa
#   libmesa_glsl
#   <driver-specific objects>

LOCAL_PATH := $(call my-dir)

MESA_TOP := $(LOCAL_PATH)
DRM_TOP := external/drm
DRM_GRALLOC_TOP := hardware/drm_gralloc

MESA_COMMON_MK := $(MESA_TOP)/Android.common.mk

SUBDIRS := \
	$(LOCAL_PATH)/src/mapi/Android.mk \
	$(LOCAL_PATH)/src/glsl/Android.mk \
	$(LOCAL_PATH)/src/mesa/Android.mk \
	$(LOCAL_PATH)/src/egl/Android.mk \
	$(LOCAL_PATH)/src/gallium/Android.mk

# DRI drivers
MESA_BUILD_CLASSIC := false
MESA_BUILD_I915C := false
MESA_BUILD_I965C := false

# Gallium drivers
MESA_BUILD_GALLIUM := false
MESA_BUILD_I915G := false
MESA_BUILD_R300G := false
MESA_BUILD_R600G := false
MESA_BUILD_NOUVEAU := false
MESA_BUILD_VMWGFX := false
MESA_BUILD_SWRAST := false

MESA_DO_BUILD := false

ifeq ($(strip $(BOARD_USES_I915C)),true)
MESA_BUILD_CLASSIC := true
MESA_BUILD_I915C := true

MESA_DO_BUILD := true
endif

ifeq ($(strip $(BOARD_USES_I915G)),true)
MESA_BUILD_GALLIUM := true
MESA_BUILD_I915G := true
MESA_BUILD_SWRAST := true

MESA_DO_BUILD := true
endif

ifeq ($(strip $(BOARD_USES_I965C)),true)
MESA_BUILD_CLASSIC := true
MESA_BUILD_I965C := true

MESA_DO_BUILD := true
endif

ifeq ($(strip $(BOARD_USES_R300G)),true)
MESA_BUILD_GALLIUM := true
MESA_BUILD_R300G := true
MESA_BUILD_SWRAST := true

MESA_DO_BUILD := true
endif

ifeq ($(strip $(BOARD_USES_R600G)),true)
MESA_BUILD_GALLIUM := true
MESA_BUILD_R600G := true
MESA_BUILD_SWRAST := true

MESA_DO_BUILD := true
endif

ifeq ($(strip $(BOARD_USES_NOUVEAU)),true)
MESA_BUILD_GALLIUM := true
MESA_BUILD_NOUVEAU := true
MESA_BUILD_SWRAST := true

MESA_DO_BUILD := true
endif

ifeq ($(strip $(BOARD_USES_VMWGFX)),true)
MESA_BUILD_GALLIUM := true
MESA_BUILD_SWRAST := true

MESA_DO_BUILD := true
endif

ifeq ($(strip $(MESA_DO_BUILD)),true)
include $(SUBDIRS)
endif
