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
    size_t length, wordsCounter = 0, startIndex = 0;
    string words[1000];



    string YourText;
    string Text1 = "An essay is, generally, a piece of writing that gives the author's own argument, but the definition is vague, overlapping with those of a letter, a paper, an article, a pamphlet, and a short story. Essays have traditionally been sub-classified as formal and informal.";
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
}