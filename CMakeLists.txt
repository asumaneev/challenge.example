cmake_minimum_required(VERSION 3.12)

# expecting 'USER' variable as input

if (NOT DEFINED USER)
    message(FATAL_ERROR "No user specified. Use -DUSER=yourname as command-line option. Preserve key")
elseif(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${USER})
    message(FATAL_ERROR "No such user: ${USER}")
else()
    message(STATUS "Testing: ${USER}")
endif()

add_subdirectory(_task)

add_subdirectory(${USER})
add_dependencies(${USER} task)
