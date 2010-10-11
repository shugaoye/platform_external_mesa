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

# Android.mk for r300 compiler

LOCAL_PATH := $(call my-dir)

# from Makefile
C_SOURCES = \
		radeon_code.c \
		radeon_compiler.c \
		radeon_compiler_util.c \
		radeon_emulate_branches.c \
		radeon_emulate_loops.c \
		radeon_program.c \
		radeon_program_print.c \
		radeon_opcodes.c \
		radeon_program_alu.c \
		radeon_program_pair.c \
		radeon_program_tex.c \
		radeon_pair_translate.c \
		radeon_pair_schedule.c \
		radeon_pair_regalloc.c \
		radeon_pair_dead_sources.c \
		radeon_dataflow.c \
		radeon_dataflow_deadcode.c \
		radeon_dataflow_swizzles.c \
		radeon_list.c \
		radeon_optimize.c \
		radeon_remove_constants.c \
		radeon_rename_regs.c \
		radeon_variable.c \
		r3xx_fragprog.c \
		r300_fragprog.c \
		r300_fragprog_swizzle.c \
		r300_fragprog_emit.c \
		r500_fragprog.c \
		r500_fragprog_emit.c \
		r3xx_vertprog.c \
		r3xx_vertprog_dump.c \
		memory_pool.c

include $(CLEAR_VARS)

LOCAL_SRC_FILES := \
	$(C_SOURCES)

LOCAL_CFLAGS := \
	-std=c99

LOCAL_C_INCLUDES := \
	$(MESA_TOP)/src/mapi \
	$(MESA_TOP)/src/glsl \
	$(MESA_TOP)/src/mesa

LOCAL_MODULE := libmesa_r300compiler

include $(MESA_COMMON_MK)
include $(BUILD_STATIC_LIBRARY)
