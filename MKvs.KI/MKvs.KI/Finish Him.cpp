#include <iostream>
#include <time.h>
struct MortalKombat
{
	int health;
	bool alive;
	int meter;
	char name[255];
};
struct KillerInstinct
{
	int health;
	bool alive;
	int instinct;
	char name[255];
};

void FightInfo(MortalKombat MK, KillerInstinct KI)
{
	printf("===============================================================\n");
	std::cout << MK.name << "'s health is: " << MK.health << " | ";
	std::cout << MK.name << " resource is " << MK.meter << " | ";
	std::cout << MK.name << " is living?" << MK.alive << " \n\n";
	printf("===============================================================\n");
	std::cout << KI.name << "'s health is: " << KI.health << " | ";
	std::cout << KI.name << " resource is " << KI.instinct << " | ";
	std::cout << KI.name << " is living?" << KI.alive << " \n\n";
	printf("===============================================================\n");
}
bool Fight(MortalKombat &attacker, KillerInstinct &defender)
{
	bool canAttack = (attacker.meter > 0);
	if (canAttack)
	{
		defender.health -= 10;
		attacker.meter -= 1;
		if (defender.health <= 0)
			defender.alive = false;
	}
	return defender.alive;
}
bool Fight(KillerInstinct &attacker, MortalKombat &defender)
{
	//switch them b/c i don't want to write the same code....
	bool canAttack = (attacker.instinct > 0);
	if (canAttack)
	{
		defender.health -= 10;
		attacker.instinct -= 1;
		if (defender.health <= 0)
			defender.alive = false;
	}
	return defender.alive;
}
int main()
{
	MortalKombat  Beehan= { 100, true, 20, "Beehan" };
	MortalKombat  Sektor= { 100, true, 16, "Sektor" };
	MortalKombat  Ermac = { 150, true, 20, "Ermac" };
	KillerInstinct  Jago = { 100, true, 18, "Jago" };
	KillerInstinct  Maya= { 100, true, 15, "Maya" };
	KillerInstinct  Fulgore= { 100, true, 23, "Fulgore" };
	char input = '0';
	int frameNumber = 0;
	bool gameRunning = true;
	printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");
	std::cout << "Mortal Kombat Vs. Killer Instinct: Dimensional Destiny v1.1\n";
	printf("||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n");

	//while the game isn't over
	while (gameRunning == true)
	{
		frameNumber++;

		printf("==============================INSTRUCTIONS===================== frame# %i\n", frameNumber);
		std::cout << "PRESS a  \n";
		std::cout << "PRESS b  \n";
		std::cout << "PRESS c  \n";
		std::cout << "PRESS d  \n";
		std::cout << "PRESS e  \n";
		std::cout << "PRESS f  \n";
		std::cout << "PRESS g  \n";
		std::cout << "PRESS h  \n";
		std::cout << "PRESS i  \n";
		std::cout << "PRESS j  \n";
		std::cout << "PRESS k  \n";
		std::cout << "PRESS l  \n";
		std::cout << "PRESS 
		std::cout << "PRESS 



		std::cout << "PRESS . to end game \n";
		printf("==============================INSTRUCTIONS=====================\n");
		std::cin >> input;
		system("cls");
		switch (input)
		{
		case '.':
			gameRunning = false;
			break;
		case 'a'://Maya Attacks Sub Zero
			gameRunning = Fight(Maya, Beehan); 
			FightInfo(Beehan, Maya);
			break;
		case 'b'://Maya Attacks Sektor
			gameRunning = Fight(Maya, Sektor);
			FightInfo(Sektor, Maya);
			break;
		case 'c'://Maya Attacks Ermac
			gameRunning = Fight(Maya, Ermac);
			FightInfo(Ermac, Maya);
			break;
		case 'd'://Sub Zero Attacks Jago
			gameRunning = Fight(Beehan, Jago);
			FightInfo(Beehan, Jago);
			break;
		case 'e'://Sub Zero Attacks Maya
			gameRunning = Fight(Beehan, Maya);
			FightInfo(Beehan, Fulgore);
			break;
		case 'f'://Sub Zero Attacks Fulgore
			gameRunning = Fight(Beehan, Fulgore);
			FightInfo(Beehan, Fulgore);
			break;
		case 'g'://Sektor Attacks Jago
			gameRunning = Fight(Sektor, Jago);
			FightInfo(Sektor, Jago);
			break;
		case 'h'://Sektor Attacks Maya
			gameRunning = Fight(Sektor, Maya);
			FightInfo(Sektor, Maya);
			break;
		case 'i'://Sektor Attacks Fulgore
			gameRunning = Fight(Sektor, Fulgore);
			FightInfo(Sektor, Fulgore);
			break;
		case 'j'://Ermac Attracks Jago
			gameRunning = Fight(Ermac, Jago);
			FightInfo(Ermac, Jago);
			break;
		case 'k'://Ermac Attacks Maya
			gameRunning = Fight(Ermac, Maya);
			FightInfo(Ermac, Maya);
			break;
		case 'l'://Ermac Attacks Fulgore
			gameRunning = Fight(Ermac, Fulgore);
			FightInfo(Ermac, Fulgore);
			break;
		case 'm'://Jago Attacks Sub Zero
			gameRunning = Fight(Jago, Beehan);
			FightInfo(Beehan, Jago);
			break;
		case 'n'://Jago Attacks Sektor
			gameRunning = Fight(Jago, Sektor);
			FightInfo(Sektor, Jago);
			break;
		case 'o'://Jago Attacks Ermac
			gameRunning = Fight(Jago, Ermac);
			FightInfo(Ermac, Jago);
			break;
		case 'p'://Fulgore Attacks Sub Zero
			gameRunning = Fight(Fulgore,Beehan);
			FightInfo(Beehan,Fulgore );
			break;
		case 'q'://Fulgore Attacks Sektor
			gameRunning = Fight(Fulgore, Sektor);
			FightInfo(Sektor, Fulgore);
			break;
		case 'r'://Fulgore Attacks Ermac
			gameRunning = Fight(Fulgore, Ermac);
			FightInfo(Ermac, Fulgore);
			break;
		default:
			system("cls");
			printf("invalid input... do it again\n");

		}
	}
	printf("GAME OVER \n");
	printf("Better luck next time scrub \n \a");
	system("pause");
	
	return 0;
}