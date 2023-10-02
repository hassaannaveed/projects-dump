#pragma once
#include <iostream>
#include <string>
using namespace std;

char** words_to_sentence(int row, int col) {
	char** sentence = new char* [row];
	for (int i = 0; i < row; i++) {
		sentence[i] = new char[col];
	}
	cout << "Enter the words: " << endl;
	for (int i = 0; i < row; i++) {
		cin >> sentence[i];
	}
	
	return sentence;
}
