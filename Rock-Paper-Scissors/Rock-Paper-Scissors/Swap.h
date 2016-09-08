#pragma once
#include <iostream>
#include < windows.h>
#include <string>
using namespace std;



class Student
{
public: 
	Student(string name, int age, int sex) {};
private:
	string name;
	int age;
	int sex;
};

bool swap(Student &a, Student &b)
{
	Student tmp = a;
	a = b;
	b = tmp;
	return true;
}; 
int main()
{
	Student Kendal = { Kendal , 18, 1 };
	Student Matthew = { Matthew , 32, 0 };

	Student studentsarray[2] = { Kendal, Matthew };

	std::cout << "swap";
	system("pause");
	return 0;
}