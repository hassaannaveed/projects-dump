#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    //Task 1
    cout<<"Enter the size of the first array: ";
    int x;
    cin >> x;
    int* arrr1 = new int[x];
    cout << "Enter the values of the first array: ";
    for (int i = 0; i < x; i++) {
		cin >> arrr1[i];
	}
    cout << "Enter the size of the second array: ";
    int y;
    cin >> y;
    int* arrr2 = new int[y];
    cout << "Enter the values of the second array: ";
    for (int i = 0; i < y; i++) {
        cin>>arrr2[i];
    }
    cout << "Enter the size of the third array: ";
    int z;
    cin >> z;
    int* arrr3 = new int[z];
    cout << "Enter the values of the second array: ";
    for (int i = 0; i < z; i++) {
        cin >> arrr3[i];
    }
    Sort s;
    s.insertionSort(arrr1, x);
    for (int i = 0; i < x; i++) {
		cout << arrr1[i] << " ";
	}
    cout << endl;
    s.selectionSort(arrr2, y);
    for (int i = 0; i < y; i++) {
		cout << arrr2[i] << " ";
	}
    cout << endl;
    s.bubbleSort(arrr3, z);
    for (int i = 0; i < z; i++) {
        cout<<arrr3[i]<<" ";
    }
    cout << endl;


    //Task 2
    int m;
    cout << "Enter the size of the matrix: ";
    cin >> m;
    char** arr2 = new  char* [m];
    for (int i = 0; i < m; i++) {
        arr2[i] = new char[m];
    }
    cout << "Enter the values of the matrix: " << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++)
            cin >> arr2[i][j];
    }
    char* word = new char[3];
    cout << "Enter the 3-letter word: " << endl;
    for (int i = 0; i < 3; i++) {
            cin >> word[i];
    }
    
    for (int k = 0; k < 2; k++) {
        for (int l = 0; l < 3; l++) {
            cout<<crossword(arr2, m, word)[k][l]<<endl;
        }
	}

    //Task 3
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    double** arr3 = new double* [n];
    for (int i = 0; i < n; i++) {
		arr3[i] = new double[n];
	}
    cout << "Enter the values of the matrix: "<<endl;
    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
			cin >> arr3[i][j];
    }
    cout<< "Is it a Markov Matrix?: ";
    if (markov(arr3, n) == true){
        cout << "Yes" << endl;
    }
	else{
        cout << "No" << endl;
    }

    return 0;
}
