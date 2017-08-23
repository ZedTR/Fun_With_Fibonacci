/*
Name :Zaid  Rashid
Class: CST 223
Assign: 1
Professor: Sandeep Koranne
*/

#include "Declarations.h"
#include <iostream>

using namespace std;
void main()
{

	for (int i = 0; i <= 16; ++i)
	{
		cout << fact_i(i) <<" factorial of number "<< i << endl;
		cout << fib_i(i) << " fibonacci of number " << i <<endl;
		cout << col_i(i) << " collatze "<< i << endl;
		cout << endl;
	}
	
	system("pause");
}