cmake_minimum_required(VERSION 3.16)

project(QUADRAT-SOLVER)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 99)

add_executable(solver
  main.cpp
  ${PROJECT_SOURCE_DIR}/src/App.cpp
)

target_include_directories(solver PUBLIC
  ${PROJECT_SOURCE_DIR}/include/.
)