#include <iostream>
#include <fstream>

const int MAX_SIZE = 10;

void saveArrToFile(const char* filePath, const int* arr, size_t size)
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

	ofs << size<<'\n';

	for (size_t i = 0; i < size; i++)
	{
		ofs << arr[i]<<' ';
	}

	ofs.close();
}

void readStaticArrFromFile(const char* filePath, int* arr, size_t& size)
{
	if (!filePath || !arr)
	{
		return;
	}

	std::ifstream ifs(filePath);

	if (!ifs.is_open())
	{
		return;
	}

	ifs >> size;

	for (size_t i = 0; i < size; i++)
	{
		ifs >> arr[i];
	}

	ifs.close();
}

int* readDynamicArrFromFile(const char* filePath, size_t& size)
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

	int* toReturn = new int[size] {};

	for (size_t i = 0; i < size; i++)
	{
		ifs >> toReturn[i];
	}

	ifs.close();

	return toReturn;
}

void saveMatrixToFile(const char* filePath, const int matrix[][MAX_SIZE], size_t rows, size_t cols)
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

	ofs << rows << ' ' << cols << '\n';

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			ofs << matrix[i][j] << ' ';
		}
		ofs << '\n';
	}

	ofs.close();
}

void readStaticMatrixFromFile(const char* filePath, int matrix[][MAX_SIZE], size_t& rows, size_t& cols)
{
	if (!filePath)
	{
		return;
	}

	std::ifstream ifs(filePath);

	if (!ifs.is_open())
	{
		return;
	}

	ifs >> rows >> cols;

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
		{
			ifs >> matrix[i][j];
		}
	}

	ifs.close();
}

// TODO: Read dynamic matrix

int main()
{

	return 0;
}
