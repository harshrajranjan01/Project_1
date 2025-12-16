#include <iostream>
#include "Book.h"
#include "User.h"
#include "Student.h"

using namespace std;

int main()
{
    Book b1(101, "c programming", 200);
    Book b2(102, "OOPs ", 520);
    Book b3(103, "DSA", 350);

    b1.writeToFile();
    b2.writeToFile();
    b3.writeToFile();

    cout << "All Books: " << endl;
    Book::readAllFromFile();
    cout << endl;

    cout << "Updatting Price of book id 101" << endl;

    Book::updatePriceById(101, 900);

    cout << "After Updating the file" << endl;
    Book::readAllFromFile();

    return 0;
}