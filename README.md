String
Introduction
This lab aims at implementing a subset of the string class from the standard library (stl).

You shall find a documentation here:

http://www.cplusplus.com/reference/string/string/ (beware, when there are thumbnails, always check the C++11 one)
https://en.cppreference.com/w/cpp/string/basic_string (more thourough, more up to date, less digestible)
You will work by groups of 3 and will use git in a collaborative mode (e.g. via gitlab.com).

The general rule is you are not allowed to use external libraries in the implementation of your class (you can use whatever you like in the tests). You shall be allowed to use external libraries only after the teacher has granted authorization (don’t hesitate to ask)

1. Design
Read all the documentation of the functionalities you are to implement.

For the “maximum potential length the string can reach due to known system or library implementation limitations”, you shall use 100 as an arbitrary value that will allow for limit cases to be tested.

Discuss the data members you will need (and exactly what data they will hold) to comply with the specs.

2. Solid bases
Define a dummy string class with the data members you have identified and a default constructor that initializes the instance to non trivial content (e.g. “Hello world”). Of course this will not be the final implementation of this constructor since it doesn’t “construct an empty string” as it should.

You shall write your tests in a file named string_tests.cpp. Each test will be held in an individual function.

3. Implementation
Implement those functions that fall to you:

Student A:
copy constructor
c_str()
size()
clear()
operator=(char)
operator+(const string&, const char*)
Student B:
constructor from a c-string
length()
max_size()
resize(size_t, char)
operator=(const string&)
operator+(const string&, char)
Student C:
destructor
capacity()
empty()
reserve(size_t)
operator=(const char*)
operator+(const string&, const string&)
Hand-in
Make a bare clone of your gitlab repository named group<group_number>.git (e.g. group1.git): git clone --bare <url> group<group_number>.git).
Create an archive string_group<group_number>.tgz (e.g. string_group1.tgz) containing the bare clone, upload it to https://filesender.renater.fr/ and send us the link (david.parsons@inria.fr and sebastien.valette@creatis.insa-lyon.fr).
Deadline: January 30, 2023.