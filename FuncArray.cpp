#include <iostream>
using namespace std;

const int SIZE = 3;

/* Prototypes */
// Arrays are passed reference
void AgeInput(int iage[SIZE]);
void ShowAge(int iage[SIZE]);

// void AgeInput(int age[]);        <- Another notation

int main()
{
    /* Define an array of 3 integers */
    int age[SIZE];
    // Declare and initialize an array of 3 members
    int age2[SIZE] = {99, 21, 33};

    AgeInput(age);

    ShowAge(age);

}
// Function Definitions
void AgeInput(int iage[SIZE])
{
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter your age: ";
        cin >> iage[i];
    }
}
void ShowAge(int iage[SIZE])
{
    for (int i = 0; i < SIZE; i++) {
        cout << "\nAge " << i << " is " << iage[i];
    }
}