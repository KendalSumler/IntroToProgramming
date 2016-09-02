#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std;
int CoinToss(void)
{
	int randomNumber;
	randomNumber = 1 + rand() % 2;
	return randomNumber;

}

/*void numA(int Pearl)
{//Exercise 1
	std::cout << Pearl << std::endl;
}
int main()
{
	int Pearl = 1;
	numA(Pearl);
	{
		numA(Pearl);
		int Pearl = 2;
		numA(Pearl);
		{
			numA(Pearl);
			int Pearl = 3;
			numA(Pearl);
		}
		numA(Pearl);
	}
	numA(Pearl);
	// 1,1,2,2,3,2,1



	system("pause");
}*/
/* Write a function that returns the smaller of two floats that are passed to it:
You should make a program that asks the user for two different numbers such that it
outputs:*/
//float function(float A,float B, float C)
//{
//	float somefloat = 0;
//	float biggestnumber;
//	if (A > B)
//		biggestnumber = A;
//	else if
//		(biggestnumber = B);
//	else
//		biggestnumber = C;
//	return biggestnumber;
//}
//
//int main()
//{//Exercise 2
//	//float numA = 0;
//	//float numB = 0;
//	//function(16.f, 18.f);
//	//function(16.f, 118.f);
//	//function(106.f, 128.f);
//	//std::cin >> numA >> numB;
//
//	//
//	//float num1 = 16.f;
//	//float num2 = 18.f;
//	//float biggestnumber;
//	//if (num1 > num2)
//	//	biggestnumber = num1;
//	//else
//
//	//	biggestnumber = num2;
//	//std::cout << biggestnumber;
//
//	for (int i = 0; i < 100; i++)
//		//	{
//		//		std::cout << "biggest of: " << i * 1 << "and " << i * 4 << " is " << function(i * 1, i * 4)<<std::endl;
//		//	}
//
//		std::cout << "biggest of: " << i * 1 << "and " << i * 4 << " is ";
//	system("pause");
//}

//float Half(float); // To divide a given number by 2
//
//int main()
//{/*The following statement calls a function named Half. The Half function returns a value that
//is half that of the argument. Write the function.*/
////Exercise 4
//	float Answer = 16.721;
//	{
//		std::cout << Answer;
//	}
//	system("pause");
//
//*/

//int main()
//{//Exercise 5 Write a function named CoinToss that simulates tossing a coin.
//	int HowManyTimes = 0;
//	int randomNumber = 0;
//	string HeadTail = "";
//
//	cout << " How many times do you want to toss the coin?";
//	cin >> HowManyTimes;
//
//	srand((time(0)));
//	for (int i = 1; i <= HowManyTimes; i++)
//	{
//		randomNumber = CoinToss();
//		if (randomNumber == 1)
//			HeadTail = "Head";
//		else
//			HeadTail = "Tail";
//		cout << HeadTail << endl;
//	}
//	return 0;
//}
/*int main()
{//Exercise 6
. Find the error in each of the following functions and explain how to fix them.
int sum (int x, int y)
{
int result;
result = x + y;
}
The problem is with the return type. The way to correct this would be to 
change the result variable to sum
int sum (int n)
{
if (0 == n)
return 0;
else
n = n + n;
}
The discrepancy is that the else statement is does not return anything
the statement needs to change it reurn type type to
int main()
{
double x = 13.6;
std::cout << "square of 13.6 = " << square(x) << std::endl;
}
}
int square (int x)
{
return x * x;

}*/
int main()
{

}