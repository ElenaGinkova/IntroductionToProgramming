#include <iostream>

const int MAX_SIZE = 100;

void countArr(const int arr[], int size, int counter[])
{
	for (int i = 0; i < size; i++)
	{
		int curr = arr[i];
		counter[curr]++;
	}
}

bool isPermutation(const int arr1[], int size1, const int arr2[], int size2)
{
	const int DIGITS_COUNT = 10;
	int counter1[DIGITS_COUNT]{};
	int counter2[DIGITS_COUNT]{};

	countArr(arr1, size1, counter1);
	countArr(arr2, size2, counter2);

	for (int i = 0; i < DIGITS_COUNT; i++)
	{
		if (counter1[i] != counter2[i])
		{
			return false;
		}
	}

	return true;
}

int main()
{
	return 0;
}
