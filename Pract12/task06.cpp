bool binarySearch(const int* arr, int left, int right, int num) {
    // Базов случай: ако индексите се пресекат, числото не е намерено
    if (left > right) {
        return false;
    }

    int mid = left + (right - left) / 2;

    if (arr[mid] == num) {
        return true;
    }

    if (arr[mid] > num) return binarySearch(arr, left, mid - 1, num);
    return binarySearch(arr, mid + 1, right, num);
}
