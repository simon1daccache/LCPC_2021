// Lcpc_training_28042021
//This code contains the solutions of 4 exercises 
//Each exercise is a function in the code
//You just need to call the function that you need in the main 

#include <iostream>  //input output streaming

using namespace std;

void Exercise1() {
	//exercise 1 solution

	//variable declaration
		//h for height 
		//w for width
	float h, w; 

	//ask the user to enter the height
	cout << " Please enter height ";

	cin >> h; //input the number from the user

	//ask the user to enter the width
	cout << "Please enter width ";

	cin >> w; //input the number from the user

	//display the output 
	cout << "the perimeter is: " << 2 * (h + w);

	/// Remarks ///
		/*
			- the code can be more optimized by:
				*adding while loops and conditions in order to check the inputs are correct	
			- you can ask the user to enter the height and width at the same time
			- you can add a variable and place the perimeter result in it
		*/
}

void Exercise2() {
	//variable declaration
	int h, m, sum; //h for hour and m for minute

	//ask the user to enter the number of hours
	cout << "Enter the number of hours\n";
	cin >> h;
		
	//ask the user to enter the number of minutes
	cout << "Enter the number of minutes\n";
	cin >> m;
	
	//calculate the sum of minutes
	sum = h * 60 + m;

	//display the total sum of minutes
	cout << "The sum of minutes is: " << sum;

}

void Exercise3() {

	//variable declaration
	double num1, num2;

	//ask the user to enter the first number
	printf("%s\n", "Enter First number");
	
	cin >> num1;

	//ask the user to enter the second number
	printf("%s\n", "Enter First number");

	cin >> num2;

	//compare num1 and num2 and display the corresponding result output accordingly
	if (num1 > num2)
	{
		cout << num1 << " is greater than " << num2 << endl;
	}
	else if (num1 < num2)
	{
		cout << num2 << " is greater than " << num1 << "\n";
	}
	else
	{
		cout << num1 << " is equal to " << num2 << "\n";
	}
}

void Exercise4() {
	//exercise4

	//variable declaration
	float temp;

	//display message to ask the user to enter the temperature
	cout << "Enter the temperature \n";

	cin >> temp;//input to set the variable temp = to the number entered bu the user

	//condition section where we are checking the value 
	if (temp <= 0) {
		cout << "this is ice \n";
	}
	else if (temp > 0 && temp < 100) {
		cout << "this is liquid \n";

	}
	else {
		cout << "this is steam \n";

	}

	/// Remarks ///
	/*
		- the code can be more optimized by:
			*adding a while loop and condition in order to check that the input is correct	
	*/
}

int main()
{
	//Exercise1();
	//Exercise2();
	//Exercise3();
	//Exercise4();
	

}
