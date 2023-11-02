cmake_minimum_required(VERSION 3.26)
project(OJ_work C)

set(CMAKE_C_STANDARD 11)

add_executable(matrix-mult matrix-mult.c)
add_executable(formation formation.c)
add_executable(sudoku sudoku.c)
add_executable(mines mines.c)
add_executable(trace trace.c)
add_executable(statistics statistics.c)
add_executable(life life.c)
add_executable(obstacle obstacle.c)