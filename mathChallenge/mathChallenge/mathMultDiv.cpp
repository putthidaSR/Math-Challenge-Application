#include<iostream>
#include<string>
#include<cstdlib>
#include<cstdio>
#include<ctime>

using namespace std;

double round(double x, int prec);

int iAns(0), iCorAns(0), iWrngAns(0);
int num1(0), num2(0), mult_or_divide(0);
	char cAns;
int correctAns, probAttempted;

void multi(double n1,double n2)
{
    double answer;
    cout << "What is " << n1 << " * "<< n2 << " ?" << endl;
    cout << "Answer: ";
    cin >> answer;

    if(answer == n1 * n2)
    {
        cout << endl << "Correct!" << endl << endl;
		iCorAns = iCorAns++ ;
    }
    else
    {
        cout << endl << "Wrong! The right answer was " << n1 * n2 << endl << endl;
		iWrngAns = iWrngAns++;
    }
}

void division(double n1,double n2)
{
    double answer;
    double actual_answer = n2 / n1;
	double roundAns = round(actual_answer, 1);

    cout << "What is " << n2 << " / " << n1 << "?" << endl<<endl;
    cout << "Your answer must only be to 1 decimal precision, e.g. 23.1, etc." << endl;
    cout << "Answer: ";
    cin >> answer;

    if(answer == roundAns)
    {
        cout << endl << "Correct!" << endl << endl;
		iCorAns = iCorAns++ ;
    }
    else
    {
        cout << endl << "Wrong! The right answer is " << roundAns << endl << endl;
		iWrngAns = iWrngAns++;
    }
}



//The next two functionsare Mult&Div
double mathMultDivGrd4_5(int &correctAns, int &probAttempted)
{

	//cout << "STUB: Next step is to use random number generator to present user with problems in multiplication \n";
	//cout << "and division at level for Grades 4 - 5" << endl  << endl  << endl;
	
	
	do
	{
		mult_or_divide = rand( ) % 10 + 1;

		num1 = rand( ) % 100 ;	
		num2 = rand() % 10 + 1;

		if(mult_or_divide <= 5)
		{
			multi(num1,num2);
		}
		else
		{ 
			division(num1, num2);			
		}
		cout << "Mult & Div Grades 3 - 4? (y/n)  ";
		cin >> cAns;

	} while (cAns == 'y' || cAns == 'Y');

	 correctAns = iCorAns;
	 probAttempted = iCorAns + iWrngAns;
	 cout << "Correct Answers " << correctAns << " Out of " << probAttempted << " problems attempted" << endl;
	return 0;
}

double mathMultDivGrd5_6(int &correctAns, int &probAttempted)
{
	do
	{
		mult_or_divide = rand( ) % 10 + 1;

		num1 = rand( ) % 100 + 1;	
		num2 = rand() % 1000 ;
		
		if(mult_or_divide <= 5)
		{
			multi(num1,num2);
		}
		else
		{ 
			division(num1, num2);			
		}
		
		cout << "Mult & Div Grades 5 - 6? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');
		
	correctAns = iCorAns;
	probAttempted = iCorAns + iWrngAns;
	cout << "Correct Answers " << correctAns << " Out of " << probAttempted << " problems attempted" << endl;

	return 0;
}

double round(double x, int prec)
{
	double power = 1.0;
	int i;

	if (prec > 0)
		for (i = 0; i < prec; i++) power *= 10.0;
	else if (prec < 0) for (i = 0; i < prec; i++) power /= 10.0;

	if (x > 0) 	x = floor(x * power + 0.5) / power;
	else if (x < 0) x = ceil(x * power - 0.5) / power;

	if (x == -0) x = 0;
	return x;
}
