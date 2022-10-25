#include <iostream>
#include "Tips.h"

int main()
{
    using namespace std;

    string response;
    cout << "Hello World!\n";
    cout << "How are things? \n";
    cin >> response;
    if (response == "good")
    {
        cout << "Yay!\n";
    }
    else
    {
        cout << "Oh no!\n";
    }
    // This is declaring objects on the heap
    Tips* tips = new Tips();
    tips->Foo();

    // This is declaring objects on the stack
    Tips tips2;
    tips2.Foo();

}