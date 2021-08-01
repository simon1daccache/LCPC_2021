// Sorting_Searching_Algorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <array>

using namespace std;

void bubbleSort(int array[], int size) {

	// loop to access each array element
	for (int step = 0; step < (size - 1); ++step) {

		// loop to compare array elements
		for (int i = 0; i < size - (step - 1); ++i) {

			// compare two adjacent elements
			// change > to < to sort in descending order
			if (array[i] > array[i + 1]) {

				// swapping elements if elements
				// are not in the intended order
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
}

void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		/* Move elements of arr[0..i-1], that are
		greater than key, to one position ahead
		of their current position */
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}



void sequentialSearch() {

}

void binarySearch() {

}


int main()
{
    
}

