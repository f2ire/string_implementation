//
// Created by Yanis on 17/01/2023.
//

#include "String.h"
#include <iostream>

String::String()
{
    char* txt = new char[12];
    const char* txt_to_copy = "Hello World";
    for (int i = 0; i < 12; i++) {
        txt[i] = txt_to_copy[i];
    };
    content_ = txt;
}

char* String::Accessor() {
    return content_;
}

int String::length() {
    int i = 0;
    while (content_[i])
        i++;
    return i;
}

String::~String()
{
    delete content_;
    std::cout << "A string has been deleted" << std::endl;
}
