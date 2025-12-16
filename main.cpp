#include <iostream>
#include "Library.h"

using namespace std;

int main()
{
    Library lib;

    lib.addBook(Book(1, "C++", 450));
    lib.addBook(Book(2, "Dsa", 300));
    lib.addBook(Book(3, "Python", 500));

    cout << "All Books:" << endl;
    lib.displayAll();

    cout << "Sorted By Price" << endl;
    lib.sortByPrice();
    lib.displayAll();

    cout << "Find Book wiht ID: 2" << endl;

    cout << (lib.findById(2) ? "Book Found" : "Book Not Found") << endl;
    return 0;
}