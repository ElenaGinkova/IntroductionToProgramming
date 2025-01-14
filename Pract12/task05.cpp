bool contains(const int* arr, int size, int num) {
    if (size == 0) {
        return false;
    }

    if (arr[0] == num) {
        return true;
    }
    
    return contains(arr + 1, size - 1, num);
}
