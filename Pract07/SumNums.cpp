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
}

void sumNums(const char num1[],const char num2[], int size, int K, char res[])
{
	int carry = 0;
	int pos = size - 1;
	//from rightToLeft
	for (int i = size - 1; i >= 0; i--)
	{
		int dig1 = symbToNum(num1[i]);
		int dig2 = symbToNum(num2[i]);
		res[pos--] = numToSymb((dig1 + dig2 + carry) % K);
		carry = (dig1 + dig2 + carry) / K;
	}
	if(carry)
	{
		res[0] = numToSymb(carry);
	}
}

int main() {
	const int size = 4;
	char arr1[size] = { '7', '2', '3', '4' }; // 7234
	char arr2[size] = { '4', '3', '2', '1' }; // 4321
	int K = 10;

	const int res_size = size + 1; // Result can be one digit longer
	char res[res_size] = {};

	sumNums(arr1, arr2, size, K, res);

	std::cout << "Result: ";
	for (int i = 0; i < res_size; ++i) {
		std::cout << res[i];
	}
	std::cout << std::endl;
}
