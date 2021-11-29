// session_25_08_2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>
#include <string>
#include <locale>
using namespace std;

int main()
{
/*
	int arr[3][3] = { 17,24,1,8,15,19,21,7,14 };


	//display
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] <<" ";

		}
		cout << endl;
	}


	// sum of rows
	int row_sum = 0;

	//sum of first row
	for (int i = 0; i < 1; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			row_sum += arr[i][j];

		}
		//cout << "\n" << row_sum;
	}

	int row_check = 0;

	bool checkedd = true;

	//checking other rows;
	for (int i = 1; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			row_check +=  arr[i][j];
			
		}

		if(row_check != row_sum)
		{
			checkedd = false;
			break;
		}
		else
		{
			row_check = 0;
		}
		//cout << "\n" << row_check;

	}


	int col_check = 0;

	//checking other columns;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			col_check += arr[j][i];
		}

		if (col_check != row_sum)
		{
			checkedd = false;
			break;
		}
		else
		{
			col_check = 0;
		}
		//cout << "\n" << col_check;

	}


	if (checkedd == true)
	{
		cout << "Magic";
	}
	else
	{
		cout << "not magic";
	}

	*/



	
	string str = "042241";
	string nwstr = "";
	bool found = false;
	
	for (int i = 0; i < str.length(); i++) {

		for (int j = i+1; j < str.length(); j++) {
			if (str[i] == str[j]) {
				found = true;
				break;
			}

		}
		if (!found)
		{
			nwstr += str[i];
		}
		found = false;

	}
	



	cout << nwstr;




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
