cmake_minimum_required(VERSION 2.8)
project(complex)
aux_source_directory(. DIR_SRCS)
add_executable(testComplex ${DIR_SRCS})
