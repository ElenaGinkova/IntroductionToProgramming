#include <iostream>

unsigned charToInt(char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return ch - '0';
	}
	else if (ch >= 'A' && ch <= 'F')
	{
		return 10 + ch - 'A';
	}

	return -1;
}

unsigned kBaseToDecimal(const char kBaseNum[], unsigned size, unsigned base)
{
	unsigned res = 0;
	unsigned mult = 1;

	for (int i = size - 1; i >= 0; i--)
	{
		unsigned currNum = charToInt(kBaseNum[i]);
		res += currNum * mult;
		mult *= base;
	}

	return res;
}

void swap(char& a, char& b)
{
	char tmp = a;
	a = b;
	b = tmp;
}

void reverse(char arr[], unsigned size)
{
	unsigned l = 0;
	unsigned r = size - 1;

	while (l <= r)
	{
		swap(arr[l], arr[r]);
		l++;
		r--;
	}
}

char intToChar(int num)
{
	if (num >= 0 && num <= 9)
	{
		return '0' + num;
	}
	else if (num >= 10 && num <= 15)
	{
		return 'A' + num - 10;
	}
}

void decimalToKBase(unsigned num, char kBase[], unsigned& size, unsigned base)
{
	if (num == 0)
	{
		kBase[0] = '0';
		size = 1;
		return;
	}
	
	size = 0;

	while (num != 0)
	{
		char curr = intToChar(num % base);
		kBase[size++] = curr;
		num /= base;
	}

	reverse(kBase, size);
}

int main()
{
	char num[3] = { '6', 'B', '6' };
	std::cout << kBaseToDecimal(num, 3, 16)<<' ';

	char num2[20]{};
	unsigned size = 0;

	decimalToKBase(45, num2, size, 2);

	for (unsigned i = 0; i < size; i++)
	{
		std::cout << num2[i];
	}
	return 0;
}
