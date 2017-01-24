#include <iostream>


int partition(int input[], int low, int high) {
	int pivot = input[low];
	while (low < high) {
		while (low < high && input[high] > pivot)
			--high;
		input[low] = input[high];
		while (low < high && input[low] < pivot)
			++low;
		input[high] = input[low];
	}
	input[low] = pivot;
	return low;
}

void quicksort(int input[], int low, int high) {
	if (low < high) {
		int pivotIndex = partition(input, low, high);
		quicksort(input, low, pivotIndex - 1);
		quicksort(input, pivotIndex + 1, high);
	}
}


int main() {

	int test[] = {
		1, 9, 3, 20, 234, 8, 7, 56
	};
	std::cout << sizeof(test)/sizeof(int) << std::endl;
	quicksort(test, 0, sizeof(test)/sizeof(int) - 1);
	for (int i = 0; i < sizeof(test)/sizeof(int); ++i) {
		std::cout << test[i] << std::endl;
	}


	return 0;	
}
