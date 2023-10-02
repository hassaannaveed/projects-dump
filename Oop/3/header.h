#include <iostream>
using namespace std;
int plane(int **seat) {
	int cl;
	int ds;
	cout<<"Enter the ticket type (1 for first class, 2 for business class and 3 for economy): ";
	cin>>cl;
	cout<<"Enter the desired seat of range 1 to 6: ";
	cin>>ds;
	for(int i = 0; i<13;i++) {
		for (int j=0;j<8;j++) {
			seat[i][j]=0;
		}
	}
	if (cl == 1) {
		for(int i=0;i<2;i++) {
				if (seat[i][ds]!=3){
					seat[i][ds]=3;
					cout<<"Seat Reserved!"<<endl;
					return 0;
				}
				else {
					cout<<"Seat is booked in your desired colum"<<endl;
					return 0;
				}
			
		}
	}
	else if (cl == 2) {
		for(int i=2;i<7;i++) {
				if (seat[i][ds]!=3){
					seat[i][ds]=3;
					cout<<"Seat Reserved!"<<endl;
					return 0;
				}
				else {
					cout<<"Seat is booked in your desired colum"<<endl;
					return 0;
				}
			
		}
	}
	else if (cl == 3) {
		for(int i=8;i<13;i++) {
				if (seat[i][ds]!=3){
					seat[i][ds]=3;
					cout<<"Seat Reserved!"<<endl;
					return 0;
				}
				else {
					cout<<"Seat is booked in your desired colum"<<endl;
					return 0;
				}
			
		}
	}
}



bool PrimeNumber (int n, int i =2) {
	 if (n <= 2) {
	 	if (n == 2) {
	 		return true;
		 }
		 else {
		 	return false;
		 }
	 }
	if (n % i == 0) {
		return false;
	} 
	if (i * i > n) {
		return true;
	}
    return PrimeNumber(n, i + 1);
}



int* ArraySorting(int* array, int n) {
	if (n == 1)
        return 0;
  
    int j = 0;
    for (int i=0; i<n-1; i++)
        if (array[i] > array[i+1]){
            int temp = array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
            j++;
        }

      if (j==0)
           return 0;
    ArraySorting(array, n-1);
}


int** Product (int ** matrix1, int ** matrix2, int rowM1, int colM1, int rowM2, int colM2) {
	return 0;
}


int** Upper_half (int** Array, int rows, int columns) {
	return 0;
}


int calDiagonal(int **p, int sizeA, int sizeB) {
	return 0;
}


char* kWOrdsReverser (char* ptr, int k, int n) {
	return 0;
}


int findWordLocation(char* sentence, char* word) {
	return 0;
}


























