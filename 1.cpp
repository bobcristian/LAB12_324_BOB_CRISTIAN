#include<iostream>
#include "Stack.h"

using namespace std;

int main()
{
    Stack<int> myIntStack;
    Stack<float> myFloatStack;

    myIntStack.push(20);
    myIntStack.push(4);
    myFloatStack.push(20.5);
    myFloatStack.push(3.45);

    myIntStack.print();
    cout << endl;
    myFloatStack.print();
    cout << endl;
    myFloatStack.pop();
    myFloatStack.print();

    return 0;
}
