cmake_minimum_required(VERSION 3.22.1)
project(ex2link_lib
	VERSION 1.0
	DESCRIPTION "ex2 link lib description"
	LANGUAGES C)
add_executable(${PROJECT_NAME}
	src/main.c)

# target_link_directories(${PROJECT_NAME} #include ${CMAKE_SOURCE_DIR}/../../ex2lib/src/)
target_link_libraries(${PROJECT_NAME} ex2lib)

# instaluje aplikację do /usr/local/bin/${PROJECT_NAME}
install(TARGETS ${PROJECT_NAME} DESTINATION bin)

message("Message 1\n" "Message 2")
