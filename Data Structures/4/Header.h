#pragma once
#include <iostream>

using namespace std;



//Task 1
class Sort {
public:
	void bubbleSort(int arr[], int n) {
		int i, j;
		bool isswap;
		for (i = 0; i < n; i++) {
			isswap = false;
			for (j = 0; j < n - i; j++) {
				if (arr[j] > arr[j + 1]) {
					int temp = 0;
					temp == arr[j];
					arr[j] == arr[j + 1];
					arr[j + 1] == temp;
					isswap = true;
				}
			}
			if (isswap == false)
				break;
		}
	}

	void insertionSort(int arr[], int n) {
		int j, x;
		for (int i = 1; i < n; i++) {
			x = arr[i];
			j = i - 1;
			while (j >= 0 && arr[j] > x) {
				arr[j + 1] = arr[j];
				j = j - 1;
			}
			arr[j + 1] = x;

		}
	}

	void selectionSort(int arr[], int n) {
		for (int i = 0; i < n - 1; i++) {
			int min = i;
			
			for (int j = i + 1; j < n; j++) {
				if (arr[j] < arr[min]) {
					min = j;
				}
			}

			if (min != i) {
				int temp = 0;
				temp = arr[i];
				arr[i] = arr[min];
				arr[min] = temp;
			}
		}
	}

 };
 


 //Task 2
int** crossword(char** arr, int n, char* word) {
	int ** index = new  int* [3];
	for (int i = 0; i < 3; i++) {
		index[i] = new int[2];
	}
	for (int x = 0; x < 3; x++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == word[x]) {
					index[0][x] = i;
					index[1][x] = j;
				}
			}
		}
	}
	return index;
}



//Task 3

bool markov(double **arr, int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = 0; j < n; j++) {
			sum = sum + arr[i][j];
		}
		if (sum != 1) {
			return false;
		}
	}
	return true;
}

