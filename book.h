#pragma once
#include <string>
#include <vector>
#include "author.h"
#include "chapter.h"

using std::vector;

class Book {
    std::string title;
    Author author;
    int publicationYear{};
    std::vector<Chapter> chapters;

public:
    Book();
    Book(const std::string& title, const Author& author, int year,
         const std::vector<Chapter>& chapters);

    void addChapter(Chapter& chapter);
    void displayInfo() const;

    std::string getTitle() const;
    Author getAuthor() const;
    int getPublicationYear() const;
    std::vector<Chapter> getChapters() const;
};
