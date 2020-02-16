// Euler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "pch.h"
#include <iostream>
#include <time.h>
#include <math.h>
using namespace std;

int main()
{
  

	//add your Euler Method
	Euler3(); //Euler 3 done by Luke
}

void Euler3()//written by Luke Wilkinson G16W4712
{
	int count;
	uint64_t num;
	uint64_t bigFac;
	
	//cout << "Find the Largest Prime Factor, enter a number" << endl;
	//cin >> num;
	
	//test that it works with the number for the question: What is the largest prime factor of the number 600851475143?
	num = 600851475143;
	
	for (int fac = 1; fac <= num; fac++)
	{
		if (num % fac == 0)
		{
			count = 0;
			
			for (int testP=2; count == 0 && fac > testP ; testP++) //Test the prime
			{
				if (fac % testP == 0)
				{
					count ++;
				}
			}
			
			if (count == 0)
			{
				bigFac = fac;
			}
		}
		
	}
	cout << "The Biggest factor is: "
	cout << bigFac;
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
