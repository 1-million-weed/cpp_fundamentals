#ifndef CLASS_H_
#define CLASS_H_

#include <iostream>
#include <string>
using namespace std;

class Student
{
    string name;      // private data
    int age;          // private data
    bool gender;      // private data:  0 - male; 1 - female
public:
    // constructor
    Student(string name, int age, bool gender)

    // methods to work with the data
    void ageUp();  // one year passes, ae goes up by 1

    // methods to access private data
    string getName();
    int getAge();
    bool getGender();
}

#endif