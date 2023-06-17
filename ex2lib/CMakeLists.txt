cmake_minimum_required(VERSION 3.22.1)
project(ex2lib
	VERSION 1.0
	DESCRIPTION "ex2lib description"
	LANGUAGES C)
add_library(${PROJECT_NAME}
	src/bstrlib.c)

# instaluje aplikację do /usr/local/lib/${PROJECT_NAME}
install(TARGETS ${PROJECT_NAME} DESTINATION lib						# install .a to /usr/local/lib
	PUBLIC_HEADER DESTINATION include)			# install .h to /usr/local/include - nie działa
install(FILES src/bstrlib.h DESTINATION include)

message("Message 1\n" "Message 2")
