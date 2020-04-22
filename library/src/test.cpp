#include <test.hpp>
#include <private_test.hpp>

TestClass::TestClass(std::string target)
    : target{target} {
}

void TestClass::sayHello() {
    print("Hello %s", target.c_str());
}
