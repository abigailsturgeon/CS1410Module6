#include <iostream>
using namespace std;

const int ROW = 3;
const int COL = 3;

// Prototypes
void AgeInput(int iage[ROW][COL]);
void ShowInput(int iage[ROW][COL]);

// void AgeInput(int iage[][COL]);      <- Another notation

int main()
{
    int age[ROW][COL];
    // int age2[ROW][COL] = {{1, 2, 3,}, {21, 56, 89}, {89, 25, 4}};        <- Initializing multiple dimensions

    AgeInput(age);
    ShowInput(age);

    return 0;

}
// Function Definition
void AgeInput(int iage[ROW][COL])
{
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            cout << "Enter your age: ";
            cin >> iage[i][j];
        }
        cout << endl;
    }
}
void ShowInput(int iage[ROW][COL])
{
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            cout << "\nAge is " << iage[i][j];
        }
        cout << endl;
    }
}
