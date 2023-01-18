//
// Created by Yanis on 17/01/2023.
//

#include "String.h"
#include <iostream>

String::String()
{
    char* txt = new char[12];
    const char* txt_to_copy = "Hello World";
    for (int i = 0; i <= 11; i++) {
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



const char* String::Accessor() const{
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
    std::cout << "A string has been deleted" << std::endl; //TODO: To delete
}


String::String(const String& other) {
    content_ = other.content_;
}

int String::capacity() const{
    return capacity_;
}

bool String::empty() const{
    return length_ == 0;
}

void String::reserve(int n = 0) {
        if (n < capacity_ or n > max_) {
            std::cout << "Capacity asked for too small compare to the capacity of the string" << std::endl;
        }
        else {
            char* new_content = new char[n+1];
            for (int i=0; i <= length_; i++){
                new_content[i] = content_[i];
            }
            delete content_;
            content_ = new_content;
            capacity_ = n;
        }
}

String& String::operator=(const char* new_str) {

    int i = 0;
    while (new_str[i])
        i++;
    length_ = i;
    capacity_ = i;
    delete content_;
    content_ = new char[i+1];
    for (int j = 0; j <= i; j++) {
        content_[j] = new_str[j];
    }
    return *this;
}

String operator+(const String& str1, const String& str2) {
    int i = str1.length_;
    int j = str2.length_;
    int k = 0;
    auto new_str = String();
    new_str.reserve(i+j);

    while (k < i+j) {
        if (k < i) {
            new_str.content_[k] = str1.content_[k];
        } else {
            new_str.content_[k] = str2.content_[k-i];
        }
        k++;
    }
    new_str.content_[k] = '\0';
    new_str.length_ = i+j;
    return new_str;
}

// c_string

const char* String::c_str() const {
    return content_;
}

// size
int String::size() {
    int i = 0;
    while (content_[i])
        i++;
    return i;
}

// clear

void String::clear(){
  delete[] content_;
  content_ = new char[1];
  content_[0] = '\0';
  length_ = 0;

}


//operator=(char) 

String& String::operator=(char c) {
    delete[] content_;
    content_ = new char[2];
    content_[0] = c;
    content_[1] = '\0';
    length_ = 1;
    return *this;
}
