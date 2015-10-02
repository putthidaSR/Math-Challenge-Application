#include<iostream>
#include<string>
#include<math.h>

using namespace std;

void conCooking()
{
	double measure;

	char selection('M'), cAns(0);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);

	//Cooking Measures http://en.wikipedia.org/wiki/Cooking_measures
	double mL, teaspoon, tablespoon, fluidOunce, cup, pint, quart, gallon;

	do
	{
		system("cls");
		cout << "Conversions are in US standards" << "\n\nEnter which cooking measure to use, (M)illilitres, (T)easpoon, T(A)blespoon, (F)luid Ounce, (C)up, (P)int, (Q)uart, (G)allon: ";
		cin >> selection;

		cout << "Enter amount of cooking measure : ";
		cin >> measure;

		if (selection == 'M' || selection == 'm')
		{
			mL = measure;
			teaspoon = mL/4.93;
			tablespoon = mL/14.79;
			fluidOunce = mL/29.57;
			cup = mL/236.59;
			pint = mL/473.18;
			quart = mL/946.35;
			gallon = mL/3785.41;

			cout.precision(2);
			if (teaspoon == 1)
				cout << "\nThere is " << teaspoon << " teaspoon\n";
			else
				cout << "\nThere are " << teaspoon << " teaspoons\n";
			cout.precision(3);
			if (tablespoon == 1)
				cout << "\nThere is " << tablespoon << " tablespoon\n";
			else
				cout << "\nThere are " << tablespoon << " tablespoons\n";
			if (fluidOunce == 1)
				cout << "\nThere is " << fluidOunce << " fluid ounce\n";
			else
				cout << "\nThere are " << fluidOunce << " fluid ounces\n";
			cout.precision(4);
			if (cup == 1)
				cout << "\nThere is " << cup << " cup\n";
			else
				cout << "\nThere are " << cup << " cups\n";
			if (pint == 1)
				cout << "\nThere is " << pint << " pint\n";
			else
				cout << "\nThere are " << pint << " pint\n";
			if (quart == 1)
				cout << "\nThere is " << quart << " quart\n";
			else
				cout << "\nThere are " << quart << " quarts\n";
			cout.precision(5);
			if (gallon == 1)
				cout << "\nThere is " << gallon << " gallon\n";
			else
				cout << "\nThere are " << gallon << " gallons\n";
		}

		if (selection == 't' || selection == 't')
		{
			teaspoon = measure;
			mL = teaspoon*4.93;
			tablespoon = mL/14.79;
			fluidOunce = mL/29.57;
			cup = mL/236.59;
			pint = mL/473.18;
			quart = mL/946.35;
			gallon = mL/3785.41;

			cout.precision(2);
			if (mL == 1)
				cout << "\nThere is " << mL << " millilitre\n";
			else
				cout << "\nThere are " << mL << " millilitres\n";
			if (tablespoon == 1)
				cout << "\nThere is " << tablespoon << " tablespoon\n";
			else
				cout << "\nThere are " << tablespoon << " tablespoons\n";
			if (fluidOunce == 1)
				cout << "\nThere is " << fluidOunce << " fluid ounce\n";
			else
				cout << "\nThere are " << fluidOunce << " fluid ounces\n";
			cout.precision(3);
			if (cup == 1)
				cout << "\nThere is " << cup << " cup\n";
			else
				cout << "\nThere are " << cup << " cups\n";
			if (pint == 1)
				cout << "\nThere is " << pint << " pint\n";
			else
				cout << "\nThere are " << pint << " pint\n";
			cout.precision(4);
			if (quart == 1)
				cout << "\nThere is " << quart << " quart\n";
			else
				cout << "\nThere are " << quart << " quarts\n";
			if (gallon == 1)
				cout << "\nThere is " << gallon << " gallon\n";
			else
				cout << "\nThere are " << gallon << " gallons\n";
		}

		if (selection == 'A' || selection == 'a')
		{
			tablespoon = measure;
			mL = tablespoon*14.79;
			teaspoon = mL/4.93;
			fluidOunce = mL/29.57;
			cup = mL/236.59;
			pint = mL/473.18;
			quart = mL/946.35;
			gallon = mL/3785.41;

			cout.precision(2);
			if (mL == 1)
				cout << "\nThere is " << mL << " millilitre\n";
			else
				cout << "\nThere are " << mL << " millilitres\n";
			if (teaspoon == 1)
				cout << "\nThere is " << teaspoon << " teaspoon\n";
			else
				cout << "\nThere are " << teaspoon << " teaspoons\n";
			if (fluidOunce == 1)
				cout << "\nThere is " << fluidOunce << " fluid ounce\n";
			else
				cout << "\nThere are " << fluidOunce << " fluid ounces\n";
			cout.precision(3);
			if (cup == 1)
				cout << "\nThere is " << cup << " cup\n";
			else
				cout << "\nThere are " << cup << " cups\n";
			if (pint == 1)
				cout << "\nThere is " << pint << " pint\n";
			else
				cout << "\nThere are " << pint << " pint\n";
			if (quart == 1)
				cout << "\nThere is " << quart << " quart\n";
			else
				cout << "\nThere are " << quart << " quarts\n";
			cout.precision(4);
			if (gallon == 1)
				cout << "\nThere is " << gallon << " gallon\n";
			else
				cout << "\nThere are " << gallon << " gallons\n";
		}

		if (selection == 'F' || selection == 'f')
		{
			fluidOunce = measure;
			mL = fluidOunce*29.57;
			teaspoon = mL/4.93;
			tablespoon = mL/14.79;
			cup = mL/236.59;
			pint = mL/473.18;
			quart = mL/946.35;
			gallon = mL/3785.41;

			cout.precision(2);
			if (mL == 1)
				cout << "\nThere is " << mL << " millilitre\n";
			else
				cout << "\nThere are " << mL << " millilitres\n";
			if (teaspoon == 1)
				cout << "\nThere is " << teaspoon << " teaspoon\n";
			else
				cout << "\nThere are " << teaspoon << " teaspoons\n";
			if (tablespoon == 1)
				cout << "\nThere is " << tablespoon << " tablespoon\n";
			else
				cout << "\nThere are " << tablespoon << " tablespoons\n";
			if (cup == 1)
				cout << "\nThere is " << cup << " cup\n";
			else
				cout << "\nThere are " << cup << " cups\n";
			cout.precision(3);
			if (pint == 1)
				cout << "\nThere is " << pint << " pint\n";
			else
				cout << "\nThere are " << pint << " pint\n";
			if (quart == 1)
				cout << "\nThere is " << quart << " quart\n";
			else
				cout << "\nThere are " << quart << " quarts\n";
			cout.precision(4);
			if (gallon == 1)
				cout << "\nThere is " << gallon << " gallon\n";
			else
				cout << "\nThere are " << gallon << " gallons\n";
		}

		if (selection == 'C' || selection == 'c')
		{
			cup = measure;
			mL = cup*236.59;
			teaspoon = mL/4.93;
			tablespoon = mL/14.79;
			fluidOunce = mL/29.57;
			pint = mL/473.18;
			quart = mL/946.35;
			gallon = mL/3785.41;

			cout.precision(2);
			if (mL == 1)
				cout << "\nThere is " << mL << " millilitre\n";
			else
				cout << "\nThere are " << mL << " millilitres\n";
			if (teaspoon == 1)
				cout << "\nThere is " << teaspoon << " teaspoon\n";
			else
				cout << "\nThere are " << teaspoon << " teaspoons\n";
			if (tablespoon == 1)
				cout << "\nThere is " << tablespoon << " tablespoon\n";
			else
				cout << "\nThere are " << tablespoon << " tablespoons\n";
			if (fluidOunce == 1)
				cout << "\nThere is " << fluidOunce << " fluid ounce\n";
			else
				cout << "\nThere are " << fluidOunce << " fluid ounces\n";
			if (pint == 1)
				cout << "\nThere is " << pint << " pint\n";
			else
				cout << "\nThere are " << pint << " pint\n";
			if (quart == 1)
				cout << "\nThere is " << quart << " quart\n";
			else
				cout << "\nThere are " << quart << " quarts\n";
			cout.precision(3);
			if (gallon == 1)
				cout << "\nThere is " << gallon << " gallon\n";
			else
				cout << "\nThere are " << gallon << " gallons\n";
		}

		if (selection == 'P' || selection == 'p')
		{
			pint = measure;
			mL = pint*473.18;
			teaspoon = mL/4.93;
			tablespoon = mL/14.79;
			fluidOunce = mL/29.57;
			cup = mL/236.59;
			quart = mL/946.35;
			gallon = mL/3785.41;

			cout.precision(2);
			if (mL == 1)
				cout << "\nThere is " << mL << " millilitre\n";
			else
				cout << "\nThere are " << mL << " millilitres\n";
			if (teaspoon == 1)
				cout << "\nThere is " << teaspoon << " teaspoon\n";
			else
				cout << "\nThere are " << teaspoon << " teaspoons\n";
			if (tablespoon == 1)
				cout << "\nThere is " << tablespoon << " tablespoon\n";
			else
				cout << "\nThere are " << tablespoon << " tablespoons\n";
			if (fluidOunce == 1)
				cout << "\nThere is " << fluidOunce << " fluid ounce\n";
			else
				cout << "\nThere are " << fluidOunce << " fluid ounces\n";
			if (cup == 1)
				cout << "\nThere is " << cup << " cup\n";
			else
				cout << "\nThere are " << cup << " cups\n";
			if (quart == 1)
				cout << "\nThere is " << quart << " quart\n";
			else
				cout << "\nThere are " << quart << " quarts\n";
			if (gallon == 1)
				cout << "\nThere is " << gallon << " gallon\n";
			else
				cout << "\nThere are " << gallon << " gallons\n";
		}

		if (selection == 'Q' || selection == 'q')
		{
			quart = measure;
			mL = quart*946.35;
			teaspoon = mL/4.93;
			tablespoon = mL/14.79;
			fluidOunce = mL/29.57;
			cup = mL/236.59;
			pint = mL/473.18;
			gallon = mL/3785.41;

			cout.precision(2);
			if (mL == 1)
				cout << "\nThere is " << mL << " millilitre\n";
			else
				cout << "\nThere are " << mL << " millilitres\n";
			if (teaspoon == 1)
				cout << "\nThere is " << teaspoon << " teaspoon\n";
			else
				cout << "\nThere are " << teaspoon << " teaspoons\n";
			if (tablespoon == 1)
				cout << "\nThere is " << tablespoon << " tablespoon\n";
			else
				cout << "\nThere are " << tablespoon << " tablespoons\n";
			if (fluidOunce == 1)
				cout << "\nThere is " << fluidOunce << " fluid ounce\n";
			else
				cout << "\nThere are " << fluidOunce << " fluid ounces\n";
			if (cup == 1)
				cout << "\nThere is " << cup << " cup\n";
			else
				cout << "\nThere are " << cup << " cups\n";
			if (pint == 1)
				cout << "\nThere is " << pint << " pint\n";
			else
				cout << "\nThere are " << pint << " pint\n";
			if (gallon == 1)
				cout << "\nThere is " << gallon << " gallon\n";
			else
				cout << "\nThere are " << gallon << " gallons\n";
		}

		if (selection == 'G' || selection == 'g')
		{
			gallon = measure;
			mL = gallon*3785.41;
			teaspoon = mL/4.93;
			tablespoon = mL/14.79;
			fluidOunce = mL/29.57;
			cup = mL/236.59;
			pint = mL/473.18;
			quart = mL/946.35;

			cout.precision(2);
			if (mL == 1)
				cout << "\nThere is " << mL << " millilitre\n";
			else
				cout << "\nThere are " << mL << " millilitres\n";
			if (teaspoon == 1)
				cout << "\nThere is " << teaspoon << " teaspoon\n";
			else
				cout << "\nThere are " << teaspoon << " teaspoons\n";
			if (tablespoon == 1)
				cout << "\nThere is " << tablespoon << " tablespoon\n";
			else
				cout << "\nThere are " << tablespoon << " tablespoons\n";
			if (fluidOunce == 1)
				cout << "\nThere is " << fluidOunce << " fluid ounce\n";
			else
				cout << "\nThere are " << fluidOunce << " fluid ounces\n";
			if (cup == 1)
				cout << "\nThere is " << cup << " cup\n";
			else
				cout << "\nThere are " << cup << " cups\n";
			if (pint == 1)
				cout << "\nThere is " << pint << " pint\n";
			else
				cout << "\nThere are " << pint << " pint\n";
			if (quart == 1)
				cout << "\nThere is " << quart << " quart\n";
			else
				cout << "\nThere are " << quart << " quarts\n";
		}

		cout << "More Cooking Measure Conversions? (y/n)  ";
		cin >> cAns;
	}
	while (cAns == 'y' || cAns == 'Y');
}

//Weight Conversions
void conWeight()
{
	double weight;

	char selection('K'), cAns(0);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);

	//SI Base Units http://en.wikipedia.org/wiki/International_System_of_Units
	double kilogram, gram, milligram;

	//US Units of Mass
	double grain, ounce, pound, ton;

	do
	{
		system("cls");
		cout << "Enter which unit of weight to use, (K)ilogram, (G)ram, (M)illigram, G(R)ain, (O)unce, (P)ound, (T)on: ";
		cin >> selection;

		cout << "Enter amount of weight : ";
		cin >> weight;

		if (selection == 'K' || selection == 'k')
		{
			kilogram = weight;
			gram = kilogram*1000;
			milligram = gram*1000;
			grain = milligram/64.79891;
			ounce = gram/28.349523125;
			pound = gram/453.59237;
			ton = kilogram/907.18474;

			cout.precision(2);
			if (gram == 1)
				cout << "\nThere is " << gram << " gram\n";
			else
				cout << "\nThere are " << gram << " grams\n";
			if (milligram == 1)
				cout << "\nThere is " << milligram << " milligram\n";
			else
				cout << "\nThere are " << milligram << " milligrams\n";
			if (grain == 1)
				cout << "\nThere is " << grain << " grain\n";
			else
				cout << "\nThere are " << grain << " grains\n";
			if (ounce == 1)
				cout << "\nThere is " << ounce << " ounce\n";
			else
				cout << "\nThere are " << ounce << " ounces\n";
			if (pound == 1)
				cout << "\nThere is " << pound << " pound\n";
			else
				cout << "\nThere are " << pound << " pounds\n";
			cout.precision(4);
			if (ton == 1)
				cout << "\nThere is " << ton << " ton\n";
			else
				cout << "\nThere are " << ton << " tons\n";
		}

		if (selection == 'G' || selection == 'g')
		{
			gram = weight;
			kilogram = gram/1000;
			milligram = gram*1000;
			grain = milligram/64.79891;
			ounce = gram/28.349523125;
			pound = gram/453.59237;
			ton = kilogram/907.18474;

			cout.precision(3);
			if (kilogram == 1)
				cout << "\nThere is " << kilogram << " kilogram\n";
			else
				cout << "\nThere are " << kilogram << " kilograms\n";
			cout.precision(2);
			if (milligram == 1)
				cout << "\nThere is " << milligram << " milligram\n";
			else
				cout << "\nThere are " << milligram << " milligrams\n";
			if (ounce == 1)
				cout << "\nThere is " << ounce << " ounce\n";
			else
				cout << "\nThere are " << ounce << " ounces\n";
			cout.precision(4);
			if (pound == 1)
				cout << "\nThere is " << pound << " pound\n";
			else
				cout << "\nThere are " << pound << " pounds\n";
			cout.precision(7);
			if (ton == 1)
				cout << "\nThere is " << ton << " ton\n";
			else
				cout << "\nThere are " << ton << " tons\n";
		}

		if (selection == 'M' || selection == 'm')
		{
			milligram = weight;
			gram = milligram/1000;
			kilogram = gram/1000;
			grain = milligram/64.79891;
			ounce = gram/28.349523125;
			pound = gram/453.59237;
			ton = kilogram/907.18474;

			cout.precision(6);
			if (kilogram == 1)
				cout << "\nThere is " << kilogram << " kilogram\n";
			else
				cout << "\nThere are " << kilogram << " kilograms\n";
			cout.precision(3);
			if (gram == 1)
				cout << "\nThere is " << gram << " gram\n";
			else
				cout << "\nThere are " << gram << " grams\n";
			cout.precision(6);
			if (ounce == 1)
				cout << "\nThere is " << ounce << " ounce\n";
			else
				cout << "\nThere are " << ounce << " ounces\n";
			cout.precision(7);
			if (pound == 1)
				cout << "\nThere is " << pound << " pound\n";
			else
				cout << "\nThere are " << pound << " pounds\n";
			cout.precision(10);
			if (ton == 1)
				cout << "\nThere is " << ton << " ton\n";
			else
				cout << "\nThere are " << ton << " tons\n";
		}

		if (selection == 'R' || selection == 'r')
		{
			grain = weight;
			milligram = grain*64.79891;
			gram = milligram/1000;
			kilogram = gram/1000;
			ounce = gram/28.349523125;
			pound = gram/453.59237;
			ton = kilogram/907.18474;

			cout.precision(6);
			if (kilogram == 1)
				cout << "\nThere is " << kilogram << " kilogram\n";
			else
				cout << "\nThere are " << kilogram << " kilograms\n";
			cout.precision(3);
			if (gram == 1)
				cout << "\nThere is " << gram << " gram\n";
			else
				cout << "\nThere are " << gram << " grams\n";
			cout.precision(2);
			if (milligram == 1)
				cout << "\nThere is " << milligram << " milligram\n";
			else
				cout << "\nThere are " << milligram << " milligrams\n";
			cout.precision(4);
			if (ounce == 1)
				cout << "\nThere is " << ounce << " ounce\n";
			else
				cout << "\nThere are " << ounce << " ounces\n";
			cout.precision(5);
			if (pound == 1)
				cout << "\nThere is " << pound << " pound\n";
			else
				cout << "\nThere are " << pound << " pound\n";
			cout.precision(9);
			if (ton == 1)
				cout << "\nThere is " << ton << " ton\n";
			else
				cout << "\nThere are " << ton << " tons\n";
		}

		if (selection == 'O' || selection == 'o')
		{
			ounce = weight;
			gram = ounce*28.349523125;
			milligram = gram*1000;
			kilogram = gram/1000;
			grain = milligram/64.79891;
			pound = gram/453.59237;
			ton = kilogram/907.18474;

			cout.precision(3);
			if (kilogram == 1)
				cout << "\nThere is " << kilogram << " kilogram\n";
			else
				cout << "\nThere are " << kilogram << " kilograms\n";
			cout.precision(2);
			if (gram == 1)
				cout << "\nThere is " << gram << " gram\n";
			else
				cout << "\nThere are " << gram << " grams\n";
			if (milligram == 1)
				cout << "\nThere is " << milligram << " milligram\n";
			else
				cout << "\nThere are " << milligram << " milligrams\n";
			if (grain == 1)
				cout << "\nThere is " << grain << " grain\n";
			else
				cout << "\nThere are " << grain << " grains\n";
			cout.precision(3);
			if (pound == 1)
				cout << "\nThere is " << pound << " pound\n";
			else
				cout << "\nThere are " << pound << " pound\n";
			cout.precision(6);
			if (ton == 1)
				cout << "\nThere is " << ton << " ton\n";
			else
				cout << "\nThere are " << ton << " tons\n";
		}

		if (selection == 'P' || selection == 'p')
		{
			pound = weight;
			gram = pound*453.59237;
			milligram = gram*1000;
			kilogram = gram/1000;
			grain = milligram/64.79891;
			ounce = gram/28.349523125;
			ton = kilogram/907.18474;

			cout.precision(2);
			if (kilogram == 1)
				cout << "\nThere is " << kilogram << " kilogram\n";
			else
				cout << "\nThere are " << kilogram << " kilograms\n";
			if (gram == 1)
				cout << "\nThere is " << gram << " gram\n";
			else
				cout << "\nThere are " << gram << " grams\n";
			if (milligram == 1)
				cout << "\nThere is " << milligram << " milligram\n";
			else
				cout << "\nThere are " << milligram << " milligrams\n";
			if (grain == 1)
				cout << "\nThere is " << grain << " grain\n";
			else
				cout << "\nThere are " << grain << " grains\n";
			if (ounce == 1)
				cout << "\nThere is " << ounce << " ounce\n";
			else
				cout << "\nThere are " << ounce << " ounces\n";
			cout.precision(5);
			if (ton == 1)
				cout << "\nThere is " << ton << " ton\n";
			else
				cout << "\nThere are " << ton << " tons\n";
		}

		if (selection == 'T' || selection == 't')
		{
			ton = weight;
			kilogram = ton*907.18474;
			gram = kilogram*1000;
			milligram = gram*1000;
			grain = milligram/64.79891;
			ounce = gram/28.349523125;
			pound = gram/453.59237;

			cout.precision(2);
			if (kilogram == 1)
				cout << "\nThere is " << kilogram << " kilogram\n";
			else
				cout << "\nThere are " << kilogram << " kilograms\n";
			if (gram == 1)
				cout << "\nThere is " << gram << " gram\n";
			else
				cout << "\nThere are " << gram << " grams\n";
			if (milligram == 1)
				cout << "\nThere is " << milligram << " milligram\n";
			else
				cout << "\nThere are " << milligram << " milligrams\n";
			if (grain == 1)
				cout << "\nThere is " << grain << " grain\n";
			else
				cout << "\nThere are " << grain << " grains\n";
			if (ounce == 1)
				cout << "\nThere is " << ounce << " ounce\n";
			else
				cout << "\nThere are " << ounce << " ounces\n";
			if (pound == 1)
				cout << "\nThere is " << pound << " pound\n";
			else
				cout << "\nThere are " << pound << " pounds\n";
		}

		cout << "More Weight Conversions? (y/n)  ";
		cin >> cAns;
	}
	while (cAns == 'y' || cAns == 'Y');
}

//Time Conversions
void conTime()
{
	double time;

	char selection('M'), cAns(0);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);

	//Time Conversions
	double second, minute, hour, day, year;

	do
	{
		system("cls");
		cout << "All Years are treated as 365 days. Leap years are not calculated." << "\n\nEnter which unit of time to use, (S)econd, (M)inute, (H)our, (D)ay, (Y)ear: ";
		cin >> selection;

		cout << "Enter length of time: ";
		cin >> time;

		if (selection == 'S' || selection == 's')
		{
			second = time;
			minute = second/60;
			hour = minute/60;
			day = hour/24;
			year = day/365;

			cout.precision(2);
			if (minute == 1)
				cout << "\nThere is " << minute << " minute\n";
			else
				cout << "\nThere are " << minute << " minutes\n";
			cout.precision(3);
			if (hour == 1)
				cout << "\nThere is " << hour << " hour\n";
			else
				cout << "\nThere are " << hour << " hours\n";
			cout.precision(4);
			if (day == 1)
				cout << "\nThere is " << day << " day\n";
			else
				cout << "\nThere are " << day << " days\n";
			cout.precision(5);
			if (year == 1)
				cout << "\nThere is " << year << " year\n";
			else
				cout << "\nThere are " << year << " years\n";
		}

		if (selection == 'M' || selection == 'm')
		{
			minute = time;
			second = minute*60;
			hour = minute/60;
			day = hour/24;
			year = day/365;

			cout.precision(2);
			if (second == 1)
				cout << "\nThere is " << second << " second\n";
			else
				cout << "\nThere are " << second << " seconds\n";
			cout.precision(3);
			if (hour == 1)
				cout << "\nThere is " << hour << " hour\n";
			else
				cout << "\nThere are " << hour << " hours\n";
			cout.precision(4);
			if (day == 1)
				cout << "\nThere is " << day << " day\n";
			else
				cout << "\nThere are " << day << " days\n";
			cout.precision(5);
			if (year == 1)
				cout << "\nThere is " << year << " year\n";
			else
				cout << "\nThere are " << year << " years\n";
		}

		if (selection == 'H' || selection == 'h')
		{
			hour = time;
			minute = hour*60;
			second = minute*60;
			day = hour/24;
			year = day/365;

			cout.precision(2);
			if (second == 1)
				cout << "\nThere is " << second << " second\n";
			else
				cout << "\nThere are " << second << " seconds\n";
			if (minute == 1)
				cout << "\nThere is " << minute << " minute\n";
			else
				cout << "\nThere are " << minute << " minutes\n";
			cout.precision(3);
			if (day == 1)
				cout << "\nThere is " << day << " day\n";
			else
				cout << "\nThere are " << day << " days\n";
			cout.precision(5);
			if (year == 1)
				cout << "\nThere is " << year << " year\n";
			else
				cout << "\nThere are " << year << " years\n";
		}

		if (selection == 'D' || selection == 'd')
		{
			day = time;
			hour = day*24;
			minute = hour*60;
			second = minute*60;
			year = day/365;

			cout.precision(2);
			if (second == 1)
				cout << "\nThere is " << second << " second\n";
			else
				cout << "\nThere are " << second << " seconds\n";
			if (minute == 1)
				cout << "\nThere is " << minute << " minute\n";
			else
				cout << "\nThere are " << minute << " minutes\n";
			cout.precision(3);
			if (hour == 1)
				cout << "\nThere is " << hour << " hour\n";
			else
				cout << "\nThere are " << hour << " hours\n";
			cout.precision(4);
			if (year == 1)
				cout << "\nThere is " << year << " year\n";
			else
				cout << "\nThere are " << year << " years\n";
		}

		if (selection == 'Y' || selection == 'y')
		{
			year = time;
			day = 365*year;
			hour = day*24;
			minute = hour*60;
			second = minute*60;

			cout.precision(2);
			if (second == 1)
				cout << "\nThere is " << second << " second\n";
			else
				cout << "\nThere are " << second << " seconds\n";
			if (minute == 1)
				cout << "\nThere is " << minute << " minute\n";
			else
				cout << "\nThere are " << minute << " minutes\n";
			if (hour == 1)
				cout << "\nThere is " << hour << " hour\n";
			else
				cout << "\nThere are " << hour << " hours\n";
			if (day == 1)
				cout << "\nThere is " << day << " day\n";
			else 
				cout << "\nThere are " << day << " days\n";
		}

		cout << "More Time Conversions? (y/n)  ";
		cin >> cAns;
	}
	while (cAns == 'y' || cAns == 'Y');
}

//Measurement Unit Conversion functions
void conLinearMetric_US()
{
	double length(0.0);
	char selection('M'), cAns(0);

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);

	//SI Base Unit
	double meter;

	//US Units of Length http://en.wikipedia.org/wiki/United_States_customary_units
	double inch, foot, yard, mile;

	do
	{
		system("cls");
		cout << "Enter which unit of length to use, (M)eter, (I)nch, (F)oot, (Y)ard, Mi(L)e: ";
		cin >> selection;

		cout << "Enter length: ";
		cin >> length;

		if (selection == 'M' || selection == 'm')
		{
			meter = length;
			inch = (meter/.0254);
			foot = (meter/.3048);
			yard = (meter/.9144);
			mile = (meter/1609.344);
			
			cout.precision(2);
			if (inch ==  1)
				cout << "\nThere is " << inch << " inch \n";
			else
				cout << "\nThere are " << inch << " inches \n";
			if (foot == 1)
				cout << "\nThere is " << foot << " foot \n";
			else
				cout << "\nThere are " << foot << " feet \n";
			if (yard == 1)
				cout << "\nThere is " << yard << " yard \n";
			else
				cout << "\nThere are " << yard << " yards \n";
			cout.precision(6);
			if (mile == 1)
				cout << "\nThere is " << mile << " mile \n";
			else
				cout << "\nThere are " << mile << " miles \n\n";
		}

		if (selection == 'I' || selection == 'i')
		{
			inch = length;
			meter = (inch*.0254);
			foot = (inch/12);
			yard = (inch/36);
			mile = (inch/63360);

			cout.precision(3);
			if (meter ==  1)
				cout << "\nThere is " << meter << " meter \n";
			else
				cout << "\nThere are " << meter << " meters \n";
			if (foot == 1)
				cout << "\nThere is " << foot << " foot \n";
			else
				cout << "\nThere are " << foot << " feet \n";
			if (yard == 1)
				cout << "\nThere is " << yard << " yard \n";
			else
				cout << "\nThere are " << yard << " yards \n";
			cout.precision(6);
			if (mile == 1)
				cout << "\nThere is " << mile << " mile \n";
			else
				cout << "\nThere are " << mile << " miles \n\n";
		}

		if (selection == 'F' || selection == 'f')
		{
			foot = length;
			meter = (foot*.3048);
			inch = (foot*12);
			yard = (foot/3);
			mile = (foot/5280);

			cout.precision(3);
			if (meter ==  1)
				cout << "\nThere is " << meter << " meter \n";
			else
				cout << "\nThere are " << meter << " meters \n";
			cout.precision(2);
			if (inch == 1)
				cout << "\nThere is " << inch << " inch \n";
			else
				cout << "\nThere are " << inch << " inches \n";
			if (yard == 1)
				cout << "\nThere is " << yard << " yard \n";
			else
				cout << "\nThere are " << yard << " yards \n";
			cout.precision(6);
			if (mile == 1)
				cout << "\nThere is " << mile << " mile \n";
			else
				cout << "\nThere are " << mile << " miles \n\n";
		}
		
		if (selection == 'Y' || selection == 'y')
		{
			yard = length;
			meter = (yard*.9144);
			inch = (yard*36);
			foot = (yard*3);
			mile = (yard/1760);

			cout.precision(3);
			if (meter ==  1)
				cout << "\nThere is " << meter << " meter \n";
			else
				cout << "\nThere are " << meter << " meters \n";
			cout.precision(2);
			if (inch == 1)
				cout << "\nThere is " << inch << " inch \n";
			else
				cout << "\nThere are " << inch << " inches \n";
			if (foot == 1)
				cout << "\nThere is " << foot << " foot \n";
			else
				cout << "\nThere are " << foot << " feet \n";
			cout.precision(6);
			if (mile == 1)
				cout << "\nThere is " << mile << " mile \n";
			else
				cout << "\nThere are " << mile << " miles \n\n";
		}

		if (selection == 'L' || selection == 'l')
		{
			mile = length;
			meter = (mile*1609.344);
			inch = (mile*63360);
			foot = (mile*5280);
			yard = (mile*1760);

			cout.precision(2);
			if (meter ==  1)
				cout << "\nThere is " << meter << " meter \n";
			else
				cout << "\nThere are " << meter << " meters \n";
			if (inch ==  1)
				cout << "\nThere is " << inch << " inch \n";
			else
				cout << "\nThere are " << inch << " inches \n";
			if (foot == 1)
				cout << "\nThere is " << foot << " foot \n";
			else
				cout << "\nThere are " << foot << " feet \n";
			if (yard == 1)
				cout << "\nThere is " << yard << " yard \n";
			else
				cout << "\nThere are " << yard << " yards \n\n";
		}
		
		cout << "More Metric Conversions? (y/n)  ";
		cin >> cAns;
	}
	while (cAns == 'y' || cAns == 'Y');
}

void conTempCelFahr()
{
	double temp(0.0), cTemp(0.0), fTemp(0.0), kTemp(0.0);
	char scale = 'F', cAns = 0;


	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);

	do
	{
		system("cls");
		cout << "Enter scale used for temperature, (F)ahrenheit, (C)elsius, or (K)elvin: "; 
		cin  >> scale;

		cout << "Enter temperature : ";
		cin  >> temp;

		if (scale == 'F' || scale == 'f')
		{
			fTemp = temp;
			cTemp = ((fTemp - 32) * 5) / 9;
			kTemp = ((fTemp + 459.67) * (5.0/9.0));
			cout << "\nCelcius temperature is " << cTemp << " degrees \n";
			cout << "Kelvin temperature is " << kTemp << " \n\n";
		}
	
		if (scale == 'C' || scale == 'c')
		{
			cTemp = temp;
			fTemp = (cTemp * 1.8) + 32;
			kTemp = (cTemp + 273.15);
			cout << "\nFahrenheit temperature is " << fTemp << " degrees \n";
			cout << "Kelvin temperature is " << kTemp << " \n\n";
		}
		
		if (scale == 'K' || scale == 'k')
		{
			kTemp = temp;
			fTemp = ((kTemp * (9.0/5.0)) - 459.67);
			cTemp = (kTemp - 273.15);
			cout << "\nFahrenheit temperature is " << fTemp << " degrees \n";
			cout << "Celsius temperature is " << cTemp << " \n\n";
		}

		cout << "More Temperature Conversions? (y/n)  ";
		cin >> cAns;
	} while (cAns == 'y' || cAns == 'Y');
}