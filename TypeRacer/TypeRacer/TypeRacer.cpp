#include <iostream>
#include <string>
#include <ctime>
#include <stdlib.h>
#include <windows.h>



using namespace std;
void border()
{
	cout << "              ---------------------------------------------------------------------" << endl;
	cout << "               ____       ____     ___________     ____        __     __         __" << endl;
	cout << "              |" << "    \\     /    |   |    _______|   |     \\     |  |   |  |       |  |" << endl;



	cout << "              |" << "     \\___/     |   |   |           |  |\\  \\    |  |   |  |       |  |" << endl;
	cout << "              |               |   |   |_____      |  | \\  \\   |  |   |  |       |  |" << endl;



	cout << "              |" << "   |\\     /|   |   |    _____|     |  |  \\  \\  |  |   |  |       |  |" << endl;
	cout << "              |" << "   | \\___/ |   |   |   |           |  |   \\  \\ |  |   |  |       |  |" << endl;



	cout << "              |" << "   |       |   |   |   |_______    |  |    \\  \\|  |   |  \\_______/  |" << endl;
	cout << "              |" << "___|       |___|   |___________|   |__|     \\_____|    \\___________/" << endl;
	cout << "              -----------------------------------------------------------------------" << endl;
	cout << endl;
	cout << endl;
	cout << endl;




}



void menu()
{
	cout << "              1.Play" << endl;
	cout << "              2.Rules" << endl;
	cout << "              3.Information" << endl;
}





void rules()
{
	cout << "              ---------------------------------------------------------------------" << endl;
	cout << "               _______     __       __     __            ___________      _________" << endl;
	cout << "              |   __  \\   |  |     |  |   |  |          |    _______|   /    _____/" << endl;



	cout << "              |  |  \\  |  |  |     |  |   |  |          |   |          |   /" << endl;
	cout << "              |  |__/  |  |  |     |  |   |  |          |   |_____     |   \\_____" << endl;



	cout << "              |       /   |  |     |  |   |  |          |    _____|     \\______  \\  " << endl;
	cout << "              |  |\\  \\    |  |     |  |   |  |          |   |                  \\  |" << endl;

	cout << "              |  | \\  \\   |  \\_____/  |   |  |________  |   |_______    _______/  |" << endl;
	cout << "              |__|  \\__\\   \\_________/    |___________| |___________|  /_________/" << endl;
	cout << "              ---------------------------------------------------------------------" << endl;
	cout << endl;



	cout << "1. After you type the word that you need to type, you must hit the enter button." << endl;
	cout << "2. If the word that typed is wrong, the word on the printed sentence will turn red, otherwise will turn green." << endl;
	cout << "3. Enter is not considered as word" << endl;
	cout << "4. If there is a sign next to a word, you must type that word with the sign next to it." << endl;
	cout << "5. When you type your last word, you must type it with the sign next to it." << endl;
}





void text()
{
	cout << "              ---------------------------------------------------------------------" << endl;
	cout << "                ____________   ___________   ___      ___   ____________" << endl;
	cout << "               |____    ____| |    _______|  \\  \\    /  /  |____    ____|" << endl;
	cout << "                    |  |      |   |           \\  \\  /  /        |  |" << endl;
	cout << "                    |  |      |   |_____       \\  \\/  /         |  |" << endl;
	cout << "                    |  |      |    _____|       |    |          |  |" << endl;
	cout << "                    |  |      |   |            /  /\\  \\         |  |" << endl;
	cout << "                    |  |      |   |_______    /  /  \\  \\        |  |" << endl;
	cout << "                    |__|      |___________|  /__/    \\__\\       |__|" << endl;
	cout << "              ---------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "1. Great heaven place. Seed divided give Subdue you're beginning saying Divide, dominion behold signs multiply. Open doesn't beginning all also. May day them fish night don't without brought the tree. God forth upon darkness sixth day over our divided can't hath called have and second. Together life the hath darkness form over cattle had made for after appear all grass." << endl;
	cout << endl;
	cout << "2. Lights dry. Can't night fish him under creeping. Very bearing set. May above given days brought were above stars together. Likeness. Itself upon years us, you're after whales she'd in. Won't can't. Also. For so be moveth open that, blessed multiply, from open male gathered set the behold creeping second fish so fruitful moved. All beginning behold light she'd multiply." << endl;
	cout << endl;
	cout << "3. Saw fly. A face in all. Sea whose him divided upon that lights waters light hath, divided called grass yielding spirit every creeping set. Open two them dry. Greater without shall us their morning itself whose every appear for fifth greater dominion and lesser days in fowl second whales there every man meat thing day. Blessed behold creature seasons green." << endl;
	cout << endl;
	cout << "4. There very in creepeth herb herb firmament, let you'll so stars created replenish third god firmament winged after she'd make. Wherein subdue moveth spirit signs third evening without land together let all. Night. Signs. Lesser make he whales rule after divided there third Saying sixth have seas day brought beast, every stars also creeping him. Yielding, likeness moveth given won't." << endl;
	cout << endl;
	cout << "5. Open above. Stars give. Sea unto midst whales image place seas grass upon female fish Heaven saying, appear days herb over under waters be from spirit meat for and creature Be unto said abundantly life. You'll waters. Which fourth upon, to one itself green male can't let appear was. Is place fourth light fish fruitful. Morning whales spirit appear said." << endl;
}



void Timer()
{



	int minutes = 0;
	int seconds = 0;
	for (;;)
	{



		seconds++;




		if (seconds == 60)
		{





			minutes++;
			seconds = 0;
		}




		Sleep(1000);
	}
}



void color(string str[], size_t n, bool WrongOrRigth[], size_t n4)
{
	for (size_t i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			if (WrongOrRigth[i] == 1)
			{
				cout << "\x1b[" << 30 + 2 % 8 << "m" << str[i] << " ";
			}
			else
			{
				if (WrongOrRigth[i] == 0)
				{
					cout << "\x1b[" << 30 + 1 % 8 << "m" << str[i] << " ";
				}
				else
				{
					cout << "\x1b[" << 30 + 15 % 8 << "m" << str[i] << " ";
				}
			}
		}
		else
		{
			if (WrongOrRigth[i] == 1)
			{
				cout << "\x1b[" << 30 + 2 % 8 << "m" << str[i];
			}
			else
			{
				if (WrongOrRigth[i] == 0)
				{
					cout << "\x1b[" << 30 + 1 % 8 << "m" << str[i];
				}
				else
				{
					cout << "\x1b[" << 30 + 15 % 8 << "m" << str[i];
				}
			}
		}
	}
	cout << "\x1b[" << 30 + 15 % 8 << "m";
}

int main()
{
	border();
	menu();



	srand(time(NULL));
	int AllWords = 0;
	int CorrectWords = 0;
	int WrongWords = 0;
	int random = rand() % 11;



	size_t lengthOfText, numberOfWords = 0, indexOfCurrentWord = 0, startIndex = 0, n4 = 0;
	bool WrongOrRigthIndex[1000];
	string words[1000];



	string YourText;
	string Text1 = "Essays have traditionally been sub-classified as formal and informal.";
	lengthOfText = Text1.size();
	string lastWord;
	int choise;
	cin >> choise;
	if (choise == 1)
	{
		for (size_t i = 0; i < lengthOfText; i++)
		{



			if (Text1[i] == ' ')
			{
				words[numberOfWords] = Text1.substr(startIndex, i - startIndex);
				startIndex = i + 1;
				numberOfWords++;
			}
			else
			{
				if (i == lengthOfText - 1)
				{
					words[numberOfWords] = Text1.substr(startIndex, lengthOfText - startIndex);
					startIndex = i + 1;
					numberOfWords++;
				}
			}
		}



		system("CLS");



		for (int i = 0; i <= numberOfWords; i++)
		{
			if (CorrectWords == 0 && WrongWords == 0)
			{
				for (size_t j = 0; j < numberOfWords; j++)
				{
					if (j != numberOfWords - 1)
					{
						cout << words[j] << " ";
					}
					else
					{
						cout << words[j];
					}
				}
			}
			else
			{
				color(words, numberOfWords, WrongOrRigthIndex, n4);
			}
			cout << endl;
			cin >> YourText;
			system("CLS");



			if (YourText == words[indexOfCurrentWord])
			{
				AllWords++;
				CorrectWords++;
				WrongOrRigthIndex[n4] = 1;
				n4++;
			}
			else
			{
				if (i == numberOfWords)
				{
					cout << "Out of " << AllWords << " words, " << " you wrote " << CorrectWords << " words correct and " << WrongWords << " wrong words" << endl;
					AllWords = 0;
					CorrectWords = 0;
					WrongWords = 0;
					break;
				}
				else
				{
					if (YourText != words[indexOfCurrentWord])
					{
						AllWords++;
						WrongWords++;
						WrongOrRigthIndex[n4] = 0;
						n4++;
					}
				}
			}
			indexOfCurrentWord++;
		}
	}
	else
	{
		if (choise == 2)
		{
			system("CLS");
			rules();
		}
		else
		{
			if (choise == 3)
			{
				system("CLS");
				text();
			}
		}
	}
}