//
// Created by Yanis on 17/01/2023.
//

#ifndef STRING_PROJECT_STRING_H
#define STRING_PROJECT_STRING_H


class String {
public:
    String();
    ~String();
    char* Accessor();
    int length();
    int capacity();
    bool empty();

private:
    char* content_ = nullptr;
    int length_ = 0;
};



#endif //STRING_PROJECT_STRING_H
