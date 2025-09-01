#include "author.h"
#include <iostream>
Author::Author(const std::string& n, const std::string& s) : name(n), surname(s) {}
void Author::print() const { std::cout << name << " " << surname << '\n'; }
std::string Author::toString() const { return name + " " + surname; }
std::string Author::getName() const { return name; }
std::string Author::getSurname() const { return surname; }
