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



int main()
{
	
	border();
	int AllWords = 0;
	int CorrectWords = 0;
	int WrongWords = 0;
	size_t length, wordsCounter = 0, startIndex = 0, n1 = 0, n4 = 0;
	string answer;
    string words[1000];



    string YourText;
    string Text1 = "Essays have traditionally been sub-classified as formal and informal.";
    length = Text1.size();
    string RandomText;



    for (size_t i = 0; i < length; i++)
    {
        if (Text1[i] == ' ')
        {
            words[wordsCounter] = Text1.substr(startIndex, i - startIndex);
            startIndex = i + 1;
            wordsCounter++;
        }
        else
        {
            if (i == length - 1)
            {
                words[wordsCounter] = Text1.substr(startIndex, length - startIndex);
                startIndex = i + 1;
                wordsCounter++;
            }
        }
    }

	for (size_t i = 0; i <= wordsCounter; i++)
	{
			for (size_t j = 0; j < wordsCounter; j++)
			{
				if (j != wordsCounter - 1)
				{
					cout << words[j] << " ";
				}
				else
				{
					cout << words[j];
				}
			}
		cout << endl;
		getline(cin, YourText);
		

		if (YourText == words[i])
		{
			AllWords++;
			CorrectWords++;
		}
		else
		{
			if (i == wordsCounter)
			{
				cout << "Out of " << AllWords << " words, " << " you wrote " << CorrectWords << " words correct and " << WrongWords << " wrong words" << endl;
				AllWords = 0;
				CorrectWords = 0;
				WrongWords = 0;
				cout << "Do you want to play again?" << endl;
				cout << "Yes or No." << endl;
				getline(cin, answer);
				if (answer == "Yes")
				{
					i = 0;
					system("CLS");
				}
				else
				{
					break;
				}
			}
			else
			{
				if (YourText != words[n1])
				{
					AllWords++;
					WrongWords++;
				}
			}
		}
		n1++;
	}
}