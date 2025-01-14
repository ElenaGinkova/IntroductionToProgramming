bool isMonotonicIncreasing(const int* arr, int n) {
    // Дъно на рекурсията: ако има само един или никакви елементи
    if (n <= 1) {
        return true;
    }

    if (arr[n - 1] < arr[n - 2]) {
        return false;
    }
  
    return isMonotonicIncreasing(arr, n - 1);
}
