#pragma once
#include <string>
#include <time.h>
enum Choice
{
	ROCK = 0,
	PAPER = 1,
	SCISSORS = 2,
};

class Hands
{
	std::string choicestr_o, choicestr_p;
public:
	Hands() {};
	Hands opponent = SCISSORS;
	Hands player = PAPER;
	void Run()
	{
		if (player == opponent)
		{
			printf("Hooray you..............tied");
			return;
		}
		switch (Hands)
		{
		case ROCK: (player == opponent) ? printf("win") : printf("lose");


		}

	}
};