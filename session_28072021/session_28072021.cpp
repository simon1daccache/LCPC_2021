// session_28072021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;



void Problem_A() {

	int arr[5][5];
	int st_nbr, st_grd;

	for (int i = 0; i < 5; i++) {
		cout << "enter the student number" << endl;
		cin >> st_nbr;
		arr[i][0] = st_nbr;
		for (int j = 0; j < 4; j++) {
			cout << "enter the student grade" << endl;
			cin >> st_grd;
			arr[i][j + 1] = st_grd;
		}
		cout << endl;
		cout << endl;
		cout << endl;
	}



	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


}

int main()
{
	Problem_A();
/*
	int arr[5][5] = {17,24,1,8,15,23,5,7,14,16,4,6,13,20,22,10,12,19,21,3,11,18,25,2,9};
	//int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };


	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 5; j++) {
			printf("%d ", arr[i][j] );
		}
		cout << endl;
	}

	*/
}

