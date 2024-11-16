#include <iostream>
void productArrays(const int arr1[], int size1, const int arr2[], int size2, int arr3[])//reading form arr1 and arr2, filling arr3
{
    int size3 = 0;
    int minSize = 0;
    if (size1 > size2)
    {
        size3 = size1;//max
        minSize = size2;//min
    }
    else {
        size3 = size2;
        minSize = size1;
    }

    for (int i = 0; i < minSize; i++)//product the arrays until reaching the end of the shorter one
    {
        arr3[i] = arr1[i] * arr2[i];
    }
    for (int i = minSize; i < size3; i++)//fill the left elements
    {
        if (size1 == size3)
        {
            arr3[i] = arr1[i];
        }
        else
        {
            arr3[i] = arr2[i];
        }
    }

}

int findMax(const int a, const int b)
{
    return a > b ? a : b;
}

int main()
{
    const int MAX_CAPACITY = 100;
    int arr1Size = 0;
    int arr2Size = 0;
    int arr1[MAX_CAPACITY]{};
    int arr2[MAX_CAPACITY]{};
    int arr3[MAX_CAPACITY]{};
    std::cin >> arr1Size;
    for (int i = 0; i < arr1Size; i++)
    {
        std::cin >> arr1[i];
    }
    std::cin >> arr2Size;
    for (int i = 0; i < arr2Size; i++)
    {
        std::cin >> arr2[i];
    }

    productArrays(arr1, arr1Size, arr2, arr2Size, arr3);
    for (int i = 0; i < findMax(arr1Size, arr2Size); i++)
    {
        std::cout << arr3[i] << ' ';
    }

}
