#ifndef BOOK_H
#define BOOK_H

#include<string>
using namespace std;

class Book
{
    private:
    string title;
    float price;
    public:
    Book();
    Book(int,string,float);
    void display() const;

};
#endif