#include <iostream>
#include "person.h"

int main()
{
    // Create a Person object
    Person person;
    
    // Set a valid phone number
    person.setPhone("1234567890");
    
    // Display the person's information
    person.display();
    
    // Try setting an invalid phone number
    person.setPhone("123-456-7890");
    
    return 0;
}