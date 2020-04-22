#ifndef TEST_HPP
#define TEST_HPP

#include <string>

class TestClass {
public:
    TestClass() = default;
    TestClass(std::string target);
    void sayHello();

private:
    std::string target;
};

#endif
