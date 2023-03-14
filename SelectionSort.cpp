#include <iostream>

void selectionSort(int* arr, int size)
{
	int i, j, min_idx;
	for (i = 0; i < size; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		if (arr[j] < arr[min_idx]) {
      min_idx = j;
    }
		std::swap(arr[min_idx], arr[i]);
	}
}
int main () {
    int size = 5;
    int arr[size] = {2, 0, -7, 5, 3};
    selectionSort(arr, size);
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";  
    }
}
