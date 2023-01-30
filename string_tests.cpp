//
// Created by Yanis on 17/01/2023.
//

#include "string_tests.h"
#include "String.h"
#include <iostream>
#include <intrin.h>

//Constructors
void test_default_constr() {
    String str = String();
    const char* cont = str.c_str();
    std::cout << (str.empty() ? "True" : "False")  << std::endl;
    std::cout << (str.length() == 0 ? "True" : "False")  << std::endl;
    std::cout << (str.capacity() == 0 ? "True" : "False")  << std::endl;
    std::cout << (strcmp(cont, "") ? "False" : "True") << std::endl;
}

void test_copy_constr() {
    String str = String("Hello World");
    String str2 = String(str);
    const char* cont = str.c_str();
    const char* cont2 = str2.c_str();
    std::cout << (str2.size() == 11 ? "True" : "False")  << std::endl;
    std::cout << (str2.length() == 11 ? "True" : "False")  << std::endl;
    std::cout << (str2.capacity() == 11 ? "True" : "False")  << std::endl;
    std::cout << (strcmp(cont, cont2) ? "False" : "True") << std::endl;
}

void test_constr_char() {
    String str = String("Hello World");
    std::cout << (str.size() == 11 ? "True" : "False")  << std::endl;
    std::cout << (str.length() == 11 ? "True" : "False")  << std::endl;
    std::cout << (str.capacity() == 11 ? "True" : "False")  << std::endl;
    std::cout << (strcmp(str.c_str(), "Hello World") ? "False" : "True") << std::endl;
}

//Destructors
void test_destructor() {
    auto* str2 = new String();
    delete str2;
}

//Accessors
void test_c_sting() {
    String str = String("Hello World");
    const char* cont = str.c_str();
    std::cout << (strcmp(cont, "Hello World") ? "False" : "True") << std::endl;
}


//Capacity
void test_clear() {
    String str("Hello World");
    str.clear();
    std::cout << (str.empty() ? "True" : "False") << std::endl;
    std::cout << (strcmp(str.c_str(), "") ? "False" : "True") << std::endl;
}

void test_size() {
    String str = String("Hello World");
    std::cout << (str.size()==11 ? "True" : "False") << std::endl;
    std::cout << (str.length()==11 ? "True" : "False") << std::endl;
}

void test_length() {
    String str = String("Hello World");
    std::cout << (str.size()==11 ? "True" : "False") << std::endl;
    std::cout << (str.length()==11 ? "True" : "False") << std::endl;
}

void test_max_size() {
    String str = String("Hello World");
    std::cout << (str.max_size()==100 ? "True" : "False") << std::endl;
}

void test_capacity(){
    String str = String("Hello World");
    std::cout << (str.capacity()==11 ? "True" : "False") << std::endl;
}

void test_empty(){
    String str = String();
    std::cout << (str.empty() ? "True" : "False") << std::endl;
    std::cout << (str.length()==0 ? "True" : "False") << std::endl;
}

void test_reserve() {
    String str = String("Hello World");
    str.reserve(50);
    std::cout <<  (str.capacity() == 50 ? "True" : "False")  << std::endl;
    std::cout << (str.size() == 11 ? "True" : "False")  << std::endl;
    std::cout << (str.length() == 11 ? "True" : "False")  << std::endl;
    std::cout << (strcmp(str.c_str(), "Hello World") ? "False" : "True") << std::endl;
}

//Operations
void test_resize() {
    String str = String("Hello World");
    str.resize(15, 'A');
    std::cout << (str.size() == 15 ? "True" : "False")  << std::endl;
    std::cout << (str.length() == 15 ? "True" : "False")  << std::endl;
    std::cout << (str.capacity() == 15 ? "True" : "False")  << std::endl;
    std::cout << (strcmp(str.c_str(), "Hello WorldAAAA") ? "False" : "True") << std::endl;
    str.resize(12,'B');
    std::cout << (str.size() == 12 ? "True" : "False")  << std::endl;
    std::cout << (str.length() == 12 ? "True" : "False")  << std::endl;
    std::cout << (str.capacity() == 15 ? "True" : "False")  << std::endl;
    std::cout << (strcmp(str.c_str(), "Hello WorldA") ? "False" : "True") << std::endl;
}

//Member fonctions
void test_assignment_operator_a() {
    String str;
    str = 'A';
    std::cout << (str.size() == 1 ? "True" : "False")  << std::endl;
    std::cout << (str.length() == 1 ? "True" : "False")  << std::endl;
    std::cout << (str.capacity() == 1 ? "True" : "False")  << std::endl;
    std::cout << (strcmp(str.c_str(), "A") ? "False" : "True") << std::endl;
}

void test_assignment_operator_b() {
    String str;
    String str2 = String("Hello World");
    str = str2;
    std::cout << (str.size() == 11 ? "True" : "False")  << std::endl;
    std::cout << (str.length() == 11 ? "True" : "False")  << std::endl;
    std::cout << (str.capacity() == 11 ? "True" : "False")  << std::endl;
    std::cout << (strcmp(str.c_str(), "Hello World") ? "False" : "True") << std::endl;
}

void test_assignment_operator_c() {
    String str;
    const char* cont = "Hello World";
    str = cont;
    std::cout << (str.size() == 11 ? "True" : "False")  << std::endl;
    std::cout << (str.length() == 11 ? "True" : "False")  << std::endl;
    std::cout << (str.capacity() == 11 ? "True" : "False")  << std::endl;
    std::cout << (strcmp(str.c_str(), cont) ? "False" : "True") << std::endl;
}

//Non-member functions
void test_operator_plus_a() {
    String str1 = String("Hello World");
    String str3 = str1 + "2";
    std::cout << (str3.size() == 12 ? "True" : "False")  << std::endl;
    std::cout << (str3.length() == 12 ? "True" : "False")  << std::endl;
    std::cout << (str3.capacity() == 12 ? "True" : "False")  << std::endl;
    std::cout << (strcmp(str3.c_str(), "Hello World2") ? "False" : "True") << std::endl;
}

void test_operator_plus_b() {
    String str1 = String("Hello World");
    String str3 = str1 + 'A';
    std::cout << (str3.size() == 12 ? "True" : "False")  << std::endl;
    std::cout << (str3.length() == 12 ? "True" : "False")  << std::endl;
    std::cout << (str3.capacity() == 12 ? "True" : "False")  << std::endl;
    std::cout << (strcmp(str3.c_str(), "Hello WorldA") ? "False" : "True") << std::endl;
}

void test_operator_plus_c() {
    const auto str1 = String("Hello World");
    const auto str2 = String("2A");
    String str3 = str1 + str2;
    std::cout << (str3.size() == 13 ? "True" : "False")  << std::endl;
    std::cout << (str3.length() == 13 ? "True" : "False")  << std::endl;
    std::cout << (str3.capacity() == 13 ? "True" : "False")  << std::endl;
    std::cout << (strcmp(str3.c_str(), "Hello World2A") ? "False" : "True") << std::endl;}