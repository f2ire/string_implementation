//
// Created by Yanis on 17/01/2023.
//

#include "string_tests.h"
#include "String.h"
#include <iostream>

void test_default_constr() {
    String str = String();
    const char* cont = String::Accessor(str);
    std::cout << cont << std::endl;
}