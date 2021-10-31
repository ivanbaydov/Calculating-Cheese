//---------------------------------------------------------------------------------
//
// Title:          CheeseCalculationProgram
// Lab Course:     ITCS 2530 V0801 2021FA
// Author:         Ivan Baydov
// Date:           10/28/2021
// Description:    The code asks the user for the number of KG of cheese produced 
//                 It then will output the number of container needed to hold the
//                 cheese, the cost of producing the amout of cheese and the profit
//                 from producing cheese.
//---------------------------------------------------------------------------------

#include <iostream>// Inputs and Outputs stream.
#include <iomanip>// Formatted inputs and Outputs.
#include <string>// For String data type.

using namespace std;

// Declared Constents

const int WIDTH = 60; // The Width of the Astrisks (*)
const int COLFMT = 8; // COLFMT is adding Astrisks to the right 8 times
const int COLFMT2 = 59; // COLFMT2 is adding Astrisks from the begining of the sentence.
const double CONTAINER = 2.76; // Container, Cost and Profit Per Container are the varibles of what each is worth.
const double COST = 4.12;
const double PROFIT_PER_CONT = 1.45;

int main()
{
	// Declared Variables
	int UserInput;
	int UserContainer;
	double UserContainerCost;
	double UserContainerPrice;
	
	// Prints the title screen 

	cout << setfill('*') << setw(WIDTH)<< "*" << endl
	 << setw(15) << "*" << " Welcome To Calculating Cheese. " << setw(15) << "*" << endl
	 << setfill('*') << setw(WIDTH) << "*" << endl;

	// Gets UserInput 

	cout << "Please enter the total number of kilograms of cheese produced: ";
	cin >> UserInput;

	// Math Formula

	UserContainer = (UserInput / CONTAINER) + 0.5;
	UserContainerCost = UserContainer * COST;
	UserContainerPrice = UserContainer * PROFIT_PER_CONT;

	// Displays the output

	cout << fixed << setprecision(0) << left << setw(COLFMT2) << setfill(' ') << "The number of containers to hold the cheese is: " << right << setw(COLFMT) << UserContainer << endl
	     << left << setw(COLFMT2) << setprecision(2) << "The cost of producing " + to_string(UserContainer) + " container(s) of cheese is: $ " << right << setw(COLFMT) << setfill(' ') << UserContainerCost << endl
		 << left << setw(COLFMT2) << "The profit from producing " + to_string(UserContainer) + " container(s) of cheese is: $ " << right << setw(COLFMT) << setfill(' ') << UserContainerPrice << endl;

	


   
}
