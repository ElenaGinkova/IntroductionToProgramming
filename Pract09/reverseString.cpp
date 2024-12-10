#include <iostream>

void swap(char& a, char& b)
{
	char temp = a;
	a = b;
	b = temp;
}

void reverseString(char* str)
{
	if (!str)
	{
		return;
	}

	char* l = str;
	char* r = str;

	while (*r != '\0')
	{
		r++;
	}

	r--;

	while (l <= r)
	{
		swap(*l, *r);
		l++;
		r--;
	}
}

int main()
{
	char str[] = "zdr";
	std::cout << str << ' ';

	reverseString(str);
	std::cout << str;

}
