//
// Created by Yanis on 17/01/2023.
//

#ifndef STRING_PROJECT_STRING_H
#define STRING_PROJECT_STRING_H


class String {
public:
    String();

    static const char* Accessor(String str);

private:
    const char* content_;
};



#endif //STRING_PROJECT_STRING_H
