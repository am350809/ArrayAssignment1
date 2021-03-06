// Array Assignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void add_code();
void remove_code();
void display_codes();

int const SIZE = 5;
int product_code[SIZE];

int main()
{
	char reset;
	do
	{
		int choice = 0;

		//Display Menu
		cout << "1) Enter Product Codes" << endl;
		cout << "2) Remove Product Codes" << endl;
		cout << "3) Display Product Codes" << endl;
		cout << "Enter your selection and press ENTER: " << endl;
		cin >> choice;

		if (choice == 1)
		{
			add_code();
		}
		else if (choice == 2)
		{
			remove_code();
		}
		else if (choice == 3)
		{
			display_codes();
		}

		cout << "Run Again?";
		cin >> reset;
	} while (reset == 'y' || reset == 'Y');


	system("pause");
    return 0;
}

void add_code()
{
	char add = 'y';
	for (int i = 0; i < SIZE; i++)
	{
		if (product_code[i] == 0)
		{
			cout << "Enter a Product Code: ";
			cin >> product_code[i];
			cout << "Would you like to add another code? (Select Y for YES): ";
			cin >> add;

			if (add == 'y' || add == 'Y')
			{
				continue;
			}
			else
			{
				break;
			}
		}
		else
		{
			continue;
		}

	}
}

void remove_code()
{
	int remove_code = 0;
	char reset;

	do
	{
		cout << "Enter the product code you would like to remove: ";
		cin >> remove_code;

		for (int i = 0; i < SIZE; i++)
		{
			if (product_code[i] == remove_code)
			{
				product_code[i] = 0;
			}
		}

		cout << "Remove Another?: ?";
		cin >> reset;
	} while (reset == 'y' || reset == 'Y');
}

void display_codes()
{
	cout << endl << endl;
	cout << "Your Numbers Are: ";

	for (int i = 0; i < SIZE; i++)
	{
		if (product_code[i] != 0)
		{
			cout << product_code[i] << " ";
		}
	}
}


