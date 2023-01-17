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

void test_lenght() {
    String str = String();
    std::cout << str.length() << std::endl;
}