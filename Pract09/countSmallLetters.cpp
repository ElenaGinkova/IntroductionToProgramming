#include <iostream>

void printCounter(const int* counter, int size)
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

	const int LETTERS_COUNT = 26;
	int counter[LETTERS_COUNT]{};

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

	printCounter(counter, LETTERS_COUNT);
}

int main()
{
	char str[] = "strawberry";
	countSmallLetters(str);
}
