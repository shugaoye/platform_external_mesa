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

# from Makefile, omitting the last two files
C_SOURCES = \
	r300_blit.c \
	r300_chipset.c \
	r300_context.c \
	r300_debug.c \
	r300_emit.c \
	r300_flush.c \
	r300_fs.c \
	r300_hyperz.c \
	r300_query.c \
	r300_render.c \
	r300_render_stencilref.c \
	r300_render_translate.c \
	r300_resource.c \
	r300_screen.c \
	r300_screen_buffer.c \
	r300_state.c \
	r300_state_derived.c \
	r300_vs.c \
	r300_vs_draw.c \
	r300_texture.c \
	r300_texture_desc.c \
	r300_tgsi_to_rc.c \
	r300_transfer.c \
	\
	compiler/radeon_code.c \
	compiler/radeon_compiler.c \
	compiler/radeon_compiler_util.c \
	compiler/radeon_emulate_branches.c \
	compiler/radeon_emulate_loops.c \
	compiler/radeon_program.c \
	compiler/radeon_program_print.c \
	compiler/radeon_opcodes.c \
	compiler/radeon_program_alu.c \
	compiler/radeon_program_pair.c \
	compiler/radeon_program_tex.c \
	compiler/radeon_pair_translate.c \
	compiler/radeon_pair_schedule.c \
	compiler/radeon_pair_regalloc.c \
	compiler/radeon_pair_dead_sources.c \
	compiler/radeon_dataflow.c \
	compiler/radeon_dataflow_deadcode.c \
	compiler/radeon_dataflow_swizzles.c \
	compiler/radeon_list.c \
	compiler/radeon_optimize.c \
	compiler/radeon_remove_constants.c \
	compiler/radeon_rename_regs.c \
	compiler/radeon_variable.c \
	compiler/r3xx_fragprog.c \
	compiler/r300_fragprog.c \
	compiler/r300_fragprog_swizzle.c \
	compiler/r300_fragprog_emit.c \
	compiler/r500_fragprog.c \
	compiler/r500_fragprog_emit.c \
	compiler/r3xx_vertprog.c \
	compiler/r3xx_vertprog_dump.c \
	compiler/memory_pool.c

include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	$(C_SOURCES)

LOCAL_CFLAGS := -std=c99

LOCAL_C_INCLUDES := \
	$(MESA_TOP)/src/mapi \
	$(MESA_TOP)/src/glsl \
	$(MESA_TOP)/src/mesa \
	$(DRM_TOP) \
	$(DRM_TOP)/include/drm

LOCAL_MODULE := libmesa_pipe_r300

include $(GALLIUM_TEMPLATE)
include $(BUILD_STATIC_LIBRARY)
