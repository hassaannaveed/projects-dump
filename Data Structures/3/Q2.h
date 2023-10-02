#pragma once
#include <iostream>
#include <string>

using namespace std;

int length(string str) {
	int i = 0;
	while (str[i] != '\0') {
		i++;
	}
	return i;
}

void search(string str, char c, int size) {
	for (int i = 0; i < size; i++) {
		if (c == str[i]) {
			for (int j = i; j < size; j++) {
				cout << str[j];
			}
			break;
		}
	}
}