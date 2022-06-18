cmake_minimum_required(VERSION 3.10)

project(MierLibC VERSION 0.0.1 LANGUAGES C)

set(PLATFORM "MierOS" CACHE STRING "Platform to compile for")
set(ARCH "x86_64" CACHE STRING "Architecture to compile for")

include_directories(abi/${PLATFORM}
	sys/${PLATFORM}/include)

add_compile_definitions(${ARCH}=1 ${PLATFORM}=1)

add_subdirectory(sys/${PLATFORM})

add_subdirectory(parts/c)

