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

const char* String::Accessor() const{
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


//constructeur copie qui prend en entrée un pointeur de caractère
String::String(const char* c) {
    int len = 0;
    for (int i = 0; c[i] != '\0'; i++)
        len++;
    content_ = new char[len + 1];
    for (int i = 0; i < len; i++)
        content_[i] = c[i];
    content_[len] = '\0';
    length_ = len;
}


//operator+(const string&, const char*)


String String::operator+(const char* rhs) {
    //calcul de la longueur de la chaine rhs
    int len_rhs = 0;
    for (int i = 0; rhs[i] != '\0'; i++)
        len_rhs++;
    //allocation de la nouvelle chaine
    char* newContent = new char[length_ + len_rhs + 1];
    //copie de content_
    int i;
    for (i = 0; content_[i] != '\0'; i++)
        newContent[i] = content_[i];
    //concatenation de rhs
    for (int j = 0; rhs[j] != '\0'; j++)
        newContent[i + j] = rhs[j];
    newContent[length_ + len_rhs] = '\0';
    String newString = String(newContent);
    delete[] newContent;
    return newString;
}
