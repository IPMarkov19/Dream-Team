#include <iostream> //Libraries
#include <string>
#include <ctime>
#include <stdlib.h>
#include <windows.h>

using namespace std;

void border()//Function for printing the starting menu
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



void menu()//Function that prints the options for the menu
{
	cout << "              1.Play" << endl;
	cout << "              2.Rules" << endl;
	cout << "              3.Texts" << endl;
}





void rules()//Function that prints the rules
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





void texts()//Function that shows all avaliable texts
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


void color(string words[], size_t numberOfWords, bool wrongOrRigthWord[])//Function that colors words from the text
{
	for (size_t i = 0; i < numberOfWords; i++)
	{
		if (i != numberOfWords - 1)
		{
			if (wrongOrRigthWord[i] == 1)
			{
				cout << "\x1b[" << 30 + 2 % 8 << "m" << words[i] << " ";
			}
			else
			{
				if (wrongOrRigthWord[i] == 0)
				{
					cout << "\x1b[" << 30 + 1 % 8 << "m" << words[i] << " ";
				}
				else
				{
					cout << "\x1b[" << 30 + 15 % 8 << "m" << words[i] << " ";
				}
			}
		}
		else
		{
			if (wrongOrRigthWord[i] == 1)
			{
				cout << "\x1b[" << 30 + 2 % 8 << "m" << words[i];
			}
			else
			{
				if (wrongOrRigthWord[i] == 0)
				{
					cout << "\x1b[" << 30 + 1 % 8 << "m" << words[i];
				}
				else
				{
					cout << "\x1b[" << 30 + 15 % 8 << "m" << words[i];
				}
			}
		}
	}
	cout << "\x1b[" << 30 + 15 % 8 << "m";
}

int main()
{
	border();//Call a function
	menu();//Call a function

	srand(time(NULL));

	//Initializing variables
	int allWords = 0;
	int correctWords = 0;
	int wrongWords = 0;
	int random = rand() % 5+1;

	size_t lengthOfText, numberOfWords = 0, startIndex = 0;
	bool wrongOrRigthWords[65];
	string words[65];

	string yourText;
	string text;
	//Initializing variables

	switch (random)//Getting random text
	{
	case 1:
		text = "Great heaven place. Seed divided give Subdue you're beginning saying Divide, dominion behold signs multiply. Open doesn't beginning all also. May day them fish night don't without brought the tree. God forth upon darkness sixth day over our divided can't hath called have and second.";
		break;
	case 2:
		text = "Lights dry. Can't night fish him under creeping. Very bearing set. May above given days brought were above stars together. Likeness. Itself upon years us, you're after whales she'd in. Won't can't. Also. For so be moveth open that, blessed multiply, from open male gathered set the behold creeping second fish so fruitful moved.";
		break;
	case 3:
		text = "Saw fly. A face in all. Sea whose him divided upon that lights waters light hath, divided called grass yielding spirit every creeping set. Open two them dry. Greater without shall us their morning itself whose every appear for fifth greater dominion and lesser days in fowl second whales there every man meat thing day.";
		break;
	case 4:
		text = "There very in creepeth herb herb firmament, let you'll so stars created replenish third god firmament winged after she'd make. Wherein subdue moveth spirit signs third evening without land together let all. Night. Signs. Lesser make he whales rule after divided there third Saying sixth have seas day brought beast, every stars also creeping him.";
		break;
	case 5:
		text = "Open above. Stars give. Sea unto midst whales image place seas grass upon female fish Heaven saying, appear days herb over under waters be from spirit meat for and creature Be unto said abundantly life. You'll waters. Which fourth upon, to one itself green male can't let appear was. Is place fourth light fish fruitful.";
		break;
	}//Getting random text


	lengthOfText = text.size();
	string lastWord;

	int choise;
	cin >> choise;

	if (choise == 1)//Start tha game
	{
		for (size_t i = 0; i < lengthOfText; i++)
		{



			if (text[i] == ' ')//Dividing the string into several substrings
			{
				words[numberOfWords] = text.substr(startIndex, i - startIndex);
				startIndex = i + 1;
				numberOfWords++;
			}
			else
			{
				if (i == lengthOfText - 1)
				{
					words[numberOfWords] = text.substr(startIndex, lengthOfText - startIndex);
					startIndex = i + 1;
					numberOfWords++;
				}
			}
		}



		system("CLS");//Clear screen



		for (int i = 0; i <= numberOfWords; i++)//Print the text
		{
			if (correctWords == 0 && wrongWords == 0)
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
				color(words, numberOfWords, wrongOrRigthWords);
			}
			cout << endl;
			cin >> yourText;

			system("CLS");



			if (yourText == words[i])//Counts your correct words
			{
				allWords++;
				correctWords++;
				wrongOrRigthWords[i] = 1;
			}
			else
			{
				if (i == numberOfWords)//Outputs your result
				{
					cout << "Out of " << allWords << " words, " << " you wrote " << correctWords << " words correct and " << wrongWords << " wrong words" << endl;
					allWords = 0;
					correctWords = 0;
					wrongWords = 0;
					break;
				}
				else
				{
					if (yourText != words[i])//Counts your wrong words
					{
						allWords++;
						wrongWords++;
						wrongOrRigthWords[i] = 0;
					}
				}
			}
		}
	}
	else
	{
		if (choise == 2)//Show rules
		{
			system("CLS");
			rules();//Call a function
		}
		else
		{
			if (choise == 3)//Show all texts
			{
				system("CLS");
				texts();//Call a function
			}
		}
	}
}