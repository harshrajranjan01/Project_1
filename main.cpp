#include <iostream>
#include "Book.h"
#include "User.h"
#include "Student.h"

using namespace std;

int main()
{
    Book b1;
    cin >> b1;
    ++b1;
    cout << b1 << endl;

    User *u; // Base class Pointer

    u = new Student(38, "Harsh", 5);

    u->display(); // runtime binding

    delete u; // calls derived destructor
}