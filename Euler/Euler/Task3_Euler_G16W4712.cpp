//
//  Euler3.cpp
//  Euler3
//
//  Created by Luke Wilkinson on 2020/02/16.
//  Copyright © 2020 Luke Wilkinson. All rights reserved.
//
#include <iostream>
#include <time.h>
#include <math.h>

using namespace std;

void Euler3(){//written by Luke Wilkinson
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


int main()
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
	cout << bigFac;
	
	int stop = 0;
	cin >> stop;
}
