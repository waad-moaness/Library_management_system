#include <iostream>
#include <Container.h>
#include <Book.h>
#include <Bookcatalog.h>
#include <windows.h>
#include <bits/stdc++.h>
using namespace std;
Bookcatalog bookcatalog;
int main()
{
    int c=-1;
    while(c!=0)
    {
        system("cls");
        cout<<endl;
        cout<<setw(70)<<"-----------------------------"<<endl;
        cout<<setw(70)<<"| LIBRARY MANAGEMENT SYSTEM |"<<endl;
        cout<<setw(70)<<"-----------------------------"<<endl;
        cout<<"\n\n1) ADD BOOK"<<endl;
        cout<<"--------------------------";
        cout<<"\n2) REMOVE BOOK"<<endl;
        cout<<"--------------------------";
        cout<<"\n3) BORROW BOOK"<<endl;
        cout<<"--------------------------";
        cout<<"\n4) SEARCH FOR A BOOK"<<endl;
        cout<<"--------------------------";
       // cout<<"\n5) SORT BOOKS IN LIBRARY"<<endl;
       // cout<<"--------------------------";
        cout<<"\n5) SHOW STATISTICS"<<endl;
        cout<<"--------------------------";
        cout<<"\nTO EXIT PRESS(0)\n\n"<<endl;
        cout<<setw(50)<<"choose a number: ";
        cin>>c;

        switch(c)
        {

        case 1:
        {
            system("cls");
            cout<<setw(60)<<"1) ADD BOOK"<<endl;
            cout<<setw(70)<<"--------------------------\n"<<endl;
           bookcatalog.addbook();
        }
        break;
        case 2:
        {
            system("cls");
            cout<<setw(63)<<"2) REMOVE BOOK"<<endl;
            cout<<setw(70)<<"--------------------------\n"<<endl;

           bookcatalog.removebook();
            cout<<"----------------------------------------";
            cout<<"\nTO GO BACK PRESS(0): "<<endl;
            int t;
            cin>>t;
            if(t==0)
            {
                break;
            }
        }
        break;
        case 3:
        {
            system("cls");
            cout<<setw(63)<<"3) BORROW BOOK"<<endl;
            cout<<setw(70)<<"--------------------------\n"<<endl;

          bookcatalog.borrowbook();
            cout<<"----------------------------------------";
            cout<<"\nTO GO BACK PRESS(0): "<<endl;
            int t;
            cin>>t;
            if(t==0)
            {
                break;
            }

        }

        break;
        case 4:
        {
            system("cls");
            cout<<setw(65)<<"4) SEARCH FOR A BOOK"<<endl;
            cout<<setw(70)<<"--------------------------\n"<<endl;

          bookcatalog.search();
            cout<<"----------------------------------------";
            cout<<"\nTO GO BACK PRESS(0): "<<endl;
            int t;
            cin>>t;
            if(t==0)
            {
                break;
            }

        }
        break;
       /*  case 5:
        {
             system("cls");
            cout<<setw(70)<<"5) SORT BOOKS IN LIBRARY "<<endl;
            cout<<setw(72)<<"----------------------------\n"<<endl;
            cout<<"\nSORTTING BOOKS BASED ON THE BOOK'S TITLE: "<<endl;
          cout<<"----------------------------------------\n";
           bookcatalog.sortcontainer();
            cout<<"\n----------------------------------------";
            cout<<"\nTO GO BACK PRESS(0): "<<endl;
            int t;
            cin>>t;
            if(t==0)
            {
                break;
            }
        }
        break;
*/
        case 5:
        {
            system("cls");
            cout<<setw(65)<<"5) SHOW STATISTICS"<<endl;
            cout<<setw(70)<<"--------------------------\n"<<endl;
           bookcatalog.statistics();
            cout<<"\n----------------------------------------";
            cout<<"\nTO GO BACK PRESS(0): "<<endl;
            int t;
            cin>>t;
            if(t==0)
            {
                break;
            }
        }
        break;
        case 0:
        {
            cout<<"\nThanks for using the program ^^ <3"<<endl;
            return 0;
        }
        default:
            cout<<"\n ! UNVALID NUMBER :(  ! please, try again. ";
            Sleep(3000);

        }
    }

    return 0;
}

