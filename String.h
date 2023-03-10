//
// Created by Yanis on 17/01/2023.
//

#ifndef STRING_PROJECT_STRING_H
#define STRING_PROJECT_STRING_H


class String {
public:
    //Constructors
    String();
    String(const String& other); //A: copy constructor
    String(const char* c); //B

    //Destructor
    ~String(); //C: destructor

    //Accessors
    const char* c_str() const; //A

    //Capacity
    void clear(); //A
    int size() const; //A
    int length() const; //B
    int max_size() const; //B
    int capacity() const; //C
    bool empty() const; //C
    void reserve(int n); //C


    //Operations
    void resize(int n, char chr); //B

    //Member functions
    String& operator=(char c); //A
    String& operator=(const String&); //B
    String& operator=(const char*); //C

    //Non-member functions
    friend String operator+(const String& str, const char* chr);
    friend String operator+(const String&, char); //B
    friend String operator+(const String& str1, const String& str2); //C
    // implicit meaning operator+ is not member, and static don't work bc of operator



private:
    char* content_ = nullptr;
    int length_ = 0;
    int size_ = 0;
    int capacity_ = 0;
    int max_ = 100;
};

String operator+(const String& str1, const String& str2); //friend dont declare
String operator+(const String&, char);
String operator+(const String& str, const char* chr); //friend dont declare

#endif //STRING_PROJECT_STRING_H