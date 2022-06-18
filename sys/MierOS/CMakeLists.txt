if(${ARCH} STREQUAL "x86_64")
	set(ARCH_SOURCE "${CMAKE_CURRENT_SOURCE_DIR}/x86_64/syscall.c")
else()
	message(FATAL_ERROR "Unknown architecture for MierOS platform")
endif()

set(LIBC_SYS_SOURCE ${ARCH_SOURCE} CACHE INTERNAL "libc_sys_source")

