//
// Created by Yanis on 17/01/2023.
//

#include "string_tests.h"
#include "String.h"
#include <iostream>

void test_default_constr() {
    String str = String();
    char* cont = str.Accessor();
    std::cout << cont << std::endl;
}
void test_destructor() {
    String *str1 = nullptr;
    auto* str2 = new String();
    delete str2;
    {
        auto *str3 = new String();
    // Even here, we have to delete it, it doesn't be deleted if out of scope
        str1 = str3;
    }
    delete str1;
    auto str4 = String();
}

void test_length() {
    String str = String();
    std::cout << str.length() << std::endl;
}

void test_capacity(){
    String str = String();
    int size_str = str.capacity();
    std::cout << size_str << std::endl;
    std::cout << sizeof(char) << "*" << str.length() << std::endl;
}

void test_empty(){
    String str = String();
    if (str.length() == 0) {
        std::cout << "Length of string is 0, then it should be empty" << std::endl;
    }
    else {
        std::cout << "Length of string is not null, then it should don't be empty" << std::endl;
    }
    std::cout << (str.empty() ? "Is empty" : "Is not empty") << std::endl;
}

void test_reserve(){
    String str = String();
    std::cout << "Capacity of " <<str.capacity() << " bytes" << std::endl;
    str.reserve(50);
    std::cout << "Capacity of " << str.capacity() << " bytes, after reserved 50 bytes" << std::endl;

void test_copy_constr() {
    String* str = new String();
    String* str2 = new String(*str);
    char* cont = str->Accessor();
    char* cont2 = str2->Accessor();
    std::cout << cont << std::endl;
    std::cout << cont2 << std::endl;
    delete str;
}

void test_c_sting() {
    String str;
    const char* cont = str.c_str();
    std::cout << "Content : " << cont << std::endl;

}