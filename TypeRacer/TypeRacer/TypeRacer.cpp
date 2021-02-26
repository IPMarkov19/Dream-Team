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

void color(string str[], size_t n, size_t WrongOrRigth[], size_t n4)
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
	srand(time(NULL));
	int AllWords = 0;
	int CorrectWords = 0;
	int WrongWords = 0;
	int random = rand() % 11;

	size_t length, n = 0, n1 = 0, startIndex = 0, WrongOrRigthIndex[1000], n4 = 0;
	string words[1000];

	string YourText;
	string Text1 = "Essays have traditionally been sub-classified as formal and informal.";
	length = Text1.size();
	string lastWord;

	for (size_t i = 0; i < length; i++)
	{

		if (Text1[i] == ' ')
		{
			words[n] = Text1.substr(startIndex, i - startIndex);
			startIndex = i + 1;
			n++;
		}
		else
		{
			if (i == length - 1)
			{
				words[n] = Text1.substr(startIndex, length - startIndex);
				startIndex = i + 1;
				n++;
			}
		}
	}



	for (int i = 0; i <= n; i++)
	{
		if (CorrectWords == 0 && WrongWords == 0)
		{
			for (size_t j = 0; j < n; j++)
			{
				if (j != n - 1)
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
			color(words, n, WrongOrRigthIndex, n4);
		}
		cout << endl;
		if (i != n)
		{
			getline(cin, YourText);
		}
		else
		{
			YourText = "End";
		}

		system("CLS");

		if (YourText == words[n1])
		{
			AllWords++;
			CorrectWords++;
			WrongOrRigthIndex[n4] = 1;
			n4++;
		}
		else
		{
			if (i == n)
			{
				cout << "Out of " << AllWords << " words, " << " you wrote " << CorrectWords << " words correct and " << WrongWords << " wrong words" << endl;
				AllWords = 0;
				CorrectWords = 0;
				WrongWords = 0;
				break;
			}
			else
			{
				if (YourText != words[n1])
				{
					AllWords++;
					WrongWords++;
					WrongOrRigthIndex[n4] = 0;
					n4++;
				}
			}
		}
		n1++;
	}
}