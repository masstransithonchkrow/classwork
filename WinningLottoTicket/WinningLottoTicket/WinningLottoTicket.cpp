/*This program functions as a basic
lottery ticket validator. It holds 
an array with ten numbers. If the 
user enters one of those numbers,
they should be told they have a 
winning ticket, otherwise they 
should be told the opposite.*/

//#include"stdafx.h"
#include<iostream>
#include<string>
using namespace std;

//function prototypes
void greeting();
int linearSearch(const int[], int, int); //linear search function prototype
int binarySearch(const int[], int, int); //binary search algorithm

int main()
{
	greeting();
	int choice; //holds choice information for the type of sort selection
	//the user wishes to use.
	const int SIZE = 10;
	int results; //holds results
	int ticketNumber; //holds ticket number

	//initialize an array with the winning lottery tickets.
	int winningNumbers[SIZE] = { 13579,	26791,	26792,	33445,	55555,
							 62483,	77777,	79422,	85647,	93121	};


	//ask the user what kind of search they want to perform.
	cout << "What kind of search would you like to perform?" << endl;
	cout << "Press 1 for Linear Search\nPress 2 for Binary Search\n";
	cin >> choice; 
	//program code for the linear search should go here
	if (choice == 1)
	{
		cout << "Please enter a lottery ticket number.\n";
			cin >> ticketNumber;
			if (ticketNumber >= 0 || ticketNumber <= 95000)
			{
				//check the input to see if it's a winner.
				results = linearSearch(winningNumbers, SIZE, ticketNumber);
				//if the search turned up empty, let the user know.
				if (results == -1)
				cout << "The number you entered was not a winning ticket.\n";
				else
				{
					//otherwise, let the user know they won.
					cout << "Your lottery ticket is a winning ticket!\n";
				}
			}
			else if (ticketNumber <= 0 || ticketNumber >= 95000)
			{
				cout << "That was an invalid entry. Please try again.\n";
				main();
			}
	}
	//program code for the binary search should go here
	else if (choice == 2)
	{
		cout << "Please enter a lottery ticket number.\n";
		cin >> ticketNumber;
		if (ticketNumber >= 0 || ticketNumber <= 95000)
		{
			//check the input to see if it's a winner.
			results = linearSearch(winningNumbers, SIZE, ticketNumber);
			//if the search turned up empty, let the user know.
			if (results == -1)
				cout << "The number you entered was not a winning ticket.\n";
			else
			{
				//otherwise, let the user know they won.
				cout << "Your lottery ticket is a winning ticket!\n";
			}
		}
		else if (ticketNumber <= 0 || ticketNumber >= 95000)
		{
			cout << "That was an invalid entry. Please try again.\n";
			main();
		}
	}
	else
	{
		cout << "That's not a valid choice. Please select one or two.\n";
		main();
	}
	
	
			//this will ask the user whether or not they want to exit the program.
	string input;
	cout << "Do you want to run the program again? Type 'y' if you do, or any (alphanumeric) key to leave. ";
	cin >> input;
	if (input == "y")
		main();
	else if (input != "y")
		return 0;
}

//**************************************************
// This is the program's greeting header.		   *
//**************************************************

void greeting()
{
	cout << "#############################################################\n";
	cout << "Lottery Ticket Demonstration with a Linear and Binary Search\n";
	cout << "(c) 2020 The Mass Transit Honchkrow\n";
	cout << "#############################################################\n";
}
//**********************************************************************
// The linearSearch function performs a linear search on an integer
// array. The array 'winningNumberArr', which does not have a specified
// size, is searched to see if any of its entries match the value 
// entered by the user. If it is, the user is told they have a winning
// ticket. Otherwise, -1 is returned and the user is told they lost.
//**********************************************************************
int linearSearch(const int winningNumberArr[], int size, int value)
{
	int index = 0; //used to search arrays by subscript
	int position = -1; //records position of search value
	bool found = false; //flag to indicate whether value exists

	while (index < size && !found)
	{
		if (winningNumberArr[index] == value) //if the value exists and is found
		{
			found = true; //toggles flag
			position = index; //record subscript
		}
		index++; //goes to next element
	}
	return position;
}
//*****************************************************************
// the binarySearch function performs a binary search on an
// integer array, 'winningNumberArr', which does not have a fixed
// size, searches the array and matches it against the number
// provided by the user. If there's a match, the user is told that
// they won. If not, they're told the opposite.
//*****************************************************************

int binarySearch(const int winningNumberArr[], int size, int value)
{
	int first = 0, //first array element
		last = size - 1, //last array element
		middle, // midpoint of search
		position = -1; //position of search value
	bool found = false; //flag

	while (!found && first <= last)
	{
		middle = (first + last) / 2; //calculate midpoint
		if (winningNumberArr[middle] == value) //if value is found at mid
		{
			found = true;
			position = middle;
		}
		else if (winningNumberArr[middle] > value) //if the value is in lower half
			last = middle - 1;
		else
			first = middle + 1; //if value is in upper half
	}
	return position;
}