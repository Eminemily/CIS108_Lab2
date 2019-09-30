// Exercise2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../../std_lib_facilities.h"

int main()
{
	//get book information
	cout << "Please enter the title of the book: ";
	string title;
	getline (cin, title);
	cout << "Please enter the name of the author: ";
	string author;
	getline (cin, author);
	cout << "Please enter the year the book was published: ";
	int year = 0;
	cin >> year;
	cout << "Please enter the total pages in the book: ";
	int pages = 0;
	cin >> pages;

	//calculate age of book and output statement based on age
	constexpr int current_year = 2019;
	int age = current_year - year;
	if (age < 10) {
		cout << "This book is younger than 10 years old.\n";	}
	else {
		cout << "This book is at least 10 years old.\n";}

	//output statement based on amount of pages
	if (pages < 100) {
		cout << "This book is a short book.\n";
	}
	else if (pages > 100 && pages < 300) {
		cout << "This book is an average book.\n";
	}
	else {
		cout << "This book is a long book.\n";
	}


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
