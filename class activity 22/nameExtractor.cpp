#include "nameExtractor.hpp"
#include <sstream>
#include <iostream>

std::string extractFirstName(const std::string& fullName) {
    std::istringstream iss(fullName);
    std::string firstName;
    iss >> firstName;  // First token is the first name
    return firstName;
}

std::string extractLastName(const std::string& fullName) {
    std::istringstream iss(fullName);
    std::string lastName, word;

    while (iss >> word) {
        lastName = word;  // Continue till the last token
    }
    return lastName;
}
