#include <iostream>
#include "Tips.h"

using namespace std;

int main()
{
    Tips* tips = new Tips();

    tips->Greeting();
    IssueType typeOfIssue =  tips->SelectIssue();

        
    // This is declaring objects on the heap
    
    

    // This is declaring objects on the stack
    //Tips tips2;
    
}