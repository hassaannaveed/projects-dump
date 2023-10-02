/*
Hassaan Naveed
22i-0557
*/

void sortd(int array[], int size) {
	for (int j = 0; j < (size - 1); ++j) {

		int swapped = 0;

		for (int i = 0; i < (size - j - 1); ++i) {

			if (array[i] < array[i + 1]) {

				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}

void sorta(int array[], int size) {
	for (int j = 0; j < (size - 1); ++j) {

		int swapped = 0;

		for (int i = 0; i < (size - j - 1); ++i) {

			if (array[i] > array[i + 1]) {

				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;

				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
	}
}
void reverse(int* x, int* y) {
	int z;
	z = *x;
	*x = *y;
	*y = z;
}

char* removeArr(char* c1, char* c2) {
	int size = 1;
	while (*(c2++) != '/0') {
		size++;
	}
}

int* addNum(int* arr, int size, int num1, int num2) {
	arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}
	sorta(arr, size);
	for (int i = 0; i < size; i++) {
		if (*(arr + i) == num2) {
			*(arr + i) = num1;
		}

	}
	return arr;
}



int returnSum(int* arr, int size, int num) {
	arr = new int[size];
	bool sumeq = false;
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < (size - 1); j++) {
			if (i == j) {
				continue;
			}
			if ((*(arr + i) + *(arr + j)) == num) {
				sumeq = true;
			}
		}
		if (sumeq == true) {
			return num;
		}
		else {
			return (-1);
		}
	}

}

int sortNreverse(int* arr, int size) {
	arr = new int[size];
	int sum = 0;
	for (int i = 0; i < size; i++) {
		cin >> *(arr + i);
	}
	sortd(arr, size);
	for (int i = 0; i < size; i++) {
		cout << "Value is: " << *(arr + i) << " ";
		cout << "Adress is: " << (arr + i) << endl;
	}
	for (int i = 0; i < size; i++) {
		sum = sum + *(arr + i);
	}
	return sum;
}