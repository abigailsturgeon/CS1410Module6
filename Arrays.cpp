#include <iostream>
using namespace std;

const int SIZE = 3;

int main()
{
    /* Define an array of 3 integers */
    int age[SIZE];
    // Declare and initialize an array of 3 members
    int age2[SIZE] = {99, 21, 33};

    // Take input
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter your age: ";
        cin >> age[i];
    }

    // Print
    for(int i = 0; i < SIZE; i++)
    {
        cout << "\nAge" << i << " is " << age[i];
        cout << "\nAge2 " << i << " is " << age2[i];
    }

    age[0] = 123;
    for(int i = 0; i < SIZE; i++)
    {
        cout << "\nAge" << i << " is " << age[i];
    }

    return 0;
}