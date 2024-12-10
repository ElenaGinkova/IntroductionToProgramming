#include <iostream>

void printCounter(const int* counter, int size = 26)
{
	if (!counter)
	{
		return;
	}

	for (int i = 0; i < size; i++)
	{
		char curr = 'a' + i;
		std::cout << curr << " -> " << counter[i] << '\n';
	}
}

void countSmallLetters(const char* str)
{
	if (!str)
	{
		return;
	}

	int counter[26]{};

	while (*str != '\0')
	{
		char curr = *str;
		
		if (curr >= 'a' && curr <= 'z')
		{
			int idx = curr - 'a';
			counter[idx]++;
		}
		str++;
	}

	printCounter(counter, 26);
}

int main()
{
	char str[] = "strawberry";
	countSmallLetters(str);
}
