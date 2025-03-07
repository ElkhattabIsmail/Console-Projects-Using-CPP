
#include <iostream>
using namespace std;

enum enchoices { stone = 1, paper = 2, scissor = 3 };

int readNumberOFrounds(string message)
{
	int numRounds = 0;
	do
	{
		cout << message << endl;
		cin >> numRounds;
	} while (numRounds <= 0);
	return numRounds;
}
int randomNumber(int from, int to)
{
	//Function to generate a random number

	int  randNum = rand() % (to - from + 1) + from;
	return randNum;
}
void showChoices()
{
	cout << "your choice : [1]:stone, [2]:paper, [3]:scissor ? ";
}
enchoices checkChoice(int playerschoice)
{
	switch (playerschoice)
	{
	case 1:
		return enchoices::stone;
	case 2:
		return enchoices::paper;
	case 3:
		return enchoices::scissor;
	default:
		;
	}
}
string printchoice(int playerschoice)
{
	if (checkChoice(playerschoice) == enchoices::stone)
		return "stone";
	else if (checkChoice(playerschoice) == enchoices::paper)
		return "paper";
	if (checkChoice(playerschoice) == enchoices::scissor)
		return "scissor";
}
string whoISthewinner(int playerChoice, int computerChoice)
{

	if ((checkChoice(playerChoice) == enchoices::stone && checkChoice(computerChoice) == enchoices::scissor)
		|| (checkChoice(playerChoice) == enchoices::paper && checkChoice(computerChoice) == enchoices::stone)
		|| (checkChoice(playerChoice) == enchoices::scissor && checkChoice(computerChoice) == enchoices::paper))
	{
		return "[player]";
	}

	else if ((checkChoice(playerChoice) == enchoices::stone && checkChoice(computerChoice) == enchoices::paper)
		|| (checkChoice(playerChoice) == enchoices::paper && checkChoice(computerChoice) == enchoices::scissor)
		|| (checkChoice(playerChoice) == enchoices::scissor && checkChoice(computerChoice) == enchoices::stone)
		)
	{
		return "[computer]";
	}
		
	else
		return "[NO winner]";
}
int gameStatistique(int playerChoice, int computerChoice)
{
	if (whoISthewinner(playerChoice, computerChoice) == "[player]")
		return 1;
	else if (whoISthewinner(playerChoice, computerChoice) == "[computer]")
		return 2;
	else
		return 3;
}
string finalwinner(int pcwinner, int playerwin, int draw)
{
	if (pcwinner > playerwin)
		return "computer";
	else if (playerwin> pcwinner)
		return "player";
	else
		return "NO winner";
}
void GameStatistique(int NumberOFrounds ,int pcwinner, int playerwin, int draw)
{
	cout << "                   ___________________________________________________\n\n";
	cout << "                            +++ G A M E  O V E R + + +\n";
	cout << "                   ___________________________________________________\n\n";
	cout << "                   ________________[game results]_____________________\n\n";
	cout << "                   game rounds        : " << NumberOFrounds<<"\n";
	cout << "                   player won times   : " << playerwin << "\n";
	cout << "                   computer won times : " << pcwinner << "\n";
	cout << "                   draw times         : " << draw << "\n";
	cout << "                   final winner       : " << finalwinner(pcwinner,playerwin,draw)<<  "\n";

}
void StartTheGame(int& NumberOFrounds, int& playerChoice, int& computerChoice)
{
	NumberOFrounds = readNumberOFrounds("how many rounds want to play?: ");

	int pcwinner = 0;
	int playerwin = 0;
	int draw = 0;
	for (int i = 0; i < NumberOFrounds; i++)
	{
		cout << "round [" << i + 1 << "] begins:\n\n";
		showChoices();
		cin >> playerChoice;

		computerChoice = randomNumber(1, 3);
		cout << "\n_______________round [" << i+1 << "]________________\n\n";
		cout << "player choice: " << printchoice( playerChoice) << endl;
		cout << "computer choice: " << printchoice(computerChoice) << endl;
		cout << "round winner: "<< whoISthewinner(playerChoice,computerChoice);
		cout << "\n\n__________________________________________________\n\n";
		
		if (whoISthewinner( playerChoice,computerChoice) =="[player]")
		{
			system("color 2F");
			playerwin++;
		}

		else if (whoISthewinner(playerChoice, computerChoice) == "[computer]")
		{
			system("color 4F");
			pcwinner++;
		}
			
		else
		{
			system("color 6F");
			draw++;
		}
	}
	cout << endl;
	GameStatistique(NumberOFrounds, pcwinner, playerwin, draw);
}

int main()
{
	srand((unsigned)time(NULL)); //imp
	int  rounds[10],NumberOFrounds = 0;
	int  playerChoice=0, computerChoice=0;
	char again;
	do
	{

		system("CLS");
		system("color 0F");
		StartTheGame(NumberOFrounds, playerChoice, computerChoice);
		cout << "                   do you want to play again? Y/N? ";
		cin >> again;
	} while (again != 'n');
}