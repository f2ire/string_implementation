//
// Created by Yanis on 17/01/2023.
//

#include "String.h"
#include <iostream>

String::String() {
    char cont[] = "Hello World";
    content_ = cont;
}

char *String::Accessor() {
    return content_;
}
/*
String::~String() {
    std::cout << "yo" << std::endl;
}
*/