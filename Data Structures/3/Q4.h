#pragma once
#include <iostream>

using namespace std;

template<class T>

class MyVector {
private:
    T* arr;
    int size;
    int capacity;
public:
    MyVector() {
        size = 0;
        capacity = 7;
        arr = new T[capacity];
        
    }
    ~MyVector() {
        delete[] arr;
    }
    void addElement(T element) {
        if (size == capacity) {
            capacity = capacity * 2;
            T* newarr = new T[capacity];
            for (int i = 0; i < size; i++) {
                newarr[i] = arr[i];
            }
            delete[] arr;
            arr = newarr;
        }
        arr[size++] = element;
    }
    T getElement(int i) {
        if (i < 0 || i >= size) {
            cout << "Out of bound index" << endl;
            return 0;
        }
        else {
            return arr[i];
        }
    }
    void changeElement(T newval, int i) {
        if (i < 0 || i >= size) {
            cout << "Out of bound index" << endl;
        }
        else {
            arr[i] = newval;
        }
    }
    void removeElement(int i) {
        if (i < 0 || i >= size) {
            cout << "Out of bound index" << endl;
        }
        else {
            for (int j = i; j < size - 1; ++j) {
                arr[j] = arr[j + 1];
            }
            size = size - 1;
        }
    }
};
