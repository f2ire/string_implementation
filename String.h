//
// Created by Yanis on 17/01/2023.
//

#ifndef STRING_PROJECT_STRING_H
#define STRING_PROJECT_STRING_H


class String {
public:
    String();
    String(char* cstr);
    ~String();
    char* Accessor();
    int length();
    int max_size();
    //String resize(int n, char c);

private:
    char* content_ = nullptr;
    int length_ = 0;
};



#endif //STRING_PROJECT_STRING_H
