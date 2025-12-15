#include <iostream>
#include "Book.h"

using namespace std;

int main()
{
    Book b1(101, "C++ programming", 450);
    Book b2=b1; //copy constructor
    Book b3;
    
    b3.setData(102,"DSA");

    b1.display();
    b2.display();
    b3.display();

    cout<<"Total Books: "<<Book::getBookCount()<<endl;

}