#include <iostream>
const int MAX_NUM = 21;
const int MAX_SIZE = 100;

bool areAllSymbUnique(const int arr[], int size) // int* arr 
{
    bool histogram[MAX_NUM]{ false };//[0,1,..,20]
    for (int i = 0; i < size; i++)
    {
        int index = arr[i];//the number corresponds to the index
        if (histogram[index])//we have already seen the number
        {
            return false;
        }
        histogram[index] = true;//mark the last raed number
    }
    return true;
}

int main()
{
    int arr[MAX_SIZE] = { 1, 2, 2 };
    int arr2[MAX_SIZE] = { 1, 2, 3 };
    std::cout << areAllSymbUnique(arr, 3) << std::endl;
    std::cout << areAllSymbUnique(arr2, 3);
}
