#include <iostream>
void productArrays(const int arr1[], int size1, const int arr2[], int size2, int arr3[])//reading form arr1 and arr2, filling arr3
{
    int size3 = 0;
    int minSize = 0;
    if (size1 > size2)
    {
        size3 = size1;
        minSize = size2;
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
