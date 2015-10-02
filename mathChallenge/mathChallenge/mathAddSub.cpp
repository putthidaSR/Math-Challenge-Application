#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<cstdio>
#include<ctime>

using namespace std;

//Next two functions are for mathAddSub Routines
double mathAddSubGrd1_2(int &correctAns, int &probAttempted)
{
	//These ints will be used for temporary arithmetic
	int iAns(0), num1(0), num2(0), iCorAns(0), iWrngAns(0), addOrSub;
	char cAns;
	
	do
	{
		system("cls");
		cout << "Next, you will add or subtract at grade-level 1 - 2: " << endl << endl;
		
		//Initialize random numbers from 1-10
		num1 = (rand() % 10) + 1;
		num2 = (rand() % 10) + 1;
		addOrSub = (rand() % 2);

		//This is how we determine whether or not we produce subtraction or addition
		if(addOrSub == 1 && num1 > num2)
		{
			//Create subtraction problem based on the two earlier generated numbers
			cout << "Subtract " << num1 << " - " << num2 << endl << endl;
			cout << "Record your answer: ";
			cin >> iAns;

			//If correct
			if(iAns == num1 - num2)
			{
				cout <<"CORRECT" << endl;
				iCorAns = iCorAns++ ;
			}
			else //If incorrect
			{ 
				cout << "WRONG - The CORRECT Answer is " << num1 - num2 << endl <<endl;
				iWrngAns = iWrngAns++;
			}
		}
		else
		{
			//Produce addition problem based on the two earlier generated numbers
			cout << "Add " << num1 << " + " << num2 << endl << endl;
			cout << "Record your answer: ";
			cin >> iAns;

			//If correct
			if(iAns == num1 + num2)
			{
				cout <<"CORRECT" << endl;
				iCorAns = iCorAns++ ;
			}
			else //If incorrect
			{ 
				cout << "WRONG - The CORRECT Answer is " << num1 + num2 << endl <<endl;
				iWrngAns = iWrngAns++;
			}
		}

		//Prompt for redo
		cout << "Add & Sub Grades 1 - 2? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');

	//Save scores, these values are passed by reference so there will be an update
	correctAns = iCorAns;
	probAttempted = iCorAns + iWrngAns;
	cout << "Correct Answers " << correctAns << " Out of " << probAttempted << " problems attempted" << endl;
	return 0;
}

double mathAddSubGrd3_4(int &correctAns, int &probAttempted)
{
	//These ints will be used for temporary arithmetic
	int iAns(0), num1(0), num2(0), iCorAns(0), iWrngAns(0), addOrSub;
	char cAns;

	do
	{
		system("cls");
		cout << "Next, you will add or subtract at grade-level 3 - 4: " << endl << endl;

		//Initialize random numbers from 1-99
		num1 = (rand() % 99) + 1;
		num2 = (rand() % 99) + 1;
		addOrSub = (rand() % 2);

		//This is how we determine whether or not we produce subtraction or addition
		if(addOrSub == 1 && num2 > num1)
		{
			//Create subtraction problem based on the two earlier generated numbers
			cout << "Subtract " << num2 << " - " << num1 << endl << endl;
			cout << "Record your answer: ";
			cin >> iAns;

			//If correct
			if(iAns == num2 - num1)
			{
				cout <<"CORRECT" << endl;
				iCorAns = iCorAns++ ;
			}
			else //If incorrect
			{ 
				cout << "WRONG - The CORRECT Answer is " << num2 - num1 << endl <<endl;
				iWrngAns = iWrngAns++;
			}
		}
		else
		{
			//Create addition problem based on the two earlier generated numbers
			cout << "Add " << num1 << " + " << num2 << endl << endl;
			cout << "Record your answer: ";
			cin >> iAns;

			//If correct
			if(iAns == num1 + num2)
			{
				cout <<"CORRECT" << endl;
				iCorAns = iCorAns++ ;
			}
			else //If incorrect
			{
				cout << "WRONG - The CORRECT Answer is " << num1 + num2 << endl <<endl;
				iWrngAns = iWrngAns++;
			}
		}
		
		//Prompt for redo
		cout << "Add & Sub Grades 3 - 4? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');

	//Save scores, these values are passed by reference so there will be an update
	correctAns = iCorAns;
	probAttempted = iCorAns + iWrngAns;
	cout << "Correct Answers " << correctAns << " Out of " << probAttempted << " problems attempted" << endl;
	return 0;
}