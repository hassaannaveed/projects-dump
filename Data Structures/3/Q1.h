#pragma once
#include <iostream>

using namespace std;

int min(int* a, int size) {
    int min = a[0];
    for (int i = 1; i < size; i++) {
        if (min > a[i]) {
            min = a[i];
        }
    }
    return min;
}

int max(int* a, int size) {
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (max < a[i]) {
            max = a[i];
        }
    }
    return max;
}
