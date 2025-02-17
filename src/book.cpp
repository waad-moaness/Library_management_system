#include "book.h"

Book::Book()
{
    avalible = true;
}
void Book::read(){
    cout<<"\nENTER BOOK TITLE: ";
    cin. ignore ();
    getline(cin,title);
    cout<<"\nENTER BOOK AUTHOR: ";
    getline(cin,author);
     cout<<"\nENTER BOOK GENRE: ";
    getline(cin,genre);
     cout<<"\nENTER BOOK ISBN: ";
    getline(cin,ISBN);
}
  bool Book::isavalible()
    {
        return avalible;
    }
    void Book::print ()
    {
        cout<<"\nBOOK TITLE: "<< title<<endl;
        cout<<"\nBOOK AUTHOR: "<< author<<endl;
        cout<<"\nBOOK GENRE: "<< genre<<endl;
        cout<<"\nBOOK ISBN: "<< ISBN<<endl;
    }

    void Book::changeavalibility()
    {
        avalible = false;
    }
string Book::gettitle() {
   return title;
}
string Book::getauthor() {
    return author;
}
string Book::getgenre() {
   return genre;
}
string Book::getisbn() {
    return ISBN;
}



Book::~Book()
{
    //dtor
}
