/*The selection sort algorithm sorts an array by repeatedly finding the minimum
element from the unsorted part and putting it at the begining */
#include <iostream>

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void selection_sort(int *arr, int n)
{
	int min_index;
	for (int i = 0; i < n - 1; ++i)
	{
		// find the minimum element in unsorted array
		min_index = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
				// swap the minimum element with first element
				swap(&arr[min_index], &arr[i]);
			}
		}
	}
}

// function to print an array
void print_array(int *arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}

int main()
{
	int arr[] = {-7, 9, 11, 2, 42, -5};
	int n = sizeof(arr) / sizeof(arr[0]);
	std::cout << "Given array is: \n";
	print_array(arr, n);
	selection_sort(arr, n);
	std::cout << "Sorted array: \n";
	print_array(arr, n);
	return 0;
}
