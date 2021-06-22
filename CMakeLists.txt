cmake_minimum_required(VERSION 3.1)

project(vulkan)

set( SRC src/main.cpp
         src/vulkan_class.cpp
         src/vulkan_tools.cpp )

find_package(Vulkan REQUIRED FATAL_ERROR)

find_package(X11 REQUIRED)

include_directories(${Vulkan_INCLUDE_DIR})
include_directories(${X11_INCLUDE_DIR})

add_executable(${PROJECT_NAME} ${SRC})

target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include
)

target_link_libraries(${PROJECT_NAME} ${Vulkan_LIBRARY})
