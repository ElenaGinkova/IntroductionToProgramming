#include <iostream>

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = a;
}

void bubbleSort(int* arr, size_t size)
{
	if (!arr)
	{
		return;
	}

	for (size_t i = 0; i < size - 1; i++)
	{
		bool swapped = false;
		
		for (size_t j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}

		if (!swapped)
		{
			break;
		}
	}
}

void selectionSort(int* arr, size_t size)
{
	if (!arr)
	{
		return;
	}

	for (size_t i = 0; i < size - 1; i++)
	{
		int min_idx = i;

		for (size_t j = i + 1; j < size; j++)
		{
			if (arr[min_idx] > arr[j])
			{
				min_idx = j;
			}
		}

		if (i != min_idx)
		{
			swap(arr[i], arr[min_idx]);
		}
	}
}

void insertionSort(int* arr, size_t size)
{
	if (!arr)
	{
		return;
	}

	for (size_t i = 1; i < size; i++)
	{
		int idx = i - 1;

		while (idx >= 0 && arr[idx] > arr[i])
		{
			arr[idx + 1] = arr[idx];
			idx--;
		}
		arr[++idx] = arr[i];
	}
}
