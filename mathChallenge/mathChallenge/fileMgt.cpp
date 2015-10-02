#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>

using std::ofstream;
using std::cout;
using namespace std;

void enterStuScore(int studentScore[][2], int *ptrScores, int &correctAns, int &probAttempted);
//Precondition: studentScore holds ten most current records
//Postcondition: last available element in array ia assigned score; calls removeOldRecords if array is full 

void initStuScore_NewStuScore(int studentScore[][2]);
//Precondition: array not initialized
//Poscondition: all elemets assigned zero

void getDataFromFile(int studentScore[][2], char name[16]);
//Precondition: array is initialized but has no data
//Postcondition: array loaded with data from text file with student name, e.g. "Jones.txt"

void listDataXtractedFromFile(int studentScore[][2]);
//Precondition: array loaded with student score data
//Posrcondition: data from array displayed - most recent ten scores

void countRecords(int studentScore[][2], int *ptrScores);
//Precondition: array loadedwith student scores
//Postcondition: records counted - if full, callremoveOldRecords

void removeOldRecords(int studentScore[][2], int *ptrScores);
//Precondion: array full
//Postcondition: oldest two recods removed; all remaining moved forward in array

void writeDataToFile(int studentScore[][2], char fileName[16]);
//Precondition: text file either empty of not up to dat
//Postcondition: all array elements written to file

void displayRewriteStuScore(int studentScore[][2], char name[16]);
//Precondition: text file has been updated
//Post condition: Updated data extracted from file into array and displayed 

double  getAverage(int studentScore[][2], char fileName[16]);
//Precondition: Student has completed one or more exercises
//Postcondition: Student average determined from correctAns/probAttmpted
//encouragement message displayed

const int LIST_SIZE = 10;

void recordMngt(int &correctAns, int &probAttempted, char playerLastName[16])
{
	//This function manages each of the other functions in the file management module
	int studentScore[LIST_SIZE][2], scores(0), count(0), count2(0); 
	char cAns(0), fileName[16], fileExt[6]=".txt"; 
	int* ptrScores;
	ptrScores = &scores;

	//create file name from user last name - "Jones.txt"
	strcpy(fileName, playerLastName);
	strcat(fileName, fileExt);


	//this block makes function calls to enter data based on whether or not a file is pre-existing 
	if (std::ifstream(fileName))
	{
		cout << endl;
		cout << "Update for the existing file: " << fileName << endl;		
		initStuScore_NewStuScore(studentScore);	//initializes arrays with zeros
		getDataFromFile(studentScore, fileName);	//Xtracts existing data from file to studentScrore array
		
		countRecords(studentScore, ptrScores);
		removeOldRecords(studentScore, ptrScores);	//removes old records and repositions remining data elements
		enterStuScore(studentScore, ptrScores, correctAns, probAttempted);		
		writeDataToFile(studentScore, fileName);	//writes revised data back to file
		displayRewriteStuScore(studentScore, fileName);		//List: displays revised data from array studentScore
		getAverage(studentScore, fileName);
	}
	else
	{
		cout << endl;
		cout << "System will create new file " << fileName << endl;
		initStuScore_NewStuScore(studentScore);	//initializes arrays with zeroes
		enterStuScore(studentScore, ptrScores, correctAns, probAttempted);		
		writeDataToFile(studentScore, fileName);
		getDataFromFile(studentScore, fileName);
		listDataXtractedFromFile(studentScore);		//List: Confirms data in file by displaying it	
	}	
}

//initializes array studentScore with zeroes
void initStuScore_NewStuScore(int studentScore[][2])
{
	for(int i = 0; i < LIST_SIZE; i++)	
	{
		for(int j = 0; j < 2; j++)
		{ 
			studentScore[i][j] = 0;
		}
	}
}

//Xtracts existing data from file to studentScrore array
void getDataFromFile(int studentScore[][2], char fileName[16])
{
	ofstream fout;
	ifstream fin;	
	fin.open(fileName);		
	
	if(fin.fail())
		{
			cout << "File opening failed. \n";
			exit(1);
		}
		
	for(int i = 0; i < LIST_SIZE; i++)	//extracts data from file and loads array studentScore
	{
		for(int j = 0; j < 2; j++)
		{ 
			fin >> studentScore[i][j];
		}
	}	
	fin.close();
}

//List of data as extracted from file - Confirms load of and displays array studentScore
void listDataXtractedFromFile(int studentScore[][2])
{
		
	for(int i = 0; i < LIST_SIZE; i++)		
	{	
		cout << "Score is ";
		for(int j = 0; j < 2; j++)
		{
			cout << studentScore[i][j] << " " ;
		}
		cout << endl;		
	}
}

//Records are counted to determine when array is full and when to call removeOldRecords function
void countRecords(int studentScore[][2], int *ptrScores)
{
	*ptrScores = 0;	//Resets scores to 0; Starts count from 0 element of array	
	for(int i = 0; i < LIST_SIZE; i++)		
	{
		for(int j = 0; j < 2; j++)
		{
			if (studentScore[i][j] != 0) 
			{
				*ptrScores = *ptrScores + 1;	//counts records; all records that have values greater than 0				
			}			
		}		
	}
	*ptrScores = *ptrScores / 2;	//scores are paired: correcSns and probAttempted
}

//Remove first (oldest)  pair of numbers (records) and reposition all remaing records forward to provide space for new records
void removeOldRecords(int studentScore[][2], int *ptrScores)
{	
	if(*ptrScores > LIST_SIZE - 1)	// condition to reduce list by deleting oldest records
	{
		cout << "Maximum number of records is 10, There were " << *ptrScores << " records." << endl; 
		cout << "The database of records has been trimmed to the eight most current records."  << endl;
		for(int i = 0; i < LIST_SIZE; i++)	
		{
			for(int j = 0; j < 2; j++)	//  reduces list by deleting oldest records and writing zeros to vacated indices
			{ 
				studentScore [i][j] = studentScore[i + 1][j];	//moves each record forward in list
				if(i == LIST_SIZE - 1)  studentScore[i][j] = 0;				
			}
		}
	} 	
}

//Records student score: correctAns and probAttempted
void enterStuScore(int studentScore[][2], int *ptrScores, int &correctAns, int &probAttempted)
{	
	if (*ptrScores > LIST_SIZE - 1) //Checks to see if array is full
	{
		countRecords(studentScore, ptrScores);		
	}
						
	int i = 0;
	studentScore[*ptrScores][i] = correctAns;		//call  and input data from math Modules
	i++;
	studentScore[*ptrScores][i] = probAttempted;			
	
}

//wited data in array to text file
void writeDataToFile(int studentScore[][2], char fileName[16])
	{
		ofstream fout;
		ifstream fin;

		fout.open(fileName);
	
		if(fout.fail())
		{
			cout << "File opening failed. \n";
			exit(1);
		}
	
		for(int i = 0; i <= LIST_SIZE - 1; i++)	//writes array studentScore to file 
		{
			for(int j = 0; j < 2; j++)
			{
				fout << studentScore[i][j] << " " ;	
			}
			fout << endl;
		}
		fout.close();
	}

//Displays data in array
void displayRewriteStuScore(int studentScore[][2], char fileName[16])
{
	
	cout << "List of recent scores \n";
	for(int i = 0; i < LIST_SIZE; i++)
		{	
			cout << "Score is ";
			for(int j = 0; j < 2; j++)
			{
				cout << studentScore[i][j] << " " ;	//Confirms load of and displays array studentScore					
			}
			
			cout << endl;
		}

}

//calculates total correctAns/total probAttempted - gives encouragement message
double getAverage(int studentScore[][2], char fileName[16])
{
	int iTotCorAns = 0, iTotProbAttemp = 0;
	double average = 0.0;

	//set numeric output precision to three decimal places for table display
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);

	for(int i = 0; i < LIST_SIZE; i++)
		{	
			for(int j = 0; j < 2; j++)	//increments scores from array studentScore - adds them to variables iTotCorAns and iTotProbAttemp
			{				
				if(j == 0) iTotCorAns = iTotCorAns + studentScore[i][j];
				else if(j == 1) iTotProbAttemp = iTotProbAttemp + studentScore[i][j];
			}
		}
	
	cout << "In your recent exercises, you have scored as follows: Correct Answers: " << iTotCorAns << ", Problems Attempted: " <<  iTotProbAttemp << endl << endl;
	average = ((double)iTotCorAns) / iTotProbAttemp;
	cout << "Your average score is " << average * 100 << "%"  << endl;
	if(average >= .85)
	{ 
		cout << "That is very good work.  Perhaps you should consider a more challenging grade level" << endl << endl;
	}
	else
	{
		cout << "Your average score suggests that you need improvement.  Keep working the problems." << endl << endl;
	}	
	return average;
}

