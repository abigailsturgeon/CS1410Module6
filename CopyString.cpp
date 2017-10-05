#include <iostream>
#include<cstring> // Support for arrays of chars or C "strings"

using namespace std;

// Constants, Structure, Classes
const int MAX = 80;
const int DAYS = 7;
// Prototypes

// Main Program Program

int main()
{
    char str1[] = "Tiger, tiger, burning bright\n"
                  " in the forest of the night.";
    char str2[MAX];

    // Copy 2 strings
    strcpy(str2, str1);
    cout << "str1 is " << str1 << endl;
    cout << "str2 is " << str2 << endl;

    // An array of strings
    char days[DAYS][MAX] = {"Sunday,", "Monday", "Tuesday",
                            "Wednesday", "Thursday", "Friday", "Saturday"};
    for(int i = 0; i < DAYS; i++)
    {
        cout << i << " Day is " << days[i] << endl;
    }
    return 0;

}

// Function Definitions