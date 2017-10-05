#include <iostream>
#include <string>       // C++ string class

using namespace std;

// Constants, Structure, Classes

// Prototypes

// Main Program Program

int main()
{
    string s1;      // Define a string
    string s2 = "Waldo Weber";      // Define and initialize a string
    string s3("Waldo Weber University");       // Another way to declare and initialize(not as common)

    s1 = s3;        // Assignment
    cout << "S1 " << s1 << endl;
    s1 += s2;       // Concatenation
    cout << "S1 " << s1 << endl;
    cout << "S2 " << s2 << endl;
    cout << "S3 " << s3 << endl;

    // Swap values
    s1.swap(s2);
    cout << "S1 " << s1 << endl;
    cout << "S2 " << s2 << endl;
    cout << "S3 " << s3 << endl;

    return 0;

}

// Function Definitions