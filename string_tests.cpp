//
// Created by Yanis on 17/01/2023.
//

#include "string_tests.h"
#include "String.h"
#include <iostream>

//Constructors
void test_default_constr() {
    String str = String();
    const char* cont = str.c_str();
    std::cout << cont << std::endl;
}

void test_copy_constr() {
    String str = String();
    String str2 = String(str);
    const char* cont = str.c_str();
    const char* cont2 = str2.c_str();
    std::cout << cont << std::endl;
    std::cout << cont2 << std::endl;
}

void test_constr_char() {
    String str = String("Hello World");
    std::cout << str.c_str() << std::endl;
}

//Destructors
void test_destructor() {
    auto* str2 = new String();
    delete str2;
}

//Accessors
void test_c_sting() {
    String str;
    const char* cont = str.c_str();
    std::cout << "Content : " << cont << std::endl;
}


//Capacity
void test_clear() {
    String str;
    std::cout << "Taille avant clear: " << str.size() << std::endl;
    str.clear();
    std::cout << "Taille apres clear: " << str.size() << std::endl;
}

void test_size() {
    String str = String();
    std::cout << str.size() << std::endl;
}

void test_length() {
    String str = String();
    std::cout << str.length() << std::endl;
}

void test_max_size() {
    String str = String();
    std::cout << str.max_size() << std::endl;
}

void test_capacity(){
    String str = String();
    std::cout << str.capacity() << std::endl;
}

void test_empty(){
    String str = String();
    std::cout << (str.empty() ? "Is empty" : "Is not empty") << std::endl;
}

void test_reserve() {
    String str = String();
    std::cout << "Capacity of " << str.capacity() << " bytes" << std::endl;
    str.reserve(50);
    std::cout << "Capacity of " << str.capacity() << " bytes, after reserved 50 bytes" << std::endl;
}

//Operations
//TODO: test_resize()

//Member fonctions
void test_assignment_operator_a() {
    String str;
    str = 'A';
    std::cout << "Content: " << str.c_str() << std::endl;
    std::cout << "Length: " << str.size() << std::endl;
}

//TODO: test_assignment_operator_b()

void test_assignment_operator_c() {
    String str = String();
    const char* cont = "Hello World";
    str = cont;
    std::cout << str.c_str() << std::endl;
}

//Non-member fonctions
//TODO: test operator_plus_a()

//TODO: test operator_plus_b()

void test_operator_plus_c() {
    const auto str1 = String();
    const auto str2 = String();
    String str3 = str1 + str2;
    std::cout << str3.c_str() << std::endl;
}






