//
// Created by Yanis on 17/01/2023.
//

#include "String.h"
#include <iostream>

//Constructors
String::String()
{
    char* txt = new char[12];
    const char* txt_to_copy = "Hello World";
    for (int i = 0; i <= 11; i++) {
        txt[i] = txt_to_copy[i];
    }
    length_ = 11;
    size_ = 11;
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

String::String(const String& other) {
    content_ = new char[other.length_+1];
    for (int i=0; i <= other.length_; i++) {
        content_[i] = other.content_[i];
    }
    size_ = other.size_;
    length_ = other.length_;
    capacity_ = other.capacity_;
}

String::String(const char* c) {
    int len = 0;
    for (int i = 0; c[i] != '\0'; i++)
        len++;
    content_ = new char[len + 1];
    for (int i = 0; i < len; i++)
        content_[i] = c[i];
    content_[len] = '\0';
    length_ = len;
    size_ = len;
    capacity_ = len;
}

//destructors
String::~String()
{
    delete content_;
    std::cout << "A string has been deleted" << std::endl; //TODO: To delete
}


//Accessors
const char* String::c_str() const{
    return content_;
}

//Capacity
void String::clear(){
    delete content_;
    content_ = new char[1];
    content_[0] = '\0';
    length_ = 0;
    size_ = 0;

}

int String::size() {
    return size_;
}

int String::length() {
    return length_;
}

int String::max_size() const{
    return max_;
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


//Operations
//TODO: void resize(int n, char); //B

//Member functions

String& String::operator=(char c) {
    delete content_;
    content_ = new char[2];
    content_[0] = c;
    content_[1] = '\0';
    length_ = 1;
    size_ = 1;
    return *this;
}

//TODO: operator=(const String& str); //B

String& String::operator=(const char* new_str) {

    int i = 0;
    while (new_str[i])
        i++;
    length_ = i;
    size_ = i;
    capacity_ = i;
    delete content_;
    content_ = new char[i+1];
    for (int j = 0; j <= i; j++) {
        content_[j] = new_str[j];
    }
    return *this;
}

//Non-member functions

String operator+(const String& str, const char* chr) {
    int len_chr = 0;
    while (chr[len_chr])
        len_chr++;
    auto new_str = String(str);
    new_str.reserve(str.length_+len_chr);
    for (int i = 0; i <= len_chr; i++) {
        new_str.content_[str.length_+i] = chr[i];
    }
    new_str.length_ += len_chr;
    new_str.size_ += len_chr;
    return new_str;
}

//TODO: operator+(const String&,char);

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
    new_str.size_ = i+j;
    return new_str;
}
