# Mesa 3-D graphics library
# Version:  7.11
#
# Copyright (C) 2011 Chia-I Wu <olvaffe@gmail.com>
# Copyright (C) 2011 LunarG Inc.
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
	nvc0_context.c \
	nvc0_draw.c \
	nvc0_formats.c \
	nvc0_miptree.c \
	nvc0_resource.c \
	nvc0_screen.c \
	nvc0_state.c \
	nvc0_state_validate.c \
	nvc0_surface.c \
	nvc0_tex.c \
	nvc0_transfer.c \
	nvc0_vbo.c \
	nvc0_program.c \
	nvc0_shader_state.c \
	nvc0_pc.c \
	nvc0_pc_print.c \
	nvc0_pc_emit.c \
	nvc0_tgsi_to_nc.c \
	nvc0_pc_optimize.c \
	nvc0_pc_regalloc.c \
	nvc0_push.c \
	nvc0_push2.c \
	nvc0_query.c

include $(CLEAR_VARS)

LOCAL_SRC_FILES := $(C_SOURCES)
#LOCAL_CFLAGS := -std=c99
LOCAL_C_INCLUDES := $(DRM_TOP)

LOCAL_MODULE := libmesa_pipe_nvc0

include $(GALLIUM_TEMPLATE)
include $(BUILD_STATIC_LIBRARY)
