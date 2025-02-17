#include <iostream>
#include <container.h>
using namespace std;
#ifndef BOOK_H
#define BOOK_H


class Book
{
private:
    string title ;
    string author;
    string genre;
    bool avalible ;
    string ISBN;

public:
    Book();
    virtual ~Book();
    void read();
    string getauthor();
    string getgenre();
    string getisbn();
    string gettitle();
    bool isavalible();
    void print();
    void changeavalibility();
protected:



};

#endif // BOOK_H
