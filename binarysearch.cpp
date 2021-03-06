// ConsoleApplication8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



#include "pch.h"
#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int x)
{
	int l = arr[0], h = arr[n - 1];
	int mid = l + (h - l) / 2;
	if (x == arr[mid])
		return mid;
	else if (x < arr[mid])
	{
		const int h = mid - 1;
		return binarysearch(arr, n, x);
	}
	else if (x > arr[mid])
	{
		const int l = mid + 1;
		return binarysearch(arr, n, x);
	}
}

int main()
{
	int array[] = { 5,4,3,2,1 };
	int index = binarysearch(array, 5, 2);
	cout << index;

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
