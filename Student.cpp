#include "Student.h"
#include <iostream>

Student::Student(int Id, string n, int days) : User(Id, n) // Constructor chaining
{
    DaysLate = days;
}

float Student::calculateFine() const
{
    return DaysLate * 2.0f;
}

void Student::display() const
{
    User::display();
    cout << "Days Late: " << DaysLate
         << " Total Fine: " << calculateFine() << endl;
}
