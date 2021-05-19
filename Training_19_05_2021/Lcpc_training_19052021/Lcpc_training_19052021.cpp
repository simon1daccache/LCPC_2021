// Training_19_05_2021.cpp : This file contains the 'main' function. Program execution begins and ends there.

// Arrays training

#include <iostream>
#include <array>
#include <fstream>
using namespace std;

void exercise1() {
	int arrayOfInts[5];
	int number, max = -1;
	for (int i = 0; i < 5; i++) {

		cin >> number;
		arrayOfInts[i] = number;

	}

	max = arrayOfInts[0];

	for (int i = 0; i < 4; i++) {

		if (max < arrayOfInts[i + 1]) {
			max = arrayOfInts[i + 1];
		}


	}

	cout << "Max number is: " << max << endl;
}

void problem3_B() {
	ifstream infile;
	infile.open("hello.in");
	int t, x, y;
	infile >> t;

	for (int i = 0; i < t; i++) {

		infile >> x;
		infile >> y;

		cout << "sum = " << x + y << endl;

	}

}


int main()
{
	problem3_B();
	

}

