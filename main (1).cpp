// Name: Andrew Pinkerton
// Date: 9/7/2024
// Assignment: Insertion Sort Assignment

#include <iostream>

using namespace std;

// Function to print the array
void printArray(const int arr[], int size)
{
	// Iterate through each element and cout the arr[index]
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}

// Function to sort an array using insertion sort in descending order
void insertionSort(int arr[], int size)
{
	// Start at index 1 and iterate through the array
	for (int i = 1; i < size; i++)
	{
		int j = i; // j is set to current index

		// Move elements < arr[j] to the right
		while (j > 0 && arr[j - 1] < arr[j])
		{
			// Swap arr[j] and arr[j-1]
			int temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;

			j--; // Move to the left and repeat checking
		}
	}
}

int main()
{
	// Initialization and Declaration
	const int size = 10;
	int arr[size] = { 23, 14, 56, 7, 2, 87, 45, 12, 10, 33 };

	// Print the Original/Input Array
	cout << "Input Array: "; 
	printArray(arr, size);
	cout << endl << endl;

	// Call insertionSort function and input arr and size
	insertionSort(arr, size);

	// Print the sorted array
	cout << "Sorted Array (Descending): ";
	printArray(arr, size);
	cout << endl << endl;

	return 0;
}