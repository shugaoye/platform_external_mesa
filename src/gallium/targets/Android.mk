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

# Android.mk for Gallium EGL

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES :=
LOCAL_CFLAGS :=
LOCAL_C_INCLUDES :=

LOCAL_STATIC_LIBRARIES :=
LOCAL_WHOLE_STATIC_LIBRARIES := libmesa_egl

LOCAL_SHARED_LIBRARIES := \
	libglapi \
	libdl \
	libhardware \
	liblog \
	libcutils

ifeq ($(strip $(MESA_BUILD_CLASSIC)),true)
LOCAL_STATIC_LIBRARIES += libmesa_classic_egl
LOCAL_SHARED_LIBRARIES += libdrm
endif

ifeq ($(strip $(MESA_BUILD_GALLIUM)),true)

LOCAL_SRC_FILES += \
	egl-static/egl.c \
	egl-static/egl_pipe.c \
	egl-static/egl_st.c

LOCAL_CFLAGS += \
	-DFEATURE_ES1=1 \
	-DFEATURE_ES2=1 \
	-D_EGL_MAIN=_eglBuiltInDriverGALLIUM

LOCAL_C_INCLUDES += \
	$(GALLIUM_TOP)/state_trackers/vega \
	$(GALLIUM_TOP)/state_trackers/egl \
	$(MESA_TOP)/src/egl/main \
	$(MESA_TOP)/src/mesa \
	$(DRM_TOP)/include/drm \
	$(DRM_TOP)

LOCAL_STATIC_LIBRARIES += libmesa_gallium

gallium_DRIVERS :=

ifneq ($(filter i915g, $(MESA_GPU_DRIVERS)),)
gallium_DRIVERS += libmesa_pipe_i915 libmesa_winsys_i915
LOCAL_CFLAGS += -D_EGL_PIPE_I915=1
LOCAL_SHARED_LIBRARIES += libdrm libdrm_intel
endif

ifneq ($(filter r300g, $(MESA_GPU_DRIVERS)),)
gallium_DRIVERS += libmesa_pipe_r300 libmesa_winsys_r300 libmesa_r300compiler
LOCAL_CFLAGS += -D_EGL_PIPE_R300=1
LOCAL_SHARED_LIBRARIES += libdrm
endif

ifneq ($(filter r600g, $(MESA_GPU_DRIVERS)),)
gallium_DRIVERS += libmesa_pipe_r600 libmesa_winsys_r600
LOCAL_CFLAGS += -D_EGL_PIPE_R600=1
LOCAL_SHARED_LIBRARIES += libdrm
endif

ifneq ($(filter nouveau, $(MESA_GPU_DRIVERS)),)
gallium_DRIVERS += \
	libmesa_winsys_nouveau \
	libmesa_pipe_nvfx \
	libmesa_pipe_nv50 \
	libmesa_pipe_nvc0 \
	libmesa_pipe_nouveau
LOCAL_CFLAGS += -D_EGL_PIPE_NOUVEAU=1
LOCAL_SHARED_LIBRARIES += libdrm libdrm_nouveau
endif

ifneq ($(filter vmwgfx, $(MESA_GPU_DRIVERS)),)
gallium_DRIVERS += libmesa_pipe_svga libmesa_winsys_svga
LOCAL_CFLAGS += -D_EGL_PIPE_VMWGFX=1
LOCAL_SHARED_LIBRARIES += libdrm
endif

# swrast
gallium_DRIVERS += libmesa_pipe_softpipe libmesa_winsys_sw
LOCAL_CFLAGS += -DGALLIUM_SOFTPIPE
ifneq ($(strip $(GALLIUM_LLVM_VERSION)),)
gallium_DRIVERS += libmesa_pipe_llvmpipe
LOCAL_CFLAGS += -DGALLIUM_LLVMPIPE
LOCAL_SHARED_LIBRARIES += libstlport
LOCAL_STATIC_LIBRARIES += \
	libLLVMLinker libLLVMipo libLLVMInterpreter libLLVMInstrumentation \
	libLLVMJIT libLLVMExecutionEngine libLLVMBitWriter
LOCAL_STATIC_LIBRARIES += \
	libLLVMX86Disassembler libLLVMX86AsmParser libLLVMX86AsmPrinter \
	libLLVMX86CodeGen libLLVMX86Info
LOCAL_STATIC_LIBRARIES += \
	libLLVMAsmParser libLLVMMCParser libLLVMArchive libLLVMBitReader \
	libLLVMSelectionDAG libLLVMAsmPrinter libLLVMCodeGen \
	libLLVMScalarOpts libLLVMInstCombine libLLVMTransformUtils \
	libLLVMipa libLLVMAnalysis libLLVMTarget libLLVMMC \
	libLLVMCore libLLVMSupport libLLVMSystem
endif # GALLIUM_LLVM_VERSION

LOCAL_STATIC_LIBRARIES := \
	libmesa_st_egl \
	libmesa_st_mesa \
	libmesa_glsl \
	libmesa_st_mesa \
	$(gallium_DRIVERS) \
	$(LOCAL_STATIC_LIBRARIES)

endif # MESA_BUILD_GALLIUM

LOCAL_MODULE := libGLES_mesa
LOCAL_MODULE_PATH := $(TARGET_OUT_SHARED_LIBRARIES)/egl

include $(GALLIUM_TEMPLATE)
include $(BUILD_SHARED_LIBRARY)
