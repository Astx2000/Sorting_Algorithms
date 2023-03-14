#include <iostream>

void merge (int* arr, int start, int mid, int end) {
	int temp[end - start + 1];
	int left_index = start;
	int right_index = mid + 1;
	int temp_index = 0;
	while(left_index <= mid && right_index <= end) {
		if(arr[left_index] <= arr[right_index]) {
			temp[temp_index] = arr[left_index];
			left_index++;
			temp_index++;
		} else {
			temp[temp_index] = arr[right_index];
			right_index++;
			temp_index++;
		}
	}
	while(left_index <= mid) {
		temp[temp_index] = arr[left_index];
		left_index++;
		temp_index++;
	}

	while(right_index <= end) {
		temp[temp_index] = arr[right_index];
		right_index++;
		temp_index++;
	}

	for(int i = start; i <= end; i++) {
		arr[i] = temp[i - start];
	}
}

void MergeSort (int* arr, int start, int end) {
    if (start < end) {
        int mid = start + (end - start) / 2;
        MergeSort (arr, start, mid);
        MergeSort (arr, mid + 1, end);
        merge (arr, start, mid, end);
    }
}

int main() {
    const int size = 3;
    int arr[size] {3, 2, 1};
    MergeSort(arr, 0, size);
    for(int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}