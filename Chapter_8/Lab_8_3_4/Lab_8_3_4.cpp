// Lab_8_3_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "string"
#include <iostream> 
using namespace std;
namespace alpha { int var = 1; }
namespace beta { int var = alpha::var + 1; }
int main(void)
{
	beta::var += alpha::var;
	{
		using namespace beta;
		cout << var << endl;
	}
	return 0;
}