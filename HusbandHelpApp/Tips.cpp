#include <iostream>
#include <string>
#include <conio.h>
#include "Tips.h"

using namespace std;

Tips::Tips()
{
	
}

void Tips::Greeting()
{
	cout << m_welcomeMessage;
	
}

IssueType Tips::SelectIssue()
{
	cout << m_angryWifeString;
	cout << m_sadWifeString;
	cout << m_unsureWifeString;

	bool firstTime = true;
	IssueType selection;
	int numSelect;
	bool loopAgain = true;

	// Get response from user
	do 
	{
		if (!firstTime)
		{
			cout << endl << "Please select a valid response: 1, 2, 3" << endl;
		}
		firstTime = false;
		numSelect = _getche();
		loopAgain = (numSelect < '1') || (numSelect > '3');
	} while (loopAgain);

	numSelect = numSelect == '1' ? 1 : numSelect == '2' ? 2 : 3;
	selection = static_cast<IssueType>(numSelect);
		
	return selection;
}

void Tips::ShowAdvice(IssueType issue)
{
	string(&questionBank)[3] = issue == angryWife ? m_questionAngry : issue == sadWife ? m_questionSad : m_questionsUnsure;
	cout << questionBank[0] << endl;
	cout << endl << m_questionResponse << endl;
	int response = GetResponse();
	if (response == 1)
	{
		int selection = 1;
		ShowAnswers(issue, selection);
	}
	else
	{
		cout << questionBank[1] << endl;
		cout << endl << m_questionResponse << endl;

		response = GetResponse();
		if (response == 1)
		{
			int selection = 2;
			ShowAnswers(issue, selection);
		}
		else
		{
			cout << questionBank[2] << endl;
			cout << endl << m_questionResponse << endl;

			response = GetResponse();
			if (response == 1)
			{
				int selection = 3;
				ShowAnswers(issue, selection);
			}
			else
			{
				cout << questionBank[2] << endl;
				cout << endl << m_nothingWrong << endl;
			}
		}
	}
}

int Tips::GetResponse()
{
	bool firstTime = true;
	int numSelect;
	do
	{
		if (!firstTime)
		{
			cout << endl << "Please select a valid response: 1 or 2" << endl;
		}
		firstTime = false;
		numSelect = _getche();	} while (numSelect < '1' || numSelect > '2');

	if (numSelect == '1')
		numSelect = 1;
	else
		numSelect = 2;
	cout << endl;

	return numSelect;
}

void Tips::ShowAnswers(IssueType issue, int number)
{
	int randomIndex = rand() % 3;
	if (issue == angryWife)
	{
		if (number == 1)
		{
			cout << endl << m_adviceStupid[randomIndex] << endl;
		}
		else if (number == 2)
		{
			cout << endl << m_adviceEat[randomIndex] << endl;
		}
		else
		{
			cout << endl << m_adviceClean[randomIndex] << endl;
		}
	}
	else if (issue == sadWife)
	{
		if (number == 1)
		{
			cout << endl << m_adviceForgotToLove[randomIndex] << endl;
		}
		else if (number == 2)
		{
			cout << endl << m_adviceEat[randomIndex] << endl;
		}
		else
		{
			cout << endl << m_adviceActuallySad[randomIndex] << endl;
		}
	}
	else if (issue == unsureWife)
	{
		if (number == 1)
		{
			cout << endl << m_adviceStupid[randomIndex] << endl;
		}
		else if (number == 2)
		{
			cout << endl << m_adviceEat[randomIndex] << endl;
		}
		else
		{
			cout << endl << m_advicePush[randomIndex] << endl;
		}
	}
}