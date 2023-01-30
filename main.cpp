#include <iostream>
#include "string_tests.h"

int main() {
    //Constructors
    std::cout << std::endl << "All test for the String class" << std::endl;
    std::cout << "--True if it work as wanted, else False--" << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of constructors methods : " << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of default constructor : " << std::endl;
    test_default_constr();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of the copy constructor : " << std::endl;
    test_copy_constr();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of the constructor with char* : " << std::endl;
    test_constr_char();
    std::cout << "______________________________________" << std::endl << std::endl;

    //Destructors
    /*
    std::cout << "Test of destructor method : " << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of the destructor : " << std::endl;
    test_destructor();
    std::cout << "______________________________________" << std::endl << std::endl;
     */ // Default destructor, so no need to test it

    //Accessors
    std::cout << "Test of accessor methods: " << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of the c_string : " << std::endl;
    test_c_sting();
    std::cout << "______________________________________" << std::endl << std::endl;

    //Capacity
    std::cout << "Test of capacity methods: " << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of clear() : " << std::endl;
    test_clear();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of size() : " << std::endl;
    test_size();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of length() : " << std::endl;
    test_length();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of max_size() : " << std::endl;
    test_max_size();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of capacity() : " << std::endl;
    test_capacity();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of empty() : " << std::endl;
    test_empty();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of reserve() : " << std::endl;
    test_reserve();
    std::cout << "______________________________________" << std::endl << std::endl;


    //Operations
    std::cout << "Test of Operations methods: " << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of resize() : " << std::endl;
    test_resize();
    std::cout << "______________________________________" << std::endl << std::endl;

    //Member functions
    std::cout << "Test of member functions: " << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "test of Operator=(char) : " << std::endl;
    test_assignment_operator_a();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of Operator=(const String& str) : " << std::endl;
    test_assignment_operator_b();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of Operator=(const char*) : " << std::endl;
    test_assignment_operator_c();
    std::cout << "______________________________________" << std::endl << std::endl;

    //Non-member functions

    std::cout << "Test of non-member functions: " << std::endl;
    std::cout << "____________________________________" << std::endl;
    std::cout << "Test of Operator+(const String& str,  const char* chr) : " << std::endl;
    test_operator_plus_a();
    std::cout << "__________________" << std::endl;
    std::cout << "Test of Operator+(const String& str, char c) : " << std::endl;
    test_operator_plus_b();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of Operator+(const String& str1, const String& str2) : " << std::endl;
    test_operator_plus_c();
    std::cout << "______________________________________" << std::endl << std::endl;
}