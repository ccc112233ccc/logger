#include "logger.hpp"
Logger LOG("logger.txt");

int main()
{
    LOG.set_level(logger_level::ERROR);
    LOG << INFO << "info" << std::endl;
    LOG << ERROR << "Out of memory!" << std::endl;

    return 0;
}