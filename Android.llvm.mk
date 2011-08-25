#
# Centralized place for LLVM configuration.
#

MESA_LLVM := false

# check TARGET_ARCH
ifeq ($(filter x86, $(TARGET_ARCH)),)
MESA_LLVM := false
endif

ifeq ($(strip $(MESA_LLVM)),true)

LLVM_TOP := external/llvm
LLVM_VERSION := 0x0209

ifeq ($(strip $(LOCAL_MODULE_CLASS)),STATIC_LIBRARIES)
LOCAL_C_INCLUDES += \
	bionic \
	external/stlport/stlport \
	$(LLVM_TOP)/include
LOCAL_CFLAGS += \
	-D__STDC_LIMIT_MACROS \
	-D__STDC_CONSTANT_MACROS \
	-DHAVE_LLVM=$(LLVM_VERSION)
endif # STATIC_LIBRARIES

ifeq ($(strip $(LOCAL_MODULE_CLASS)),SHARED_LIBRARIES)
LOCAL_SHARED_LIBRARIES += libstlport

LOCAL_STATIC_LIBRARIES += \
	libLLVMObject \
	libLLVMMCJIT \
	libLLVMMCDisassembler \
	libLLVMLinker \
	libLLVMipo \
	libLLVMInterpreter \
	libLLVMInstrumentation \
	libLLVMJIT \
	libLLVMExecutionEngine \
	libLLVMBitWriter

ifeq ($(TARGET_ARCH),x86)
LOCAL_STATIC_LIBRARIES += \
	libLLVMX86Disassembler \
	libLLVMX86AsmParser \
	libLLVMX86CodeGen \
	libLLVMX86AsmPrinter \
	libLLVMX86Utils \
	libLLVMX86Info
endif # x86

LOCAL_STATIC_LIBRARIES += \
	libLLVMAsmParser \
	libLLVMArchive \
	libLLVMBitReader \
	libLLVMSelectionDAG \
	libLLVMAsmPrinter \
	libLLVMMCParser \
	libLLVMCodeGen \
	libLLVMScalarOpts \
	libLLVMInstCombine \
	libLLVMTransformUtils \
	libLLVMipa \
	libLLVMAnalysis \
	libLLVMTarget \
	libLLVMCore \
	libLLVMMC \
	libLLVMSupport
endif # SHARED_LIBRARIES

endif # MESA_LLVM
