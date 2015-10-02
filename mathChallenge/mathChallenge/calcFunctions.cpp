#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>

using namespace std;

//function declaration for algebra calculator
void algebraCal();
char getMathOperation();
double calculateResult(double dValue1, char cOperator, double dValue2);
double quadraticEqua();

//function declaration for geometry calculator
void cylinder();
void cube();
void trapezoid();
void parallelogram();
void triangle();
void circle();
void rectangle();
void square();

//function declaration for Pre-Calculus calculator
double radianToDegree();
double degreeToRadian();
double sinCosTanRadian();
double sinCosTanDegree();
double inverseTrigRadian();
double inverseTrigDegree();

//Constant
const double PI = 3.1415926;

//Global Variable
char cOperator;
int iSelectMenu;

#define BORDER "****************************************************************************************************\n"

double algebra()
{
	char cAns = 0;
	int menu = 0;
	
	do		
	{
		system("cls");
		cout << BORDER;
		cout << "Welcome to Algebra tools!" << endl << endl;
		cout << "1 - Addition, Substraction, Multiplication, Division" << endl;	
		cout << "2 - Quadratic Equation" << endl << endl;
		cout << "Select the menu choice number from the above list, 1 - 2: ";
		cin >> menu;
		cout << endl;
		cout << BORDER;
		switch (menu)
		{
			case 1:
				algebraCal();
				break;

			case 2:
				quadraticEqua();
				break;

			default:
				cout << "Not a menu choice \n";
				break;
		}

		cout << "More Algebra Calculator? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');

	return 0;
}

//Algebra Calculator functions
void algebraCal()
{
	char cOperator = getMathOperation();
	double dX1, dX2;

	cout << "Enter First Number: ";
	cin >> dX1;

	cout << "Enter Another Number: ";
	cin >> dX2;

	double result = calculateResult(dX1, cOperator, dX2);

	cout << endl <<endl;
	cout << dX1 << cOperator << dX2 << " = " << result << endl << endl;
}
 
char getMathOperation()
{
	cout << "Please Enter an Operator (+, -, *, /): ";
	cin >> cOperator;

	return cOperator;
}

double calculateResult(double dValue1, char cOperator, double dValue2)
{
	if(cOperator == '+')
	{
		return dValue1 + dValue2;
	}	
	if(cOperator == '-')
	{
		return dValue1 - dValue2;
	}	
	if(cOperator == '*')
	{
		return dValue1 * dValue2;
	}
	if(cOperator == '/')
	{
		return dValue1 / dValue2;
	}
	else
	{
		cout << "Not in the selection menu";
	}
	
	return 0;
}

double quadraticEqua()
{
	cout << setiosflags (ios::showpoint | ios::fixed) << setprecision(4);

	cout <<"Standard Form of Quadratic Equation: Ax^2 + Bx + C = 0" <<endl <<endl;
	cout <<"Enter the coefficients for A, B, and C \n"
		 << "and the program will output the solutions (if they are not imaginary numbers)."<<endl<<endl;

	double dA, dB, dC, dX1, dX2;
	
	cout <<"Enter the Value of A: ";
	cin >> dA;

	cout <<"Enter the Value of B: ";
	cin >> dB;

	cout <<"Enter the Value of C: ";
	cin >> dC;

	cout << endl << endl;
	
	//If the coefficient of A is 0
	if( dA == 0)
	{
		cout <<"This is not a Quadratic Equation. (A can't be 0.)" <<endl;
	}

	//Calculate discriminant
	double dDiscriminant = pow(dB, 2) - (4*dA*dC);

	//If discriminant equals to zero
	if(dDiscriminant == 0)
	{
		dX1 = -dB / (2*dA);
		cout << "Solution: X = " << dX1 << endl;
	}

	//If discriminat is greater than zero
	if(dDiscriminant > 0)
	{
		dX1 = (-dB + sqrt(dDiscriminant)) / (2*dA);
		dX2 = (-dB - sqrt(dDiscriminant)) / (2*dA);

		cout << "There are 2 real solutions: X1 = " << dX1 << ", X2 = " << dX2 << "." << endl << endl;
	}

	//If discriminant is less than zero
	else
	{
		cout << "Since discriminant is negative, there is no real root." <<endl;
	}

	return 0;
}

//Geometry Calculator

double geometry()
{
	char cAns = 0;
	int menu = 0;
	
	do		
	{
		system("cls");
		cout << BORDER;
		cout << "Welcome to Geometry Calculator!" << endl << endl;

		cout << "1  - Square" << endl;
		cout << "2  - Rectangle" << endl;		
		cout << "3  - Circle" << endl;
		cout << "4  - Triangle" << endl;		
		cout << "5  - Parallelogram" << endl;
		cout << "6  - Trapezoid" << endl;
		cout << "7  - Cube" << endl;		
		cout << "8  - Cylinder" << endl;
		cout << "Select the menu choice number from the above list, 1 - 8: ";
		cin >> menu;
		cout << endl;
		cout << BORDER;

		switch (menu)
		{
			case 1:
				square();
				break;

			case 2:
				rectangle();
				break;		

			case 3:
				circle();
				break;

			case 4:
				triangle();
				break;

			case 5:
				parallelogram();
				break;

			case 6:
				trapezoid();
				break;

			case 7:
				cube();
				break;

			case 8:
				cylinder();
				break;

			default:
				cout << "Not a menu choice \n";
				break;
		}

		cout << "More Geometry Calculator? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');

	return 0;
}

void square()
{
	char cAns = 0;
	double dSide, dResult;

	do
	{
		system("cls");
		cout << BORDER;
		cout << "1 - Calculate the Area of Square" << endl;
		cout << "2 - Calculate the Perimeter of Square" << endl << endl;

		cout << "Please select the menu 1-2: ";
		cin  >> iSelectMenu;
		cout << endl << BORDER << endl;

		//Area of Square
		if (iSelectMenu == 1)
		{
			cout << "Enter the value of the side: ";
			cin >> dSide;

			dResult = dSide * dSide;

			cout << endl <<endl;
			cout << "The Area of the Square is " << dResult << "." << endl << endl;
		}
	
		//Perimeter of Square
		if (iSelectMenu == 2)
		{
			cout << "Enter the value of the side: ";
			cin >> dSide;

			dResult = 4 * dSide;

			cout << "The perimeter of the square is " << dResult << "." << endl << endl;
		}
		cout << "More Square calculator? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');
}

void rectangle()
{
	char cAns = 0;
	double dLength, dWidth, dResult;
	do
	{
		system("cls");
		cout << BORDER;
		cout << "1 - Calculate the Area of Rectangle" << endl;
		cout << "2 - Calculate the Perimeter of Rectangle" << endl;

		cout << "Please select the menu 1-2: ";
		cin  >> iSelectMenu;
		cout << endl << BORDER << endl;

		//Area of Rectangle
		if (iSelectMenu == 1)
		{	
			cout << "Enter the value of the length: ";
			cin >> dLength;

			cout << "Enter the value of the width: ";
			cin >> dWidth;

			dResult = dLength * dWidth;

			cout << "The Area of the rectangle is " << dResult << "." << endl << endl;
		}

		//Perimeter of Rectangle
		if(iSelectMenu == 2)
		{
			cout << "Enter the value of the length: ";
			cin >> dLength;

			cout << "Enter the value of the width: ";
			cin >> dWidth;

			dResult = (2 * dLength) + (2*dWidth);

			cout << "The perimeter of Rectangle is " << dResult << "." << endl << endl;
		}
		cout << "More Rectangle calculator? (y/n)  ";
		cin >> cAns;
		}while (cAns == 'y' || cAns == 'Y');
}

void circle()
{
	char cAns = 0;
	double dRadius, dResult;
	do
	{
		system("cls");
		cout << BORDER;
		cout << "1 - Calculate the Area of Circle" << endl;
		cout << "2 - Calculate the Perimeter of Circle" << endl;

		cout << "Please select the menu 1-2: ";
		cin  >> iSelectMenu;
		cout << endl << BORDER << endl;

		//Area of Circle
		if (iSelectMenu == 1)
		{
			cout << "Enter the value of the radius: ";
			cin >> dRadius;

			dResult = pow(dRadius, 2) * PI;

			cout << "The Area of the circle is " << dResult << "." << endl << endl;
		}
		//perimeter of circle
		if (iSelectMenu == 2)
		{
			cout << "Enter the value of the radius: ";
			cin >> dRadius;
			dResult = 2 * PI * dRadius;

			cout << "The perimeter of circle is " << dResult << "." << endl << endl;
		}
		cout << "More Circe calculator? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');
}

void triangle()
{
	char cAns = 0;
	double dHeight, dBase, dSide1, dSide2, dSide3, dResult;
	do
	{
		system("cls");
		cout << BORDER;
		cout << "1 - Calculate the Area of Triangle" << endl;
		cout << "2 - Calculate the Perimeter of Triangle" << endl;

		cout << "Please select the menu 1-2: ";
		cin  >> iSelectMenu;
		cout << endl << BORDER << endl;

		//Area of Triangle
		if (iSelectMenu == 1)
		{	
			cout << "Enter the value of the height: ";
			cin >> dHeight;

			cout << "Enter the value of the base: ";
			cin >> dBase;

			dResult = (dHeight * dBase)/2;

			cout << "The Area of the triangle is " << dResult << "." << endl << endl;
		}
		if (iSelectMenu == 2)
		{
			cout << "Enter the value of the first side: ";
			cin >> dSide1;

			cout << "Enter the value of the second side: ";
			cin >> dSide2;

			cout << "Enter the value of the third side: ";
			cin >> dSide3;

			dResult = dSide1 + dSide2 + dSide3;

			cout << "The perimeter of triangle is " << dResult << "." << endl << endl;
		}
		cout << "More Triangle calculator? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');
}

void parallelogram()
{
	char cAns = 0;
	double dHeight, dBase, dLength, dWidth, dResult;
	do
	{
		system("cls");
		cout << BORDER;
		cout << "1 - Calculate the Area of Parallelogram" << endl;
		cout << "2 - Calculate the Perimeter of Parallelogram" << endl;

		cout << "Please select the menu 1-2: ";
		cin  >> iSelectMenu;
		cout << endl << BORDER << endl;

		//Area of Rectangle
		if (iSelectMenu == 1)
		{	
			cout << "Enter the value of the height: ";
			cin >> dHeight;

			cout << "Enter the value of the base: ";
			cin >> dBase;

			double dResult = dHeight * dBase;

			cout << "The Area of the parallelogram is " << dResult << "." << endl << endl;
		}
		if (iSelectMenu == 2)
		{
			cout << "Enter the value of the length: ";
			cin >> dLength;

			cout << "Enter the value of the width: ";
			cin >> dWidth;

			dResult = (2 * dLength) + (2*dWidth);

			cout << "The perimeter of Parallelogram is " << dResult << "." << endl << endl;
		}
		cout << "More Parallelogram calculator? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');
}

void trapezoid()
{
	char cAns = 0;
	double dHeight, dBase1, dBase2, dSide1, dSide2, dSide3, dSide4, dResult;
	do
	{
		system("cls");
		cout << BORDER;
		cout << "1 - Calculate the Area of Rectangle" << endl;
		cout << "2 - Calculate the Perimeter of Rectangle" << endl;

		cout << "Please select the menu 1-2: ";
		cin >> iSelectMenu;
		cout << endl << BORDER << endl;

		//Area of Trapezoid
		if (iSelectMenu == 1)
		{	
			cout << "Enter the value of the height: ";
			cin >> dHeight;

			cout << "Enter the value of the base 1: ";
			cin >> dBase1;

			cout << "Enter the value of the base 2: ";
			cin >> dBase2;

			dResult = ((dBase1 + dBase2) * dHeight) / 2;

			cout << "The Area of the trapezoid is " << dResult << "." << endl << endl;
		}
		if (iSelectMenu == 2) //perimeter of trapezoid
		{
			cout << "Enter the value of the first side: ";
			cin >> dSide1;

			cout << "Enter the value of the second side: ";
			cin >> dSide2;

			cout << "Enter the value of the third side: ";
			cin >> dSide3;

			cout << "Enter the value of the fourth side: ";
			cin >> dSide4;

			double dResult = dSide1 + dSide2 + dSide3 + dSide4;

			cout << endl << "The perimeter of Trapezoid is " << dResult << "." << endl << endl;
		}		

		cout << "More Trapezoid calculator? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');

}

void cube()
{
	char cAns = 0;
	double dLength, dWidth, dResult;
	do
	{
		system("cls");
		cout << BORDER;
		cout << "1 - Calculate the Area of Cube" << endl;
		cout << "2 - Calculate the Volume of Cube" << endl;

		cout << "Please select the menu 1-2: ";
		cin  >> iSelectMenu;
		cout << endl << BORDER << endl;

		//Area of cube
		if (iSelectMenu == 1)
		{	
			cout << "Enter the value of the length: ";
			cin >> dLength;

			double dResult = pow(dLength, 2) * 6;

			cout << "The Area of the cube is " << dResult << "." << endl << endl;
		}
		//volume cube
		if (iSelectMenu == 2)
		{
			cout << "Enter the value of the length: ";
			cin >> dLength;

			double dResult = pow(dLength, 3);

			cout << "The Volume of the cube is " << dResult << "." << endl << endl;
		}
		cout << "More Cube calculator? (y/n)  ";
		cin >> cAns;
	}while (cAns == 'y' || cAns == 'Y');

}

void cylinder()
{
	char cAns = 0;
	double dHeight, dRadius, dResult;
	do
	{
		system("cls");
		cout << BORDER;
		cout << "1 - Calculate the Area of Cylinder" << endl;
		cout << "2 - Calculate the Perimeter of Cylinder" << endl;

		cout << "Please select the menu 1-2: ";
		cin  >> iSelectMenu;
		cout << endl << BORDER << endl;
		
		if (iSelectMenu == 1) //Area of Cylinder
		{
			cout << "Enter the value of the radius: ";
			cin >> dRadius;

			cout << "Enter the value of the height: ";
			cin >> dHeight;

			double dResult = (2 * PI * dRadius) * (dRadius + dHeight);

			cout << "The Area of the Cylinder is " << dResult << "." << endl << endl;
		}
		if (iSelectMenu == 2) //volume of cylinder
		{
			cout << "Enter the value of the height: ";
			cin >> dHeight;

			cout << "Enter the value of the radius: ";
			cin >> dRadius;

			double dResult = pow(dRadius, 2) * PI * dHeight;

			cout << "The Volume of the cylinder is " << dResult << "." << endl << endl;
		}

		cout << "More Cylinder calculator? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');
}

//Pre-Calculus Calculator

double preCalculus()
{
	char cAns = 0;
	int menu = 0;
	
	do		
	{
		system("cls");
		cout << endl << BORDER;
		cout << "Welcome to Pre-Calculus Calculator!" << endl << endl;
		cout << "1 - Convert from Radian to Degree" << endl;
		cout << "2 - Convert from Degree to Radian" << endl;		
		cout << "3 - Value of Sin, Cosine, Tangent (in Radian)" << endl;
		cout << "4 - Value of Sin, Cosine, Tangent (in Degree)" << endl;		
		cout << "5 - Value of Inverse Sin, Inverse Cos, Inverse Tangent (in Radian)" << endl;
		cout << "6 - Value of Inverse Sin, Inverse Cos, Inverse Tangent (in Degree)" << endl;
		cout << "Select the menu choice number from the above list, 1 - 6: ";
		cin >> menu;
		cout << endl;
		cout << endl << BORDER << endl;
		switch (menu)
		{
			case 1:
				radianToDegree();
				break;

			case 2:
				degreeToRadian();
				break;		

			case 3:
				sinCosTanRadian();
				break;

			case 4:
				sinCosTanDegree();
				break;

			case 5:
				inverseTrigRadian();
				break;

			case 6:
				inverseTrigDegree();
				break;

			default:
				cout << "Not a menu choice \n";
				break;
		}

		cout << "More Pre-Calculus Calculator? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');

	return 0;
}

double radianToDegree()
{
	double dRadian;

	cout << "Enter the value in Radian : ";
	cin >> dRadian;

	double dResult = dRadian * (180/PI);

	cout << dRadian << " radian = " << dResult << " degree" <<endl<<endl;
	
	return 0;

}

double degreeToRadian()
{
	double dDegree;

	cout << "Enter the value in Degree : ";
	cin >> dDegree;

	double dResult = dDegree * (PI/180);

	cout << dDegree << " degree = " << dResult << " radian" <<endl<<endl;

	return 0;
}

double sinCosTanRadian()
{
	cout << setiosflags (ios::showpoint | ios::fixed) << setprecision(4);
	double dRadians;
	cout << "Enter Angle theta(radians): ";
    cin >> dRadians;

    double dResult = dRadians;
    double dSine = sin(dResult);
    double dCosine = cos(dResult);
    double dTangent = tan(dResult);
                           
	cout << "\n Here are your trigonometric result: \n";
                           
    cout << "Sin theta = " << dSine << endl;
    cout << "Cos theta = " << dCosine << endl;
    cout << "Tan theta = " << dTangent << endl;

	return 0;
}

double sinCosTanDegree()
{
	cout << setiosflags (ios::showpoint | ios::fixed) << setprecision(4);
	double degrees;

	cout << "Enter Angle theta (degrees): ";
    cin >> degrees;
    
	//convert from radian to degree
	double dResult = (degrees * PI)/180;
    
	double dSine = sin (dResult);
    double dCosine = cos (dResult);
    double dTangent = tan (dResult);

	cout << "\n Here are your trigonometric result: \n";
                          
    cout << "Sin theta = " << dSine << endl;
    cout << "Cos theta = " << dCosine << endl;
    cout << "Tan theta = " << dTangent << endl;

	return 0;
}

double inverseTrigRadian()
{
	cout << setiosflags (ios::showpoint | ios::fixed) << setprecision(4);
	double dRadians;
	cout << "Enter Angle theta (radian): ";
	cin >> dRadians;

    double dResult = dRadians;
    double    dArctan = atan (dResult);
    double    dArccos = acos (dResult);
    double    dArcsine = asin (dResult);

	cout << "\n Here are your trigonometric result: \n";
    cout << "Inverse Sin(Arcsine) theta = " << dArcsine << endl;
    cout << "Inverse Cos(Arccos) theta = " << dArccos << endl;
    cout << "Inverse Tan(Arctan) theta = " << dArctan << endl;

	return 0;
}

double inverseTrigDegree()
{
	cout << setiosflags (ios::showpoint | ios::fixed) << setprecision(4);
	double degrees;
	cout << "Enter Angle theta (degree): ";
	cin >> degrees;

	double dResult = degrees;
	
	//in radian unit
    double dArctan = atan (dResult);
    double dArccos = acos (dResult);
    double dArcsine = asin (dResult);

	cout << "\n Here are your trigonometric result: \n";
                          
    cout << "Inverse Sin(Arcsine) theta = " << (dArcsine * 180)/PI << endl; //convert to degree
    cout << "Inverse Cos(Arccos) theta = " << (dArccos*180)/PI << endl; //convert to degree
    cout << "Inverse Tan(Arctan) theta = " << (dArctan*180)/PI << endl; //convert to degree

	return 0;
}