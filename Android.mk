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

# BOARD_GPU_DRIVERS should be defined.  The valid values are
#
#   classic drivers: i915, i965
#   gallium drivers: i915g, r300g, r600g, nouveau, vmwgfx
#
# The main target is libGLES_mesa.  Classic drivers depend on
#
#   libmesa_egl
#   libmesa_egl_dri2
#
# Gallium drivers depend on
#
#   libmesa_egl
#   libmesa_st_egl
#   libmesa_st_mesa
#   libmesa_glsl
#   libmesa_glsl_utils
#   libmesa_pipe_<DRIVER>
#   libmesa_winsys_<DRIVER>
#   libmesa_gallium
#
# The rules can be found in src/gallium/targets/Android.mk.
#
# For each classic driver enabled, a DRI module will be built.  It consits of
#
#   libmesa_dricore
#   libmesa_glsl
#   libmesa_glsl_utils
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

MESA_GPU_DRIVERS := $(BOARD_GPU_DRIVERS)

# convert board uses to MESA_GPU_DRIVERS
ifeq ($(strip $(MESA_GPU_DRIVERS)),)
ifeq ($(strip $(BOARD_USES_I915C)),true)
MESA_GPU_DRIVERS += i915
endif
ifeq ($(strip $(BOARD_USES_I965C)),true)
MESA_GPU_DRIVERS += i965
endif
ifeq ($(strip $(BOARD_USES_I915G)),true)
MESA_GPU_DRIVERS += i915g
endif
ifeq ($(strip $(BOARD_USES_R300G)),true)
MESA_GPU_DRIVERS += r300g
endif
ifeq ($(strip $(BOARD_USES_R600G)),true)
MESA_GPU_DRIVERS += r600g
endif
ifeq ($(strip $(BOARD_USES_NOUVEAU)),true)
MESA_GPU_DRIVERS += nouveau
endif
ifeq ($(strip $(BOARD_USES_VMWGFX)),true)
MESA_GPU_DRIVERS += vmwgfx
endif
endif # MESA_GPU_DRIVERS

classic_drivers := i915 i965
gallium_drivers := i915g r300g r600g nouveau vmwgfx

# warn about invalid drivers
invalid_drivers := $(filter-out \
	$(classic_drivers) $(gallium_drivers), $(MESA_GPU_DRIVERS))
ifneq ($(invalid_drivers),)
$(warning invalid GPU drivers: $(invalid_drivers))
# tidy up
MESA_GPU_DRIVERS := $(filter-out $(invalid_drivers), $(MESA_GPU_DRIVERS))
endif

ifneq ($(filter $(classic_drivers), $(MESA_GPU_DRIVERS)),)
MESA_BUILD_CLASSIC := true
else
MESA_BUILD_CLASSIC := false
endif

ifneq ($(filter $(gallium_drivers), $(MESA_GPU_DRIVERS)),)
MESA_BUILD_GALLIUM := true
else
MESA_BUILD_GALLIUM := false
endif

ifneq ($(strip $(MESA_GPU_DRIVERS)),)
include $(SUBDIRS)
endif
