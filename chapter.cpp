#include "chapter.h"
#include <iostream>
Chapter::Chapter() : title(""), author(Author()), chapterNumber(1) {}
Chapter::Chapter(const std::string& t, const Author& a, int n) : title(t), author(a), chapterNumber(n) {}
Chapter::Chapter(const Chapter& o) : title(o.title), author(o.author), chapterNumber(o.chapterNumber) {}
Chapter::Chapter(Article& a) : title(a.getTitle()), author(a.getAuthor()), chapterNumber(1) {}
void Chapter::displayInfo() const {std::cout << "Chapter " << chapterNumber << ": " << title<< " by " << author.getName() << " " << author.getSurname()<< '\n';}
std::string Chapter::getTitle() const { return title; }
Author Chapter::getAuthor() const { return author; }
int Chapter::getChapterNumber() const { return chapterNumber; }
