cmake_minimum_required(VERSION 3.10)

project(cpp-network-lesson-8)

if (UNIX)
    add_subdirectory("qt-wordcount")
    add_subdirectory("libtorrent")
    add_subdirectory("openmpi_example")
    add_subdirectory("boost_mpi_example")
endif()
