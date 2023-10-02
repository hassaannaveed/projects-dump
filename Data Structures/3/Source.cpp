#include <iostream>
#include "Q1.h"
#include "Q2.h"
#include "Q3.h"
#include "Q4.h"
#include <string>

using namespace std;

int main(void) {
    // Task 1
    int size1;
    cout << "Enter the size of the array greater than 10: ";
    cin >> size1;
    while (size1 <= 10) {
        cout << "Enter a valid size: ";
        cin >> size1;
    }
    int* a = new int[size1];
    cout << "Enter the values: ";
    for (int i = 0; i < size1; i++) {
        cout << "Enter value of element " << i << " : ";
        cin >> a[i];
    }
    cout << " Min is: " << min(*a, size1);
    cout << " Max is: " << max(*a, size1);

    //Task 2
    string str;
    char c = 0;
    cout << "Enter the string: ";
    cin >> str;
    int size2 = 0;
    size2 = length(str);
    cout << "The length of the string is: " << size2 << endl;

    cout<<"Enter the character: ";
    cin >> c;

    search(str, c, size2);

    //Task 3
    words_to_sentence(5, 5);

    //Task 4
    MyVector<int> v;
    v.addElement(1);
    v.addElement(2);
    v.addElement(3);
    v.addElement(4);
    v.addElement(5);
    v.removeElement(2);
    cout << v.getElement(2) << endl;
    return 0;
}