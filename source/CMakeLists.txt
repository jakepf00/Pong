cmake_minimum_required(VERSION 3.22.1makem)
project(Pong)
set(SOURCES
    game.cpp
    main.cpp
)
add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-window sfml-system)