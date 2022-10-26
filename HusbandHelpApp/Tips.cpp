#include <iostream>
#include <string>
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

	int answer;

	cin >> answer;
	IssueType selection = (IssueType)answer;
	/*switch (answer)
	{
	case angryWife:
		break;
	case sadWife:
		break;
	case unsureWife:
		break;
	case invalid:
	default:
		break;
	}*/
	return selection;
}
