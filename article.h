#pragma once
#include <string>
#include "author.h"

class Article {
    std::string title;
    Author author;
    int publicationYear{};
    std::string journal;
public:
    Article();
    Article(const std::string& title, const Author& author, int year, const std::string& journal);
    Article(const Article& other);

    void displayInfo() const;
    std::string getTitle() const;
    Author getAuthor() const;
    int getPublicationYear() const;
    std::string getJournal() const;
};
