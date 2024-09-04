#include <iostream>
#include <algorithm>


using namespace std;


void bubbleSorting(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		bool flag = false;
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) 
			{
				swap(arr[j], arr[j + 1]);
				flag = true;
			}
		}
		if (!flag)
		{
			break;
		}
	}
}

void selectionSorting(int arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		int minIndex = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[minIndex])
			{
				minIndex = j;
			}
		}	
		if (minIndex != i)
		{
			swap(arr[minIndex], arr[i]);
		}
	}
}

void insertionSorting(int arr[], int size)
{
	for (int i = 1; i < size; i++)
	{
		int j = i - 1;

		while (j > -1 && arr[j] > arr[j + 1])
		{
			swap(arr[j], arr[j + 1]);
			j--;
		}
	}
}

void ShellSorting(int arr[], int size)
{
	for (int step = size / 2; step > 0; step /= 2)
	{
		for (int i = step; i < size; i++)
		{
			int j = i - step;

			while (j >= 0 && arr[j] > arr[j + step])
			{
				swap(arr[j], arr[j + step]);
				j -= step;
			}
		}
	}
}

int binarySearch(int arr[], int start, int end, int element)
{
	while (start <= end)
	{
		int mid = (start + end) / 2;

		if (element < arr[mid]) 
		{
			end = mid - 1;
		}
		else if (element > arr[mid])
		{
			start = mid + 1;
		}
		else if (element == arr[mid])
		{
			return mid + 1;
		}
	}

	return -1;
}


int main()
{
	int arr[100];

	int SIZE = 7;

	//-------------------------------------------- BUBBLE SORTING ---------------------------------------------//
	/*cout << "Input the array: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << "Array before bubbleSorting: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	bubbleSorting(arr, SIZE);

	cout << "Array after bubbleSorting: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;*/

	//-------------------------------------------- SELECTION SORTING ---------------------------------------------//
	/*cout << "Input the array: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << "Array before selectionSorting: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	selectionSorting(arr, SIZE);

	cout << "Array after selectionSorting: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;*/

	//-------------------------------------------- INSERTION SORTING ---------------------------------------------//
	/*cout << "Input the array: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << "Array before insertionSorting: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	insertionSorting(arr, SIZE);

	cout << "Array after insertionSorting: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;*/

	//-------------------------------------------- SHELL SORTING ---------------------------------------------//
	cout << "Input the array: ";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	cout << "Array before ShellSorting: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	ShellSorting(arr, SIZE);

	cout << "Array after ShellSorting: ";
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;

	//-------------------------------------------- BINARY SEARCH ---------------------------------------------//

	int element;
	cout << "Input the element that's needed to fing: ";
	cin >> element;

	int position = binarySearch(arr, 0, 7, element);

	if (position)
	{
		cout << "Element exists in the array --- position = " << position << endl;
	}
	else
	{
		cout << "Element doesn't exist in the array" << endl;
	}

	return 0;
}