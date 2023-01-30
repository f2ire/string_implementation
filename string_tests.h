//
// Created by Yanis on 17/01/2023.
//

#ifndef STRING_PROJECT_STRING_TESTS_H
#define STRING_PROJECT_STRING_TESTS_H

//Constructors
void test_default_constr();
void test_copy_constr();
void test_constr_char();

//Destructors
void test_destructor();

//Accessors
void test_c_sting();

//Capacity
void test_clear();
void test_size();
void test_length();
void test_max_size();
void test_capacity();
void test_empty();
void test_reserve();

//Operations
void test_resize();

//Member functions
void test_assignment_operator_a();
//TODO: test_assignment_operator_b();
void test_assignment_operator_c();

//Non-member functions
void test_operator_plus_a();
//TODO: test_operator_plus_b();
void test_operator_plus_c();

#endif //STRING_PROJECT_STRING_TESTS_H