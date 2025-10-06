#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
    private:
        std::string phone;

    public:
        // Constructor
        Person();

        // Set phone number - validates that it contains only digits
        bool setPhone(const std::string& phoneNumber);

        // Getter for phone number
        std::string getPhone() const;

        // Display person information
        void display() const;
};

#endif // PERSON_H

