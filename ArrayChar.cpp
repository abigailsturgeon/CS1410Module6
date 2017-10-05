#include <iostream>
using namespace std;

// Constants, Structure, Classes
const int MAX = 80;

int main()
{
    char st[MAX];
    // cout << "Enter your first name: ";
    // cin >> st;
    // cout << "Hello " << st << endl;

    // Let compiler calculate the space
    // String constants
    char hi[] = "Hello Weber State University Students!";
    cout << hi << endl;

    // To support embedded blanks, use cin.get() function
    cout << "Enter your full name: ";
    cin.get(st,MAX);
    cout << "Hello " << st << endl;


    return 0;

}
