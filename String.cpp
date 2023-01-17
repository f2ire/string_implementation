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

String::String(char* cstr) {
    int i=0;
    while (cstr[i]!='/0') {
        i++;
    }
    char* txt = new char[i+1];
    for (int a = 0; a < i; a++) {
        txt[a] = cstr[a];
    };
    content_=txt;
    length_=i;
    //capacity_=i;
}

char* String::Accessor() {
    return content_;
}

int String::length() { //TODO: check if it counts all elements even if str stops before length
    int i = 0;
    while (content_[i])
        i++;
    length_=i;
    return i;
}


int String::max_size() {
    return 100;
}

/*
String String::resize(int n, char c) {
    int len=length_
    for (int a=0; a<len; a++) {
        
    };
}*/

String::~String()
{
    delete content_;
    std::cout << "A string has been deleted" << std::endl;
}
