#include "Book.h"
#include <iostream>

int Book::bookCount=0;
Book::Book() // Book Constructor outside class
{

    id = 0;
    title = "NA";
    price = 0;
    bookCount++;
}

Book::Book(int i, string t, float p)
{
    id = i;
    title = t;
    price = p;
    bookCount++;
}

Book::Book(const Book& b)
{
    id=b.id;
    title=b.title;
    price=b.price;
    bookCount++;
}

void Book::setData(int i, string t, float p)
{
    id=i;
    title=t;
    price=p;
}

void Book::setData(int i,string t)
{
    id=i;
    title=t;
    price=0;
}

int Book::getBookCount()
{   
    return bookCount;
}


void Book::display() const
{
    cout << "Id: " << id
         << ", Title: " << title
         << ", Price: " << price << endl;
}