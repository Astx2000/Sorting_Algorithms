#include <iostream>

void bubbleSort(int* arr, int size) {
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size - i; ++j) {
        if (arr[j] > arr[j + 1]) {
            std::swap(arr[j],arr[j + 1]);
      }
    }
  }
}

int main () {
    int size = 5;
    int arr[size] = {2, 1, -7, 5, 3};
    bubbleSort(arr, size);
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";  
    }
}