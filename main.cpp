#include <iostream>
#include "string_tests.h"

int main() {
    /*
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
    std::cout << "Test of the copy constructor : " << std::endl;
    std::cout << "If print \"Hello World\" and then the string is deleted two times, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_copy_constr();
    std::cout << "______________________________________" << std::endl;
    /*
    std::cout << "Test of the c_string : " << std::endl;
    std::cout << "If print \"Content : Hello World\" and then the string is deleted, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_c_sting();
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of the assignment operator with char*: " << std::endl;
    std::cout << "If print \"Hello World\" and then the string is deleted two times, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_operator_eq_c();
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of the operator+ with 2 const char*: " << std::endl;
    std::cout << "If print \"Hello World\" and then the string is deleted two times, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_operator_plus_c();
    std::cout << "______________________________________" << std::endl;
}