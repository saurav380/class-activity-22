#include <iostream>
#include <string>
#include "nameExtractor.hpp"

int main() {
    std::string fullName;

    std::cout << "Enter the full name: ";
    std::getline(std::cin, fullName);

    std::string firstName = extractFirstName(fullName);
    std::string lastName = extractLastName(fullName);

    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;

    return 0;
}
