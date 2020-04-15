# CMakeList.txt: sort 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

set(CMAKE_BUILD_TYPE "Release")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -O2 -pthread -fopenmp")

# 将源代码添加到此项目的可执行文件。
ADD_EXECUTABLE(sort "sortAlgorithm.cpp" "sortAlgorithm.h")

SET(LIBSORT_SRC "com_changhr_learn_jni_Sort.cpp" "com_changhr_learn_jni_Sort.h" "sort.cpp" "sort.h" "sortAlgorithm.cpp" "sortAlgorithm.h" "Student.h" "SortTestHelper.h")
ADD_LIBRARY(libsort SHARED ${LIBSORT_SRC})

# TODO: 如有需要，请添加测试并安装目标。
