// Lcpc_training_05052021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void Exercise1() {

	for (int i = 10; i >= 0; i--) {
		cout << i << endl;
	}
}

void Exercise2A() {
	int number ,sum=0;
	cout << "enter number ";
	cin >> number;
	while (number>0)
	{
		sum += number;
		cout << "sum in loop is " << sum << endl;
		cout << "enter number " ;
		cin >> number;
	}
	cout << "Final Sum = " << sum << endl;
}

void Exercise2B() {
	int number=0, sum = 0;
	
	do
	{
		cout << "enter number ";
		cin >> number;
		sum += number;
		cout << "sum in loop is " << sum << endl;
	} while (number > 0);
	cout << "Final Sum = " << sum << endl;
}

void Exercise3() {
	int num, counter = 0;
	cout << " Input a number to check prime or not: ";
	cin >> num;

	for (int a = 1; a <= num; a++)
	{
		if (num % a == 0)
		{
			counter++;
		}
	}

	if (counter == 2)
	{
		cout << " The number entered is prime " << endl;
	}
	else {
		cout << " The number entered is not prime"<<endl;
	}
}


int main()
{
	//Exercise1();
	//Exercise2A();
	//Exercise2B();
	Exercise3();
}

