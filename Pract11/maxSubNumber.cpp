#include <iostream>

unsigned long long digitCount(unsigned long long num)
{
	if (num == 0)
	{
		return 1;
	}

	unsigned long long counter = 0;

	while (num != 0)
	{
		num /= 10;
		counter++;
	}
	
	return counter;
}

unsigned long long getCurrentSubNumber(const unsigned long long* arr, long long begin, int k)
{
	unsigned long long result = 0;

	for (unsigned long long i = begin; i < begin + k; i++)
	{
		result *= 10;
		result += arr[i];
	}

	return result;
}

unsigned long long maxSubNum(unsigned long long num, int k)
{
	unsigned long long size = digitCount(num);

	unsigned long long* arr = new unsigned long long[size] {};

	for (long long i = size - 1; i >= 0; i--)
	{
		arr[i] = num % 10;
		num /= 10;
	}

	unsigned long long maxNum = 0;

	for (long long i = 0; i < size - k + 1; i++)
	{
		unsigned long long curr = getCurrentSubNumber(arr, i, k);

		if (maxNum < curr)
		{
			maxNum = curr;
		}
	}

	delete[] arr;

	return maxNum;
}

int main()
{
	unsigned long long num = 1234567;

	std::cout << maxSubNum(num, 3);
	return 0;
}
