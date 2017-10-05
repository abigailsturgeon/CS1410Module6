#include <iostream>
using namespace std;

// Constants, Structure, Classes
const int MAX = 10;
class Stack
{
private:
    int st[MAX];    // Stack: array of integers
    int top;        // Number of top of stack
public:
    Stack()     // Constructor
    {
        top = -1;
    }
    void push(int var)      // Put member on stack
    {
        st[++top] = var;        // Good example of when you would increment before
    }
    int pop()       // Take member off stack
    {
        return st[top--];
    }
};

// Main Program Program

int main()
{
    Stack s1;
    s1.push(11);
    s1.push(44);
    cout << "First off is " << s1.pop() << endl;
    cout << "Second off is " << s1.pop() << endl;
    s1.push(12);
    s1.push(31);
    s1.push(94);
    s1.push(144);
    cout << "Third off is " << s1.pop() << endl;
    cout << "Fourth off is " << s1.pop() << endl;

    return 0;
}

// Function Definitions