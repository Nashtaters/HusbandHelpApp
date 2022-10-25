#include <iostream>


int main()
{
    using namespace std;

    string response;
    cout << "Hello World!\n";
    cout << "How are things? \n";
    cin >> response;
    if (response == "good")
    {
        cout << "Yay!";
    }
    else
    {
        cout << "Oh no!";
    }

}