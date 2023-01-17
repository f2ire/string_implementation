//
// Created by Yanis on 17/01/2023.
//

#ifndef STRING_PROJECT_STRING_H
#define STRING_PROJECT_STRING_H


class String {
public:
    String();
    ~String();
    String(const String& other); //copy constructor
    const char* c_str() const; //c_string
    const char* Accessor() const;
    int length();
    int capacity() const;
    bool empty() const;
    void reserve(int n);
    String& operator=(const char*);
    friend String operator+(const String& str1, const String& str2); //implicit meaning operator+ is not member, and static don't work bc of operator
    int size(); //size
    void clear();


private:
    char* content_ = nullptr;
    int length_ = 0;
    int size_ = 0;
    int capacity_ = 0;
    int max_ = 100;
};

String operator+(const String& str1, const String& str2); //friend dont declare


#endif //STRING_PROJECT_STRING_H
