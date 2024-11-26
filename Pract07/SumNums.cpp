#include <iostream>

int symbToNum(char ch)
{
	if (ch >= '0' && ch <= '9')
	{
		return ch - '0';
	}
	return 10 + (ch - 'A');
}

char numToSymb(int num)
{
	if (num >= 0 && num <= 9)
	{
		return num + '0';
	}
	return (num - 10) + 'A';
}

void sumNumArrays(const char num1[], const char num2[], int size, int K, char res[])
{
	int carry = 0;
	//from rightToLeft
	for (int i = size - 1; i >= 0; i--)
	{
		int dig1 = symbToNum(num1[i]);
		int dig2 = symbToNum(num2[i]);
		int sum = dig1 + dig2 + carry;
		//K - 1 is the last valid value of digit that can be stored in one cell as a single symbol
		res[i + 1] = numToSymb((sum) % K);
		//sum is bigger than K and it can't fit in the cell(cant be represented by only one symbol)
		//so carry the rest to the next!!!
		carry = (sum) / K;
	}
	if (carry)
	{
		res[0] = numToSymb(carry);
	}
}

int main() {
	const int size = 2;
	char arr1[size] = { '1', '1'}; //11
	char arr2[size] = { '1', '0'}; //10
	int K = 2;

	const int res_size = size + 1; //Result can be one digit longer!!!
	char res[res_size] = {};

	sumNumArrays(arr1, arr2, size, K, res);

	std::cout << "Result: ";
	for (int i = 0; i < res_size; ++i) {
		std::cout << res[i];
	}
	std::cout << std::endl;
}
