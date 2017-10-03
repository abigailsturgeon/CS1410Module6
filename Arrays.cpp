#include <iostream>
using namespace std;

const int SIZE = 3;

int main()
{
    /* Define an array of 3 integers */
    int age[SIZE];

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
    }

    return 0;
}