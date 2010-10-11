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

# src/gallium/Android.mk

ifeq ($(strip $(MESA_BUILD_GALLIUM)),true)

LOCAL_PATH := $(call my-dir)

GALLIUM_TOP := $(LOCAL_PATH)

GALLIUM_TEMPLATE := $(LOCAL_PATH)/Android.template.mk

# TODO
#GALLIUM_LLVM_TEMPLATE := external/llvm/Android.template.mk
#GALLIUM_LLVM_VERSION := 0x0207

SUBDIRS := targets state_trackers auxiliary

ifeq ($(strip $(MESA_BUILD_I915G)),true)
SUBDIRS += winsys/i915 drivers/i915
endif

ifeq ($(strip $(MESA_BUILD_R300G)),true)
SUBDIRS += winsys/radeon drivers/r300
endif

ifeq ($(strip $(MESA_BUILD_R600G)),true)
SUBDIRS += winsys/r600 drivers/r600
endif

ifeq ($(strip $(MESA_BUILD_NOUVEAU)),true)
SUBDIRS += winsys/nouveau drivers/nouveau drivers/nvfx drivers/nv50 drivers/nvc0
endif

ifeq ($(strip $(MESA_BUILD_VMWGFX)),true)
SUBDIRS += winsys/svga drivers/svga
endif

ifeq ($(strip $(MESA_BUILD_SWRAST)),true)
SUBDIRS += winsys/sw drivers/softpipe
ifneq ($(strip $(GALLIUM_LLVM_VERSION)),)
SUBDIRS += drivers/llvmpipe
endif
endif

mkfiles := $(patsubst %,$(LOCAL_PATH)/%/Android.mk,$(SUBDIRS))
include $(mkfiles)

endif # MESA_BUILD_GALLIUM
