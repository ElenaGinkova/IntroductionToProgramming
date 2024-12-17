#include <iostream>
#include <fstream>

const int MAX_NAME_LEN = 10;

struct Person
{
	char name[MAX_NAME_LEN + 1]{};
	int age = 0;
};

void saveStructToFile(std::ofstream& ofs, const Person& person)
{
	//we know the size name. Every time it will be the same.
	ofs << person.name << ' ' << person.age; 
}

void saveStructToFile(const char* filePath, const Person& person)
{
	if (!filePath)
	{
		return;
	}

	std::ofstream ofs(filePath);

	if (!ofs.is_open())
	{
		return;
	}

	saveStructToFile(ofs, person);

	ofs.close();
}


Person readStructFromFile(std::ifstream& ifs)
{
	Person toReturn;

	ifs >> toReturn.name >> toReturn.age;

	return toReturn;
}

Person readStructFromFile(const char* filePath)
{
	if (!filePath)
	{
		return {};
	}

	std::ifstream ifs(filePath);

	if (!ifs.is_open())
	{
		return {};
	}

	Person toReturn = readStructFromFile(ifs);

	ifs.close();

	return toReturn;
}

void saveStructToFileWithSeparator(std::ofstream& ofs, const Person& person, char sep)
{
	ofs << person.name << sep << ' ' << person.age;
}

void saveStructToFileWithSeparator(const char* filePath, const Person& person, char sep)
{
	if (!filePath)
	{
		return;
	}

	std::ofstream ofs(filePath);

	if (!ofs.is_open())
	{
		return;
	}

	saveStructToFileWithSeparator(ofs, person, sep);

	ofs.close();
}

Person readStructFromFileWithSeparator(std::ifstream& ifs, char sep)
{
	Person toReturn;

	ifs.getline(toReturn.name, MAX_NAME_LEN, sep);
	ifs.ignore();
	ifs >> toReturn.age;

	return toReturn;
}

Person readStructFromFileWithSeparator(const char* filePath, char sep)
{
	if (!filePath)
	{
		return {};
	}

	std::ifstream ifs(filePath);

	if (!ifs.is_open())
	{
		return {};
	}

	Person toReturn = readStructFromFileWithSeparator(ifs, sep);

	ifs.close();

	return toReturn;
}

void saveStructArrToFileWithSeparator(const char* filePath, const Person* arr, size_t size, char sep)
{
	if (!filePath || !arr)
	{
		return;
	}

	std::ofstream ofs(filePath);

	if (!ofs.is_open())
	{
		return;
	}

	ofs << size << '\n';

	for (int i = 0; i < size; i++)
	{
		saveStructToFileWithSeparator(ofs, arr[i], sep);
		ofs << '\n';
	}

	ofs.close();
}

Person* readDynamicStructArrFromFileWithSeparator(const char* filePath, size_t& size, char sep)
{
	if (!filePath)
	{
		return nullptr;
	}

	std::ifstream ifs(filePath);

	if (!ifs.is_open())
	{
		return nullptr;
	}

	ifs >> size;
	ifs.ignore();

	Person* toReturn = new Person[size]{};

	for (int i = 0; i < size; i++)
	{
		
		toReturn[i] = readStructFromFileWithSeparator(ifs, sep);
		ifs.ignore();
	}

	ifs.close();

	return toReturn;
}

int main()
{
	size_t size = 0;
	Person* arr = readDynamicStructArrFromFileWithSeparator("demo.txt", size, ',');

	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i].name << ' ' << arr[i].age << '\n';
	}

	delete[] arr;
	return 0;
}
