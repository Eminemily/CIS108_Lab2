// Exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../../std_lib_facilities.h"

int main()
{
	//ask user for name and show their age in 10 years
	cout << "Enter your age: ";
	int age = 0;
	cin >> age;
	int future_age = age + 10;
	cout << "Your age in 10 years will be " << future_age << "\n";

	//ask user for temperature and convert it to Celsius
	cout << "Enter the current temperature in degrees Fahrenheit: ";
	int temp = 1;
	cin >> temp;
	int celsius_temp = (temp - 32) * .555555556;
	cout << "The current temperature in degrees Celsius is " << celsius_temp << "\n";


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
