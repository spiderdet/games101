# CMakeList.txt: hw0 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
	#
	cmake_minimum_required (VERSION 3.8)

	# Enable Hot Reload for MSVC compilers if supported.
	if (POLICY CMP0141)
	  cmake_policy(SET CMP0141 NEW)
	  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
	endif()

	project ("hw0")

	# 头文件
	include_directories(D:/Programs/OSS/opencv/build/include)
	include_directories(D:/Programs/OSS/eigen-3.4.0)

	#静态链接库
	link_directories(D:/Programs/OSS/opencv/build/x64/vc15/lib)


	# 将源代码添加到此项目的可执行文件。
	add_executable (hw0 "hw0.cpp" "hw0.h")

	if (CMAKE_VERSION VERSION_GREATER 3.12)
	  set_property(TARGET hw0 PROPERTY CXX_STANDARD 20)
	endif()

	# TODO: 如有需要，请添加测试并安装目标。
