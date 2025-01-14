#include <iostream>

int arrDiff(const int* arr1,const int* arr2, int n, int index = 0, int count1 = 0, int count2 = 0)
{
    // Base
    if (index == n)
    {
        return count1 - count2;
    }

    // Increment
    if (arr1[index] > arr2[index])
    {
        count1++;
    } else if (arr2[index] > arr1[index])
    {
        count2++;
    }

    // Go to next element
    return arrDiff(arr1, arr2, n, index + 1, count1, count2);
}

int main()
{
    int arr1[] = {1, 4, 6, 3, 5};
    int arr2[] = {5, 4, 2, 1, 3};
    int n = 5;
    int result = arrDiff(arr1, arr2, n);
    cout << result << endl;
    return 0;
}
