#include <iostream>

const int MAX_SIZE = 100;

void removeElement(int arr[], int& size, int pos)
{
	for (int i = pos; i < size - 1; i++)
	{
		arr[i] = arr[i + 1];
	}

	arr[size - 1] = 0;

	--size;
}

void addElement(int arr[], int& size, int pos, int el)
{
	for (int i = size; i >= pos; i--)
	{
		arr[i] = arr[i - 1];
	}

	arr[pos] = el;
	++size;
}

void print(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
}

int main()
{
	int arr[MAX_SIZE] = { 1,2,3,4,5 };
	int size = 5;
	print(arr, size);

	addElement(arr, size, 1, 100);
	print(arr, size);
	return 0;
}
