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
    std::cout << "______________________________________" << std::endl;*/
    test_lenght();
        test_destructor();
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of the copy constructor : " << std::endl;
    std::cout << "If print \"Hello World\" and then the string is deleted two times, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_copy_constr();
    std::cout << "______________________________________" << std::endl;
}