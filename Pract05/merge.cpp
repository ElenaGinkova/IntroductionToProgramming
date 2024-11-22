#include <iostream>

const int MAX_SIZE = 100;

void merge(const int arr1[], int size1, const int arr2[], int size2, int res[], int& resSize)
{
	resSize = 0;

	int firstIter = 0;
	int secondIter = 0;

	while (firstIter < size1 && secondIter < size2)
	{
		if (arr1[firstIter] < arr2[secondIter])
		{
			res[resSize++] = arr1[firstIter++];
		}
		else
		{
			res[resSize++] = arr2[secondIter++];
		}
	}

	while (firstIter < size1)
	{
		res[resSize++] = arr1[firstIter++];
	}

	while (secondIter < size2)
	{
		res[resSize++] = arr2[secondIter++];
	}
}

void print(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
}

int main()
{
	int arr1[MAX_SIZE] = { 1,3,6,7,8 };
	int size1 = 5;

	int arr2[MAX_SIZE] = { 2,4,5,7,9,11,12 };
	int size2 = 7;

	int arr3[MAX_SIZE]{};
	int size3 = 0;

	merge(arr1, size1, arr2, size2, arr3, size3);

	print(arr3, size3);
	return 0;
}
