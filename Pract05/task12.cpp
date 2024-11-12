#include <iostream>
bool areAllSymbUnique(const int arr[], int size) // int* arr 
{
    bool histogram[MAX_NUM]{ false };//[0,1,..,20]
    for (int i = 0; i < size; i++)
    {
        int index = arr[i];//the number corresponds to the index
        if(histogram[index])//we have already seen the number
        {
            return false;
        }
        histogram[index] = true;
    }
    return true;
}

int main()
{
    int arr[] = {1, 2, 2};
    int arr2[] = { 1,2,3 };
    std::cout << areAllSymbUnique(arr, 3);
    std::cout << areAllSymbUnique(arr2, 3);
}
