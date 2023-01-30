#include <iostream>
#include "string_tests.h"

int main() {
    //Constructors
    std::cout << "Test of constructors methods : " << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of default constructor : " << std::endl; //TODO: should print nothing
    std::cout << "If print \"Hello World\" and then the string is deleted, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_default_constr();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of the copy constructor : " << std::endl;
    std::cout << "If print \"Hello World\" and then the string is deleted two times, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_copy_constr();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of the constructor with char* : " << std::endl;
    std::cout << "If print \"Hello World\" and then the string is deleted, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_constr_char();
    std::cout << "______________________________________" << std::endl << std::endl;

    //Destructors
    std::cout << "Test of destructor method : " << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of the destructor : " << std::endl;
    std::cout << "If there is 1 string deleted; that mean it work as wanted." << std::endl;
    std::cout << "---" << std::endl;
    test_destructor();
    std::cout << "______________________________________" << std::endl << std::endl;

    //Accessors
    std::cout << "Test of accessor methods: " << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of the c_string : " << std::endl;
    std::cout << "If print \"Content : Hello World\" and then the string is deleted, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_c_sting();
    std::cout << "______________________________________" << std::endl << std::endl;

    //Capacity
    std::cout << "Test of capacity methods: " << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of clear() : " << std::endl;
    std::cout << R"(If print "Length before clean: 11" and then "Length after clean: 0", that mean it work as wanted)" << std::endl;
    std::cout << "---" << std::endl;
    test_clear();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of size() : " << std::endl;
    std::cout << "If print \"11\" and then the string is deleted, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_size();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of length() : " << std::endl;
    std::cout << "If print \"11\" and then the string is deleted, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_length();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of max_size() : " << std::endl;
    std::cout << "If print \"100\" and then the string is deleted, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_max_size();
    std::cout << "____________________" << std::endl;
    std::cout << "test of capacity() : " << std::endl;
    std::cout << "If print \"11\" and then the string is deleted, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_capacity();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of empty() : " << std::endl;
    std::cout << "If print \"Is not empty\" and then the string is deleted, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_empty();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of reserve() : " << std::endl;
    std::cout << "If the capacity is 11 and then 50, and then the string is deleted, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_reserve();
    std::cout << "______________________________________" << std::endl << std::endl;


    //Operations
    std::cout << "Test of Operations methods: " << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "Test of resize() : " << std::endl;
    std::cout << "If print a size of 11 and then size of 49 with a new content ended by \"A\" that mean it work as wanted" << std::endl;
    std::cout << "If the size of the string is then 30, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_resize();
    std::cout << "______________________________________" << std::endl << std::endl;

    //Member functions
    std::cout << "Test of member functions: " << std::endl;
    std::cout << "______________________________________" << std::endl;
    std::cout << "test of Operator=(char) : " << std::endl;
    std::cout << "If print a content of A, with a size of 1, that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_assignment_operator_a();
    std::cout << "____________________" << std::endl;
    //TODO: test_assignment_operator_b();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of Operator=(const char*) : " << std::endl;
    std::cout << "If print \"Hello world\", that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_assignment_operator_c();
    std::cout << "______________________________________" << std::endl << std::endl;

    //Non-member functions

    std::cout << "Test of non-member functions: " << std::endl;
    std::cout << "____________________________________" << std::endl;
    std::cout << "Test of Operator+(const String& str,  const char* chr) : " << std::endl;
    std::cout << "If print \"Hello world2nd Hello world\", that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_operator_plus_a();
    std::cout << "__________________" << std::endl;
    //TODO: test_operator_plus_b();
    std::cout << "____________________" << std::endl;
    std::cout << "Test of Operator+(const String& str1, const String& str2) : " << std::endl;
    std::cout << "If print \"Hello worldHello world\", that mean it work as wanted" << std::endl;
    std::cout << "---" << std::endl;
    test_operator_plus_c();
    std::cout << "______________________________________" << std::endl << std::endl;
}