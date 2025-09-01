#pragma once
#include <string>

class Author {
    std::string name;
    std::string surname;
public:
    Author(const std::string& name = "", const std::string& surname = "");
    void print() const;
    std::string toString() const;
    std::string getName() const;
    std::string getSurname() const;
};
