#include "bookcatalog.h"
Bookcatalog::Bookcatalog()
{
    Container <Book> catalog(100);
    Container <Book> borrowed(100);
}
//add function
void Bookcatalog::addbook()
{

    Book book;
    book.read();
    catalog.insertatend(book);

}
//remove function
void Bookcatalog::removebook()
{
    string key;
    cout<<"\nENTER BOOK TITLE: ";
    cin.ignore();
    getline(cin,key);
    if(catalog.getsize()==0)
    {
        cout<<"\n\n\t\t#NO BOOKS YET IN THE LIBRARY"<<endl;
    }
    //remove from main catalog
    for(size_t i=0 ; i<catalog.getsize(); i++)
    {
        if(catalog[i].gettitle()==key)
        {
            catalog.removeat(i);
            cout<<"\n\n\t\tBOOK IS REMOVED SUCCESSFULLY:)"<<endl;

            break;
        }
        //if it reaches the end and no book with this title
        else if(i==(catalog.getsize()-1) )
        {
            cout<<"\n\n\t\t#NO BOOK WITH THIS TITLE EXISTS"<<endl;
        }
    }
    //remove from borrowed list
    for(size_t i=0 ; i<borrowed.getsize(); i++)
    {
        if(borrowed[i].gettitle()==key)
        {
            borrowed.removeat(i);
            break;
        }
    }
}
//search function
void Bookcatalog::search()
{
    string key;
    cout<<"\nENTER BOOK TITLE: ";
    cin.ignore();
    getline(cin,key);
    if(catalog.getsize()==0)
    {
        cout<<"\n\n\t\t#NO BOOKS YET IN THE LIBRARY"<<endl;
    }
    //if the book matches the title print it
    for(size_t i=0 ; i<catalog.getsize(); i++)
    {
        if(catalog[i].gettitle()==key)
        {
            cout<<"\n----------------------------------------";
            catalog[i].print();
            //show availability status
            if(catalog[i].isavalible())
            {
                cout<<"\nBOOK IS AVAILIBLE"<<endl;
            }
            else
            {
                cout<<"\nBOOK IS BORROWED"<<endl;
            }
            break;
        }
        //if it reaches the end and no book with this title
        else if(i==(catalog.getsize()-1) )
        {
            cout<<"\n\n\t\t#NO BOOK WITH THIS TITLE EXISTS"<<endl;
        }
    }
}

//borrow function
void Bookcatalog::borrowbook()
{
    string key;
    cout<<"\nENTER BOOK TITLE: ";
    cin.ignore();
    getline(cin,key);
    if(catalog.getsize()==0)
    {
        cout<<"\n\n\t\t#NO BOOKS YET IN THE LIBRARY"<<endl;
    }
    //if the book is available and the title exist then add this book to the borrowed list
    for(size_t i=0 ; i<catalog.getsize(); i++)
    {
        if(catalog[i].gettitle()==key && catalog[i].isavalible())
        {
            cout<<"\n----------------------------------------";
            borrowed.insertatend(catalog[i]);
            catalog[i].changeavalibility();
            cout<<"\n\n\t\tBOOK IS BORROWED SUCCESSFULLY:)"<<endl;
            break;
        }
        //if it reaches the end and no book with this title
        else if(i==(catalog.getsize()-1) )
        {
            cout<<"\n\n\t\t#NO BOOK WITH THIS TITLE EXISTS"<<endl;
        }
    }

}
//sort function

/*void Bookcatalog::sortcontainer()
{
    if(catalog.getsize()==0)
    {
        cout<<"\n\n\t\t#NO BOOKS YET IN THE LIBRARY"<<endl;

    }
    else
    {
        for(size_t i=0 ; i<catalog.getsize()-1; i++)
        {
            size_t index=i;
            string word = catalog[i].gettitle();
            for(size_t j=i+1; j<catalog.getsize(); j++)
            {
                string word2 = catalog[j].gettitle();
                for(size_t l=0; l<max(word.size(),word2.size()); l++)
                {
                    if(word[l]==' '||word2[l]==' '  )
                    {
                        continue;
                    }
                   else if(word[l]>word2[l])
                    {
                       index =j;

                    }
                }
 catalog.swapob(catalog[index],catalog[i]);

            }


        }
    }

    for(size_t i=0 ; i<catalog.getsize(); i++)
    {
        catalog[i].print();
        cout<<"----------------------------------------";
    }
}*/

//statistics function
void Bookcatalog::statistics()
{
    if(catalog.getsize()==0)
    {
        cout<<"\n\n\t\t#NO BOOKS YET IN THE LIBRARY"<<endl;
        cout<<"----------------------------------------";
    }
    else
    {
        //print available list
        cout<<"\n\n\t\t#AVAILABLE BOOKS IN THE LIBRARY"<<endl;
        cout<<"----------------------------------------";
        size_t cavailible=0 ;
        size_t count =0;
        for(size_t i=0 ; i<catalog.getsize(); i++)
        {
            if(catalog[i].isavalible())
            {
                catalog[i].print();
                count++;
                cavailible++;
                cout<<"----------------------------------------";
            }
            else if(count==0 && i==(catalog.getsize()-1))
            {
                cout<<"\n\n\t\t#NO BOOKS AVAILABLE IN THE MEANTIME :("<<endl;
            }
        }
        cout<<"\n\n#TOTAL BOOKS AVAILABLE: "<<cavailible<<endl;
        //print borrowed list
        cout<<"\n-------------------------------------------------------------------";
        cout<<"\n\n\t\t#BORROWED BOOKS FROM THE LIBRARY"<<endl;
        cout<<"----------------------------------------";
        size_t cborrowed=0 ;
        if(borrowed.getsize()==0)
        {
            cout<<"\n\n\t\t#NO BOOKS BORROWED IN THE MEANTIME :("<<endl;
        }
        for(size_t i=0 ; i<borrowed.getsize(); i++)
        {
            if( borrowed[i].isavalible())
            {
                borrowed[i].print();
                cborrowed++;
                cout<<"----------------------------------------";
            }
        }
        cout<<"\n\n#TOTAL BOOKS BORROWED: "<<cborrowed<<endl;
    }
}

Bookcatalog ::~Bookcatalog()
{
    //dtor
}
