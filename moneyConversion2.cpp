/**
 *  @file    moneyConversion.cpp
 *  @author  Ratna lama
 *  @date    5/31/2018
 *  @version 1.0
 *
 *  @brief CSC 340, calculates change amount
 *
 *  @section DESCRIPTION
 *
 *  A program to calculate change amount.
 *
 * Asks user to enter the amount
 * The program shoud then display how to provide
 * the change to the user
 * Assume: $100 is the max bill
 * $50, $20, $10, $5, $1
 * Cents (c):
 * Quarter --> 25c,
 * dime --> 10c,
 * nickel --> 5c,
 * penny --> 1c
 */

#include <iostream>
using namespace std;

int main() {
	double amount;
	int dollars, cents;
	int quotient, remainder;

	cout <<"Enter an amount: ";
	cin >> amount;
	cout <<"Your change of " << amount <<" is: " << endl;
	cout <<"================================" << endl;

	// Convert amount to cents
	amount *= 100;
	dollars = static_cast<int> (amount)/100;
	cents = static_cast<int> (amount) % 100;


	// Calculates 100 dollars bill
	quotient = dollars/100;
	remainder = dollars % 100;
	cout << quotient <<" Hundred dollars" << endl;

	// Calculates 50 dollars bill
	quotient = remainder/50;
	remainder %= 50;
	cout << quotient <<" Fifty dollars" << endl;
	//cout << remainder <<" remainder ";

	// Calculates 20 dollars bill
	quotient = remainder/20;
	remainder %=  20;
	cout << quotient <<" Twenty dollars" << endl;
	//cout << remainder <<" remainder ";

	// Calculates 10 dollars bill
	quotient = remainder /10;
	remainder %=  10;
	cout << quotient <<" Ten dollars" << endl;

	// Calculates 5 dollars bill
	quotient = remainder /5;
	remainder %= 5;
	cout << quotient <<" Five dollars" << endl;

	// Calculates 1 dollars bill
	quotient = remainder /1;
	cout << quotient <<" one dollars" << endl;

	// Calculates 25 cents
	quotient = cents / 25;
	remainder = cents % 25;
	cout << quotient <<" Quarters" << endl;

	// Calculates 10 cents
	quotient = remainder /10;
	remainder %= 10;
	cout << quotient <<" Dimes" << endl;

	// Calculates 5 cents
	quotient = remainder /5;
	remainder %= 5;
	cout << quotient <<" Nickels" << endl;

	// Calculates 1 cent
	quotient = remainder /1;
	cout << quotient <<" Pennies" << endl;
	cout <<"================================" << endl;

	cout << endl;
	return 0;
} // end main function
