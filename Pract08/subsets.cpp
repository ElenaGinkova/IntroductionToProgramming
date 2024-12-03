#include <iostream>

void printSubset(const int arr[], int size, uint32_t subsetNum)
{
	std::cout << '[' <<' ';

	for (int i = 0; i < size; i++)
	{
		if (subsetNum & 1)
		{
			std::cout << arr[i]<<' ';
		}

		subsetNum /= 2; // or subsetNum = subsetNum >> 1;
	}
	std::cout << ']' << '\n';
}

void printSubsets(const int arr[], int size)
{
	uint32_t subsetsCount = 1 << size;

	for (int i = 0; i < subsetsCount; i++)
	{
		printSubset(arr, size, i);
	}
}


int main()
{
	int arr[] = { 1,2,3 };
	printSubsets(arr, 3);
	return 0;
}
