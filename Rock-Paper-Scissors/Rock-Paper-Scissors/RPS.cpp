#include <iostream>
#include <time.h>
#include <cstdlib>
#include <Windows.h>
#include <string>
using namespace std;
int cointoss()
{
	int coinFlip = 0;
	int coinChance = 0;
	int coinResult = 0;
	for (int i = 0; i < 2; ++i) 
	{
		cout << i;
	}
		;
	return 0;
}
unsigned  Application()
{

}
int main()
{
	bool run = true;
	while (run = true)
	{


		int choice;
		int i;
		int comp;
		char result;

		time_t seed;

		cout << "\n";
		//The choices
		cout << "This is the legendary game or Rock, Paper, and Scissors.\n";
		cout << "Which will you chose\n";
		cout << "1. Rock\n";
		cout << "2. Paper\n";
		cout << "3. Scissors\n";
		cout << "4. Quit.\n\n";
		cout << "Hurry up and state your choice.";
		cin >> choice;


		//The statemnets needed for each choice.

		if (choice == 1) //Rock
		{
			cout << "You picked Rock.\n";
			cout << "Now here was my choice.\n";
		}

		else if (choice == 2) //Paper
		{
			cout << "You picked Paper.\n";
			cout << "Now here was my choice.\n";
		}

		else if (choice == 3) //Scissors
		{
			cout << "You picked Scissors.\n";
			cout << "Now here was my choice.\n";
		}
		else if (choice == 4)
		{
			return 0;
		}

		seed = time(0);
		srand(seed); //The generator for the computer's choice.

		comp = rand() % 3 + 1; //Computers pick.

		if (comp == 1) //Computer rock
		{
			result = 1;
			cout << "Rock!\n";
		}

		else if (comp == 2) //Computer paper
		{
			result = 2;
			cout << "Paper!\n";
		}
		else if (comp == 3)  // Computer scissors
		{
			result = 3;
			cout << "Scissors!\n";
		}

		switch (result)
		{
		case '1': cout << "test";
		case '2': cout << "tests";
		case '3': cout << "test";
		}

	}
	system("pause");
	return 0;
}
