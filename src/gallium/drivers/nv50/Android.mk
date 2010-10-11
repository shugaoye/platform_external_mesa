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
	nv50_context.c \
	nv50_draw.c \
	nv50_formats.c \
	nv50_miptree.c \
	nv50_resource.c \
	nv50_screen.c \
	nv50_state.c \
	nv50_state_validate.c \
	nv50_surface.c \
	nv50_tex.c \
	nv50_transfer.c \
	nv50_vbo.c \
	nv50_program.c \
	nv50_shader_state.c \
	nv50_pc.c \
	nv50_pc_print.c \
	nv50_pc_emit.c \
	nv50_tgsi_to_nc.c \
	nv50_pc_optimize.c \
	nv50_pc_regalloc.c \
	nv50_push.c \
	nv50_query.c

include $(CLEAR_VARS)

LOCAL_SRC_FILES := $(C_SOURCES)
LOCAL_C_INCLUDES := $(DRM_TOP)

LOCAL_MODULE := libmesa_pipe_nv50

include $(GALLIUM_TEMPLATE)
include $(BUILD_STATIC_LIBRARY)
