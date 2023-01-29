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
    const char* Accessor();
    int length();
    int capacity();
    bool empty();
    void reserve(int n);
    String& operator=(const char*);
    String& operator+(const String& str1, const String& str2);

private:
    char* content_ = nullptr;
    int length_ = 0;
    int capacity_ = 0;
    int max_ = 100;
};



#endif //STRING_PROJECT_STRING_H
