#include <iostream>
#include "Header.h"

int main()
{
    char a = 'a';
    char b = 'B';
    int c = 12;
    int d = 15;
    double e = 44.2;
    double f = 33.1;
    int arr1[6] = { 1,2,3,4,5,6 };
    int arr2[10] = { 1,2,3,4,5,6,7,8,9,10};
    int resultant[16];
    cout << "Smaller of 'a' and 'B':" << smaller(a, b) << endl;
    cout << "Smaller of 12 and 15:" << smaller(c, d) << endl;
    cout << "Smaller of 44.2 and 33.1:" << smaller(e, f) << endl;
    cout << "Smaller of 5, 8 and 15:" << smaller(5, 8, 15) << endl;
    cout << "Same elements in the arrays are: " << endl;
    same(arr1, arr2, 6, 10);
    cout << "Concatenate: " << endl;
    concatenate(arr1, arr2, 6, 10, resultant);
    for (int i = 0; i < 16; i++) {
        cout << resultant[i] << endl;
    }

    return 0;

}
