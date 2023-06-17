cmake_minimum_required(VERSION 3.22.1)
project(ex1
	VERSION 1.0
	DESCRIPTION "ex1 description"
	LANGUAGES CXX)
add_executable(${PROJECT_NAME}
	src/main.cpp)

# instaluje aplikację do /usr/local/bin/${PROJECT_NAME}
install(TARGETS ${PROJECT_NAME} DESTINATION bin)

message("Message 1\n" "Message 2")
