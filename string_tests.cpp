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
/*
void test_destructor() {
    String *str1 = nullptr;
    delete str1;
    String str2 = String();
    delete str2;
}*/