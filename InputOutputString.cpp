#include <iostream>
#include <string>

using namespace std;

// Constants, Structure, Classes

// Prototypes

// Main Program Program

int main()
{
    string full_name, nickname, address;

    cout << "Enter your full name: ";
    getline(cin, full_name);        // Take embedded blanks

    cout << "Enter your nickname: ";
    cin >> nickname;        // Will take one string object

    cout << "Enter your address on separate lines. ";
    cout << "Terminate input with '$'.\n";
    getline(cin, address, '$');


    cout << full_name << endl;
    cout << nickname << endl;
    cout << address << endl;
    return 0;

}

// Function Definitions