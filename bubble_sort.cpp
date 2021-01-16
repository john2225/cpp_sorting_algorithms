/* Bubble sort is simplest sorting algorithm that works by repeatedly swapping
adjacent elements if they are in wrong order */
#include <iostream>

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}
// A function to implement bubble sort
void bubble_sort(int* arr, int n) {
	bool swapped;
	for(int i = 0; i < n - 1; ++i) {
// Last i elements are already in place 
		swapped = false;
		for(int j = 0; j < n - 1 -i; ++j) {
			if(arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
				swapped = true;
			}
		}
        	if(swapped == false) {
           		break;
       		}
	}
}

void print_array(int* arr, int size) {
	for(int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main() {
	int arr[] = {-7, 9, 11, 2, 42, -5};
	int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Given array is: \n";
    print_array(arr, n);
	bubble_sort(arr, n);
	std::cout << "Sorted array: \n";
	print_array(arr, n);
	return 0;
}
