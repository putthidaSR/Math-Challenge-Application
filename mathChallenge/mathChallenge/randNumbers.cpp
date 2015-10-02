/*
This function's primary purpose is to generate random numbers to support student calculations.
Numbers must be sized appropriately for the grade of the students.  Grades 1 and 2 work only with 
single digit numbers; higher grades may work with other options.  

Version includes three random number generator functions; each for numbers in a different range.  
These generators produce numbers in single digits, two digits or three digits.  The calling 
function must make the call to the appropriate function
*/

#include<iostream>
#include<ctime>

using namespace std;

int getRandOneNum()
{	
	srand(time(NULL)); /* seed random number generator */	
	int randNum = (rand() % 10);	
	return randNum; 
} 

int getRandTwoNum()
{
	int randNum;
	srand(time(NULL)); /* seed random number generator */
	randNum = (rand() % 99);	
	return randNum;
}

int getRandThreeNum()
{
	int randNum;
	srand(time(NULL)); /* seed random number generator */
	randNum = 1 + (rand() % 999);		
	return randNum;
}
