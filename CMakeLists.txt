cmake_minimum_required(VERSION 3.1)
project(fibonacci_sum)

set(FIRST_VERSION_MAJOR 1)
set(FIRST_VERSION "${FIRST_VERSION_MAJOR}")

set(SOURCES main.cpp parse.cpp)
set(HEADERS parse.h)

add_subdirectory(
	"${CMAKE_CURRENT_SOURCE_DIR}/googletest"
	"googletest"
	)

add_executable(fibonacci_sum ${SOURCES} ${HEADRS})
add_executable(test_fib_sum fcn.cpp test/test.cpp)

target_include_directories(
	test_fib_sum
	PRIVATE
	"${CMAKE_CURRENT_SOURCE_DIR}"
	)

set_target_properties(
	fibonacci_sum PROPERTIES
	CXX_STANDARD 20
	CXX_STANDARD_REQUIRED ON
	#COMPILE_FLAGS "${CMAKE_CXX_FLAGS} -lpthread"
	)

target_compile_options(
	fibonacci_sum 
	PRIVATE
	-Wall -Wextra -pedantic -Werror
	)

target_link_libraries(
	test_fib_sum
	PRIVATE
	gtest gtest_main)
