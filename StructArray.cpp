#include <iostream>
using namespace std;

// Constants, Structure, Classes
struct Part
{
    int modelNum;
    int partNum;
    float cost;
};
const int SIZE = 4;

// Prototypes
void partInput(Part pi[SIZE]);

// Main Program Program
int main()
{
    Part p[SIZE];
    partInput(p);

    return 0;

}

// Function Definitions
void partInput(Part pi[SIZE])
{
    for(int i = 0; i < SIZE; i++)
    {
        cout << "Enter model number: ";
        cin >> pi[i].modelNum;
        cout << "Enter part number: ";
        cin >> pi[i].partNum;
        cout << "Enter part cost: ";
        cin >> pi[i].cost;

        cout << endl;
    }
}
