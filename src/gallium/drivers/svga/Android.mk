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
	svgadump/svga_shader_dump.c \
	svgadump/svga_shader_op.c \
	svgadump/svga_dump.c \
	svga_cmd.c \
	svga_context.c \
	svga_draw.c \
	svga_draw_arrays.c \
	svga_draw_elements.c \
	svga_pipe_blend.c \
	svga_pipe_blit.c \
	svga_pipe_clear.c \
	svga_pipe_constants.c \
	svga_pipe_depthstencil.c \
	svga_pipe_draw.c \
	svga_pipe_flush.c \
	svga_pipe_fs.c \
	svga_pipe_misc.c \
	svga_pipe_query.c \
	svga_pipe_rasterizer.c \
	svga_pipe_sampler.c \
	svga_pipe_vertex.c \
	svga_pipe_vs.c \
	svga_screen.c \
	svga_screen_cache.c \
	svga_state.c \
	svga_state_need_swtnl.c \
	svga_state_constants.c \
	svga_state_framebuffer.c \
	svga_state_rss.c \
	svga_state_tss.c \
	svga_state_vdecl.c \
	svga_state_fs.c \
	svga_state_vs.c \
	svga_swtnl_backend.c \
	svga_swtnl_draw.c \
	svga_swtnl_state.c \
	svga_tgsi.c \
	svga_tgsi_decl_sm20.c \
	svga_tgsi_decl_sm30.c \
	svga_tgsi_insn.c \
	svga_sampler_view.c \
	svga_surface.c \
	svga_resource.c \
	svga_resource_texture.c \
	svga_resource_buffer.c \
	svga_resource_buffer_upload.c

include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	$(C_SOURCES)

LOCAL_C_INCLUDES := \
	$(LOCAL_PATH)/include

LOCAL_MODULE := libmesa_pipe_svga

include $(GALLIUM_TEMPLATE)
include $(BUILD_STATIC_LIBRARY)
