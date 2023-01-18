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
    }
    length_ = 11;
    content_ = txt;
    capacity_ = 11;
    /*
    char* txt = new char[1];
    const char* txt_to_copy = "";
    txt[0] = txt_to_copy[0];
    length_ = 0;
    content_ = txt;
     */
}


String::String(const String& other) {  //copy constructor
    content_ = other.content_;
}


char* String::Accessor() {
    return content_;
}

int String::length() {
    int i = 0;
    while (content_[i])
        i++;
    length_ = i;
    return i;
}

String::~String()
{
    delete content_;
    std::cout << "A string has been deleted" << std::endl;
}


int String::capacity(){
    int size_elem = sizeof(char);
    capacity_ = size_elem*length_;
    return capacity_;
}

bool String::empty() {
    if (length_ == 0) {
        return true;
    }
    else {
        return false;
    }
}

void String::reserve(int n = 0) { //TODO: To modifie because content is not updated
    if (n < capacity_ or n > max_) {
        std::cout << "Capacity asked for too small compare to the capacity of the string" << std::endl;
    }
    else {
        char* new_content[n];
        for (int i=0; i > length_; i++){
            new_content[i] = &content_[i];
        }
        delete content_;
        content_ = *new_content;
        capacity_ = n;
    }
}

String& String::operator=(const char* new_str) {

    int c = 0;
    while (new_str[c])
        c++;
    delete content_;
    content_ = new char[c + 1];
    for (int i = 0; i < c; i++) {
        content_[i] = new_str[i];
    }
    std::cout << content_ << " nv content vs ancien : " << new_str << std::endl;
}



