#include "Book.h"
#include <iostream>

Book::Book() // Book Constructor outside class
{

    id = 0;
    title = "NA";
    price = 0;
}
 Book::Book(int i, string t, float p)
{
    id=i;
    title=t;
    price=p;
}

void Book::display() const
{
    cout<<"Id: "<<id
        <<"Title: "<<title
        <<"Price "<< price<<endl;

}