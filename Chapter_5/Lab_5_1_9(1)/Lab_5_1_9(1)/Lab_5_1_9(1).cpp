// Lab_5_1_9(1).cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	string name;
	int age;
	string gender;

	string Print()
	{
		string str;
		str += name + "'s gender is " + gender + "\n";
		return str;
	}
};
void print(Person* person)
{
	cout << person->name << " is " << person->age << " years old" << endl;
}
int main()
{
	Person person;
	person.name = "Harry";
	person.age = 23;
	person.gender = "Male";

	cout << "Meet " << person.name << endl;
	print(&person);
	cout << person.Print();
	return 0;
}
