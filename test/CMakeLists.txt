project(log_test)

set(SRC test.cc)
set(INC logger.hpp)


link_directories( E:/CPlusCode/Logger/test/lib)
add_executable(log_test ${SRC} ${INC})
target_link_libraries(log_test liblogger.a)