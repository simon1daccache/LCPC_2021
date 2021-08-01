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

/*
solution 1

if (t < 10) {
		cout << "1";
	}
	else
	{
		cout << "2";
	}

*/
/*
solution 2

ifstream infile;
	infile.open("dahab.in");
	string t;
	infile >> t;
	cout << t.length();
*/

int main()
{
	//a = 97
	//z = 122

	ifstream infile;
	infile.open("string.in");

	int t, sum=0;
	
	char c ;

	infile >> t;

	infile >> c;
	/*
	sum = int(c) + t;

	if (sum > 122) {
		sum = sum - 122 + 97 -1;
	}
	
	cout << char(sum);*/

	sum = int(c) + t - 97;
	sum = sum % 26;

	sum += 97;

	cout << char(sum);

	

}

