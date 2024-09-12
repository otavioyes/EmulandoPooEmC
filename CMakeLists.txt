cmake_minimum_required(VERSION 3.16)

project(EmularPooC LANGUAGES C)

add_executable(EmularPooC main.c)

include(GNUInstallDirs)
install(TARGETS EmularPooC
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
