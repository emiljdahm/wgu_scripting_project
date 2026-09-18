#include <iostream>
#include <string>
#include "student.h"
#include "roster.h"
#include "degree.h"

int main () {

Student student1 = Student(
    "A1",
    "John",
    "Smith",
    "john1989@gmail.com",
    20,
    {30, 40, 55},
    SECURITY

);
std::cout << student1.getEmail() << std::endl;
return 0;

};