/*******************************************************************
Program Name :  Math Challenge.  The top two menu systems are included
for structure and are within this cpp file.  Other function 
are included in six other cpp files that are part of the Math
Challenge Project: calcFunctions.cpp, mathAddSub.cpp, mathMultDiv.cpp,
measurementConversion.cpp, randNumbers.cpp, fileMgt.cpp.

Programmer(s): Group 5

THIS IS VERSION 1m;

Math functions interface with fileManagement function and the getRandNum function.  

	correctAns = iCorAns;
	probAttempted = iCorAns + iWrngAns;

are the assignments needed to do the update to the student records.  The file management 
code takes care of the remainder of the work.

Last updates made 9 March 2014

*******************************************************************/
#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
#include<Windows.h>

using namespace std;

//Submenu functions
void menuAddSub(char playerLastName[16], char playerFirstName[16], int &correctAns, int &probAttempted);
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

void menuMultDiv(char playerLastName[16], char playerFirstName[16], int &correctAns, int &probAttempted);
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

void menuCalc();
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

void menuMeasureUnitConv();
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

//Add&Sub functions
double mathAddSubGrd1_2(int &correctAns, int &probAttempted);
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

double mathAddSubGrd3_4(int &correctAns, int &probAttempted);
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

//Mult&Div functions
double mathMultDivGrd4_5(int &correctAns, int &probAttempted);
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

double mathMultDivGrd5_6(int &correctAns, int &probAttempted);
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

//Calculator functions
double algebra();
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

double geometry();
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

double preCalculus();
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

//Measurement Unit Conversion functions
void conLinearMetric_US();
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

void conTempCelFahr();
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

void conTime();
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

void conWeight();
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

void conCooking();
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

//Record keeping functions
void recordMngt(int &correctAns, int &probAttempted, char playerLastName[16]);
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

void getDataFromFile(int studentScore[][2], char fileName[16]);
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

void listDataXtractedFromFile(int studentScore[][2]);
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

void countRecords(int studentScore[][2], int* ptrScores);
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

double  getAverage(int studentScore[][2], char fileName[16]);
//Precondition: user has entered the program and needs to select an option
//Postcondition: user selects option for desired task

//Random Number Generation Function
int getRandOneNum();
//user calls for a random number suited for age of student
//returns a 1-digit number
int getRandTwoNum();
//user calls for a random number suited for age of student
//returns a 2-digit number

int getRandThreeNum();
//user calls for a random number suited for age of student
//returns a 3-digit number

// Intro functions provide welcome screen and menu options with color background and foreground
#define BORDER "****************************************************************************************************\n"
void intro();
void mathQuizHeader();
void calculatorHeader();
void conversionHeader();


HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE);
const int LIST_SIZE = 10;

int main()
{
	
	int studentScore[LIST_SIZE][2], scores(0);
	char cAns = 0, fileName[16], fileExt[6]=".txt";
	int menu = 0;
	int correctAns = 0, probAttempted = 0;
	int* ptrScores;
	double average = 0.0;
	char playerLastName[16], playerFirstName[16];

	
	system("mode con cols=100 lines=70"); //expand console to display response to user on one line
	
	intro();
	
	//Registration and get name for data file
	cout << endl << endl << "Enter first and last names separated by a space: ";
	cin >> playerFirstName;
	cin >> playerLastName;
	cout << endl << endl;
	ptrScores = &scores;

	strcpy(fileName, playerLastName);
	strcat(fileName, fileExt);  //forms file name as in "Jones.txt"
	
	if (std::ifstream(fileName))
	{
		cout << "Hi " << playerFirstName << ", Welcome back to the Math Challenge." << endl;
		getDataFromFile(studentScore, fileName);				
		average = getAverage(studentScore, fileName);	//presents user with established average and message of encouragement	
	}
	else
	{
		cout << "Hi " << playerFirstName << " , the system will create a new file for your scores \"" << fileName << "\". " << endl;
	}

	cout << endl << endl << "To continue, press Enter" << endl;
	_getch();

	do		//Gives user options for desired top-level functionality
	{
		system("cls");

		cout << BORDER;
		
		//SetConsoleTextAttribute (h, FOREGROUND_RED | FOREGROUND_INTENSITY);
		system("color 1E");

		cout << "Let's get started " << playerFirstName <<  ", with the Math Challenge" << endl << endl;
		cout << "1 - Addition and Subtraction" << endl;
		cout << "2 - Multiplication and Division" << endl;
		cout << "3 - Calculator" << endl;
		cout << "4 - Meaurement Unit Conversions" << endl;
		cout << "5 - Your Score Records" << endl;
		cout << "6 - Quit" << endl; 

		cout << BORDER << endl << endl;
		cout << "Select the menu choice number from the above list, 1 - 6: ";
		

		cin >> menu;
		cout << endl;
		switch (menu)	// switch makes function calls to 2d-tier menus
		{
			case 1:
				menuAddSub(playerLastName, playerFirstName, correctAns, probAttempted);
				break;

			case 2:
				menuMultDiv(playerLastName, playerFirstName, correctAns, probAttempted);
				break;

			case 3:
				menuCalc();
				break;

			case 4:
				menuMeasureUnitConv();
				break;

			case 5:
				getDataFromFile(studentScore, fileName);	//Xtracts existing data from file to studentScrore array		
				countRecords(studentScore, ptrScores);						
				getAverage(studentScore, fileName);
				break;

			case 6:
				cout << "Thank you for accepting the Math Challenge" << endl << endl;
				break;

			default:
				cout << "Not a menu choice";
				break;
		}

		cout << "More Math Challenges? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');

	system("pause");

	return 0;
}

void menuAddSub(char playerLastName[16], char playerFirstName[16], int &correctAns, int &probAttempted)
{	
	

	//ADD & SUB MENU FUNCTION MENU
	char cAns = 0;
	int menu = 0;

	do		//Gives user options for grade level in ADD & SUB
	{
		system("cls");
		
		mathQuizHeader(); //Header for Math Quiz
		
		cout << "Welcome to Addition and Subtraction of the Math Challenge" << endl << endl;
		cout << "1 - Grades 1 - 2" << endl;
		cout << "2 - Grades 3 - 4" << endl;
		cout << "Select the menu choice number from the above list, 1 - 2: ";
		cin >> menu;
		cout << endl;
		switch (menu)	//switch makes function calls problems to be presented
		{
			case 1:
				mathAddSubGrd1_2(correctAns, probAttempted);
				break;

			case 2:
				mathAddSubGrd3_4(correctAns, probAttempted);
				break;

			default:
				cout << "Not a menu choice";
				break;
		}

		cout << "More Addition & Subtraction? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');
	
	recordMngt(correctAns, probAttempted, playerLastName);	//Executed following a quit from a math exercis- sends score to fileMngt function
}

void menuMultDiv(char playerLastName[16], char playerFirstName[16], int &correctAns, int &probAttempted)
{
	//MULT & DIV MENU FUNCTION
	char cAns = 0;
	int menu = 0;

	do		//Gives user options for grade level in MULT & DIV
	{
		system("cls");
		mathQuizHeader(); //header for Math Quiz
		cout << "Welcome to Multiplication and Division of the Math Challenge" << endl << endl;
		cout << "1 - Grades 4 - 5" << endl;
		cout << "2 - Grades 5 - 6" << endl;
		cout << "Select the menu choice number from the above list, 1 - 2: ";
		cin >> menu;
		cout << endl;
		switch (menu)	//switch makes function calls problems to be presented
		{
			case 1:
				mathMultDivGrd4_5(correctAns, probAttempted);
				break;

			case 2:
				mathMultDivGrd5_6(correctAns, probAttempted);
				break;

			default:
				cout << "Not a menu choice";
				break;
		}

		cout << "More Multiplication and Division? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');

	recordMngt(correctAns, probAttempted, playerLastName);	//Executed following a quit from a math exercis- sends score to fileMngt function
}


void menuCalc()
{
	//CALCULATOR FUNCTIONS
	char cAns = 0;
	int menu = 0;

	do		//Gives user options for functionality in the CALCULATOR
	{
		//Calculator functions

		system("cls");
		calculatorHeader(); //header for Calculator
		cout << "Welcome to the Math Challenge Calculator" << endl << endl;
		cout << "1 - Algebra" << endl;
		cout << "2 - Geometry" << endl;
		cout <<"3 - Pre-Calculus" <<endl << endl;
		cout << "Select the menu choice number from the above list, 1 - 3: ";
		cin >> menu;
		cout << endl;
		switch (menu)	//switch makes function calls 
		{
			case 1:
				algebra();
				//calcAddSub();
				break;

			case 2:
				geometry();
				//calcMultDiv();
				break;

			case 3:
				preCalculus();
				//calcGeoMetCircles();
				break;

			default:
				cout << "Not a menu choice \n";
				break;
		}

		cout << "More Calculations? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');
	return;

}


void menuMeasureUnitConv()
{
	//MEASUREMENT CONVERSION FUNCTIONS
	char cAns = 0;
	int menu = 0;

	do		//Gives user options for CONVERSIONS
	{
		system("cls");
		conversionHeader(); //Header for Conversion
		cout << "Welcome to the Math Challenge Measurement Conversion Tool" << endl << endl;
		cout << "1 - Linear Conversion" << endl;
		cout << "2 - Temperature Conversion" << endl;
		cout << "3 - Time Conversion" << endl;
		cout << "4 - Weight Conversion" << endl;
		cout << "5 - Cooking Conversion" << endl;
		cout << "Select the menu choice number from the above list, 1 - 5: ";
		cin >> menu;
		cout << endl;
		switch (menu)	//switch makes function calls 
		{
			case 1:
				conLinearMetric_US();
				break;

			case 2:
				conTempCelFahr();
				break;

			case 3:
				conTime();
				break;
			
			case 4:
				conWeight();
				break;

			case 5:
				conCooking();
				break;			
			
			default:
				cout << "Not a menu choice \n";
				break;
		}

		cout << "More Measurement Conversions? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');
}

void intro()
{

	system("mode con cols=100 lines=70");
	system("color 17");

	cout <<setw(80) <<"=======================================================================\n";
	cout <<setw(71) <<"                            ____       ____  ___   _  _   ___  \n";
	cout <<setw(70) <<"	 \\      / |____ |    |     |   | | \\/ | |___  \n";
	cout <<setw(70) <<"	  \\    /  |____ |    |     |   | |    | |      \n"; 
	cout <<setw(70) <<"	   \\/\\/   |____ |___ |____ |___| |    | |___   \n";
  
	cout << endl << endl << endl;
	cout <<setw(54) <<"_____  ___    \n";
	cout <<setw(50) <<"	 |   |   |   \n";  
	cout <<setw(50) <<"	 |   |   |   \n";
	cout <<setw(50) <<"	 |   |___|   \n";
  
	cout << endl << endl << endl;
	cout <<setw(79) <<"   __       __       _______     __________   __      __\n";
	cout <<setw(80) <<"  |* |     | *|     /  ___  \\   |__________| |  |    | *|\n";
	cout <<setw(80) <<"  |* |\\   /| *|    /  /   \\  \\      |**|     |* |    | *|\n";
	cout <<setw(80) <<"  |* |\\\\_//| *|   |* | ___ | *|     |**|     |* |____| *|\n";
	cout <<setw(80) <<"  |* | \\_/ | *|   |* ||___|| *|     |**|     |*  ____  *|\n";
	cout <<setw(80) <<"  |* |     | *|   |* |     | *|     |**|     |* |    | *|\n";
	cout <<setw(80) <<"  |* |     | *|   |* |     | *|     |**|     |* |    | *|\n";
	cout <<setw(80) <<"  |__|     |__|   |__|     |__|     |__|     |__|    |__|\n";
  
	cout << endl << endl << endl;
	cout <<setw(80) <<"  _____         __               ___  _        ____   ___     \n";
	cout <<setw(78) <<" |      |   |  /  \\   |    |    |    | \\   |  /      |      \n";
	cout <<setw(80) <<" |      |___| | __ |  |    |    |___ |  \\  | |   ___ |___     \n";
	cout <<setw(80) <<" |      |   | |    |  |    |    |    |   \\ | |     | |        \n";
	cout <<setw(79) <<" |_____ |   | |    |  |___ |___ |___ |    \\|  \\___/  |___    \n";
 
	cout << endl << endl;
	cout << setw(80) <<"=======================================================================\n";
	cout << endl << endl;
}

void mathQuizHeader()
{
	cout << endl << endl;

	cout <<setw(85) <<"=======================================================================\n ";
	cout <<setw(70)<<"           __	__     _____    _______   _    _        _____      _    _   _   _____\n";
	cout <<setw(70)<<"	   |  \\/  |   / __  \\  |__   __| | |  | |      /     \\    | |  | | | | |___  |\n";
	cout <<setw(70)<<"	   | |\\/| |  | |   | |    | |    | |__| |     |       |   | |  | | | |    / /\n";
	cout <<setw(70)<<"	   | |  | |  | |===| |    | |    | |  | |     |      \\|\\  | |__| | | |   / /_\n";
	cout <<setw(70)<<"	   |_|  |_|  |_|   |_|    |_|    |_|  |_|      \\_____/\\_\\ |______| |_|  /____|\n";
	cout << endl << setw(85) <<"=======================================================================\n";
    
	cout << endl << endl;
}

void calculatorHeader()
{
	cout << endl << endl;
	cout <<setw(85) <<"***************************************************************************************************\n";
	cout <<setw(70)<<"*    ______    _____     _       _____   _    _   _        _____    _______   ______   ______     *\n";
	cout <<setw(70)<<"*   |  ____|  / __  \\   | |     | ____| | |  | | | |      / ___ \\  |__   __| |  __  | |      |    *\n";
	cout <<setw(70)<<"*   | |      | |   | |  | |     | |     | |  | | | |     | |   | |    | |    | |  | | |  _  _|    *\n";
	cout <<setw(70)<<"*   | |____  | |===| |  | |___  | |___  | |__| | | |___  | |===| |    | |    | |__| | | | \\ \\     *\n";
	cout <<setw(70)<<"*   |______| |_|   |_|  |_____| |_____| |______| |_____| |_|   |_|    |_|    |______| |_|  \\_\\    *\n";
	cout <<setw(70)<<"*                                                                                                 *\n";
	cout <<setw(85) <<"***************************************************************************************************\n";
	cout << endl << endl;
}

void conversionHeader()
{
	cout <<setw(85) <<"***************************************************************************************************\n"; 
    cout <<setw(60)<<" ______   ______   ___    _    _       _    ______   ______   _______    __     ______    ___    _\n";
	cout <<setw(60)<<"|  ____| |  __  | |   \\  | |  | |     | |  |  ____| |      | |  _____|  |  |   |  __  |  |   \\  | |\n";
	cout <<setw(60)<<"| |      | |  | | | |\\ \\ | |   \\ \\   / /   | |____  |    __| | |_____   |  |   | |  | |  | |\\ \\ | |\n";
	cout <<setw(60)<<"| |      | |  | | | | \\ \\| |    \\ \\_/ /    |  ____| | |\\ \\   |_____  |  |  |   | |  | |  | | \\ \\| |\n";
	cout <<setw(60)<<"| |____  | |__| | | |  \\   |     \\   /     | |____  | | \\ \\   _____| |  |  |   | |__| |  | |  \\   |\n";
	cout <<setw(60)<<"|______| |______| |_|   \\__|      \\_/      |______| |_|  \\_\\ |_______|  |__|   |______|  |_|   \\__|\n";
   
	cout <<setw(85) <<"***************************************************************************************************\n";  
	cout << endl << endl << endl;
}