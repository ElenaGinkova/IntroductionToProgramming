#include <iostream>
const int MAX_SIZE = 100;
void print(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << ' ';
    }
}
bool contains(int element, const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return true;
        }
    }
    return false;
}
void intersection(const int arr1[], int size1, const int arr2[], int size2)
{
    int helper[MAX_SIZE]{};
    int size = 0;

    for (int i = 0; i < size1; i++)
    {
        if (contains(arr1[i], arr2, size2) && !contains(arr1[i], helper, size))
        {
            helper[size] = arr1[i];
            size++;
        }
    }
    print(helper, size);
}

int main()
{
    int arr1[] = {9, 9, 8, 7};
    int arr2[] = {8, 8, 7, 9};
    intersection(arr1, 4, arr2, 4);
}
