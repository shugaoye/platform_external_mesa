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

# from Makefile
C_SOURCES = \
	i915_blit.c \
	i915_clear.c \
	i915_flush.c \
	i915_context.c \
	i915_debug.c \
	i915_debug_fp.c \
	i915_state.c \
	i915_state_immediate.c \
	i915_state_dynamic.c \
	i915_state_derived.c \
	i915_state_emit.c \
	i915_state_fpc.c \
	i915_state_sampler.c \
	i915_state_static.c \
	i915_screen.c \
	i915_prim_emit.c \
	i915_prim_vbuf.c \
	i915_query.c \
	i915_resource.c \
	i915_resource_texture.c \
	i915_resource_buffer.c \
	i915_fpc_emit.c \
	i915_fpc_translate.c \
	i915_surface.c 

include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	$(C_SOURCES)

LOCAL_CFLAGS := -std=c99

LOCAL_MODULE := libmesa_pipe_i915

include $(GALLIUM_TEMPLATE)
include $(BUILD_STATIC_LIBRARY)
