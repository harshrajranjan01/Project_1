#include <iostream>
#include "Book.h"
#include "User.h"
#include "Student.h"

using namespace std;

int main()
{
    try
    {
        Book b1(101, "c programming", 200);
        b1.display();
        Book b2(102, "OOP", -520);
        b2.display();
    }
    catch (const exception &e)
    {
        cerr << "Exception caught: " << e.what() << endl;
    }

    try
    {
        User *u = new Student(1, "Harsh", -10);
        u->display();
        delete u;
    }
    catch (const exception &e)
    {
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}