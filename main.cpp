#include <iostream>
#include "Book.h"
#include "User.h"
#include "Student.h"

using namespace std;

int main()
{
    Book b1(101, "C++ programming", 450);

    User *u; // Base class Pointer

    u = new Student(38, "Harsh", 5);

    u->display(); // runtime binding

    delete u;
}