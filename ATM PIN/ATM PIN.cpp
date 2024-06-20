						
								/* Program to read a PIN from user and check if its correct or wrong pin to show the balance  */
#include <iostream>
#include <cmath>
using namespace std;

int main()

{
	int PIN = 5009;

	while (PIN > 0) {

		cout << "Enter PIN code please " << endl;
		cin >> PIN;
		
		if (PIN == 5009) {

			cout << "Your balance is 7500 Dollars " << endl;
			break;
		}
		
		else {

			cout << "Incorrect PIN ! Please try again " << endl;
		}

		
	}

	return 0;

	// Created by @ilyes_Trabelsi
}