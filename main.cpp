#include <iostream>
#include "string_tests.h"

int main() {
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of default constructor : " << std::endl;
    std::cout << "If print \"Hello World\" and then the string is deleted, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_default_constr();
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of the destructor : " << std::endl;
    std::cout << "If there is 3 string deleted; that mean it work as wanted. No leak of memory." << std::endl;
    std::cout << "---" << std::endl;
    test_destructor();
    std::cout << "______________________________________" << std::endl;
    test_length();
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of the capacity : " << std::endl;
    std::cout << "If the result correspond to the multiplication behind, it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_capacity();
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of empty() : " << std::endl;
    std::cout << "If the two sentences corresponds, it mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_empty();
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of reserve() : " << std::endl;
    std::cout << "If the two sentences corresponds, it mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_reserve();
    std::cout << "______________________________________" << std::endl;
}