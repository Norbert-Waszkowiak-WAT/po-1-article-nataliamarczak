#include "article.h"
#include <iostream>
Article::Article() : title(""), author(Author()), publicationYear(0), journal("") {}
Article::Article(const std::string& t, const Author& a, int y, const std::string& j)
    : title(t), author(a), publicationYear(y), journal(j) {}
Article::Article(const Article& o)
    : title(o.title), author(o.author), publicationYear(o.publicationYear), journal(o.journal) {}
void Article::displayInfo() const { std::cout << title << " (" << publicationYear << ") " << journal; }
std::string Article::getTitle() const { return title; }
Author Article::getAuthor() const { return author; }
int Article::getPublicationYear() const { return publicationYear; }
std::string Article::getJournal() const { return journal; }
