#include <iostream>

void insertionSort(int* arr, int size)
{
    for (int i = 0; i < size - 1; ++i) {
        for(int j = i + 1; j >= 0 && (arr[j] < arr[j - 1]); --j) {
            std::swap(arr[j], arr[j - 1]);
        }
    }
}

int main() {
    const int size = 8;
    int arr[size] {3, 1, 8, 9, -5, 0, 2, 1};
    insertionSort(arr, size);
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}