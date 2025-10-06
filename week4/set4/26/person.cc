#include <iostream>
#include "person.h"

Person::Person()
{
    // Default constructor - initializes phone to empty string
    phone = "";
}


bool Person::setPhone(const std::string& phoneNumber)
{
    // Validate that phone number contains only digits
    for (char c : phoneNumber)
    {
        if (c < '0' || c > '9')
        {
            std::cerr << "Invalid phone number. Only digits are allowed.\n";
            return false;
        }
    }
    phone = phoneNumber;
    return true;
}

std::string Person::getPhone() const
{
    return phone;
}

void Person::display() const
{
    std::cout << "Phone: " << phone << std::endl;
}