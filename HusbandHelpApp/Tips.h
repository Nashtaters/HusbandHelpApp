#include <string>
#include "IssueTypes.h"

using namespace std;

class Tips
{
public:
	Tips();

	void Greeting();

	IssueType SelectIssue();

protected:
	string m_welcomeMessage = "Welcome to the Husband Help Line.\nWhat seems to be the issue?\n";

	string m_angryWifeString = "1.) My wife is angry\n";
	string m_sadWifeString = "2.) My wife is crying hysterically\n";
	string m_unsureWifeString = "3.) My wife is 'fine'\n";

	string m_questionAngry[3] = { "Have you done anything stupid?\n", "Has she not eaten in the last 2 hours?\n", "Is the house unclean?\n" };
	string m_questionSad[3] = {"Have you forgotten to tell her you loved her today?\n", "Has she not eaten in the last 2 hours?\n", "Did something actually sad happen?\n"};
	string m_questionsUnsure[3] = { "Have you done anything stupid?\n", "Has she not eaten in the last 2 hours?\n", "Did you kick her off the bed in your sleep?\n" };

	string m_questionResponse[2] = { "1.) Yes\n", "2.) No\n" };

	string m_adviceStupid[3] = {"Fix it\n", "Flowers and chocolate\n", "Give her your credit card and tell her to go to Target\n"};
	string m_adviceEat[3] = {"Get her a cheese stick\n", "Suggest fast food that *she* likes\n", "Surpise her with a homemade meal\n"};
	string m_adviceClean[3] = { "Get off your lazy booty and clean it\n", "Hire a maid\n", "Do not suggest she clean it\n" };
	string m_adviceForgotToLove[3] = {"Tell her you love her you weirdo\n", "Flowers and chocolate\n", "Show her you love her\n"};
	string m_adviceActuallySad[3] = { "Buy her a puppy\n", "Hold her tight\n", "Ask her if she wants to talk about it, don't force her\n" };
	string m_advicePush[3] = {"Buy a bigger bed\n", "Sleep on the couch\n", "Treat her like a Princess\n"};

	string m_nothingWrong = "You are overthinking it\n";

	string m_loopingQuestion = "Do you need more advice?\n";

private:
};
