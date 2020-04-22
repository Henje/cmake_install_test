#ifndef PRIVATE_TEST_HPP
#define PRIVATE_TEST_HPP

#include <cstdio>

template<class ...Args>
void print(const char* fmt, Args... args) {
    std::printf(fmt, args...);
}

#endif
