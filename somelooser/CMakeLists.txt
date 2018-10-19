project(somelooser)

add_executable(${PROJECT_NAME} "")

target_sources(${PROJECT_NAME}
    PUBLIC
        task.example.h
        main.cpp
    PRIVATE
        task.example.cpp
)

target_link_libraries(${PROJECT_NAME} task)
