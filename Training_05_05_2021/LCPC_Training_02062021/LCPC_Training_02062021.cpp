// LCPC_Training_02062021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;
/*
	string str, str2 ="";
	cout << "Enter string with " <<  endl;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{

		if (str[i] == 'a') {
			str2 += '\n';
		}
		else {
			str2+= str[i];
		}
	}
	cout << str2;


*/
int main()
{
    /*
		user enters a string 
		each 7 characters must be on a line
	
	*/

	string str, str2 = "";
	cout << "Enter string with " << endl;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if(i%8 == 0)
			str2 += "\n";
		else
			str2 += str[i];
	}

	cout << str2;
	

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
