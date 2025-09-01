#include "book.h"
#include <iostream>
Book::Book() : title(""), author(Author()), publicationYear(0), chapters() {}
Book::Book(const std::string& t, const Author& a, int y, const std::vector<Chapter>& ch)
    : title(t), author(a), publicationYear(y), chapters(ch) {}
void Book::addChapter(Chapter& c) { chapters.push_back(c); }
void Book::displayInfo() const {
    std::cout << title << " (" << publicationYear << ")\n";
    for (const auto& ch : chapters) ch.displayInfo();
}
std::string Book::getTitle() const { return title; }
Author Book::getAuthor() const { return author; }
int Book::getPublicationYear() const { return publicationYear; }
std::vector<Chapter> Book::getChapters() const { return chapters; }
