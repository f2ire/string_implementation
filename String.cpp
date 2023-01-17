//
// Created by Yanis on 17/01/2023.
//

#include "String.h"

String::String() {
    content_ = "Hello World";
}

const char *String::Accessor(String str) {
    return str.content_;
}
