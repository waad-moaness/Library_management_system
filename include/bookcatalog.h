#include <iostream>
#include <container.h>
#include <Book.h>
#include <bits/stdc++.h>
#ifndef BOOKCATALOG_H
#define BOOKCATALOG_H
using namespace std;

class Bookcatalog
{
private:
 Container <Book> catalog;
    Container <Book> borrowed;

public:
    Bookcatalog();
    virtual ~Bookcatalog();
    void addbook();
    void removebook();
   void search();
    void borrowbook();
    //void sortcontainer();
    void statistics();

protected:





};

#endif // BOOKCATALOG_H
