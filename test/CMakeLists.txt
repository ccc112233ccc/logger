
set(SRC test.cc)
set(INC logger.hpp)


link_directories( ${CMAKE_SOURCE_DIR}/lib)
add_executable(log_test ${SRC} ${INC})
target_link_libraries(log_test liblogger.a)