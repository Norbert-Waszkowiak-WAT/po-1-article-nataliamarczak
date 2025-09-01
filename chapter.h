#pragma once
#include <string>
#include "author.h"
#include "article.h"

class Chapter {
    std::string title;
    Author author;
    int chapterNumber{};
public:
    Chapter();
    Chapter(const std::string& title, const Author& author, int number);
    Chapter(const Chapter& other);
    Chapter(Article& article);

    void displayInfo() const;
    std::string getTitle() const;
    Author getAuthor() const;
    int getChapterNumber() const;
};
