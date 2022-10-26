#include <iostream>
#include "Tips.h"

using namespace std;

int main()
{
    Tips* tips = new Tips();

    tips->Greeting();

    bool playAgain = false;
    do
    {
        IssueType typeOfIssue = tips->SelectIssue();
        tips->ShowAdvice(typeOfIssue);

        cout << endl << tips->m_loopingQuestion << endl;
        cout << tips->m_questionResponse << endl;

        int keepPlaying = tips->GetResponse();
        
        playAgain = keepPlaying == 1 ? true : false;
    } while (playAgain);
}