#include <iostream>


size_t myStrLen(const char* str)
{
	if (!str)
	{
		return 0;
	}

	size_t len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	return len;
}

char* insertIntoString(const char* str, const int* positions, size_t size, char toInsert)
{
	if (!str || !positions)
	{
		return nullptr;
	}

	size_t len = myStrLen(str);

	size_t newLen = len + size + 1;
	char* toReturn = new char[newLen]{};
	toReturn[newLen -  1] = '\0';

	int offset = 0;

	for (size_t i = 0; i < size; i++)
	{
		toReturn[positions[i] + offset++] = toInsert; 
		// the positions of the inserted symbols in the new string differentiate from the original string so 
		//we keep track of the current offset to place the symbols on the right position
		//the offset increases with 1 every time we place a new symbol
	}

	char* iter = toReturn;

	while (*str != '\0')
	{
		if (*iter == toInsert)
		{
			iter++;
			continue;
		}

		*iter = *str++;
		iter++;
	}

	return toReturn;
}

int main()
{
	const char* str = "This ame is takin so lon";
	int arr[3] = { 5, 17, 24 };
	char toInsert = 'g';

	char* res = insertIntoString(str, arr, 3, toInsert);

	std::cout << res;

	delete[] res;
	return 0;
}
