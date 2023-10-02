#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>
#include "Header.h"
using namespace std;

int main()
{
    int choice = 0;
    cout << "Welcome to Library management system" << endl;
    cout << "Enter the prefered choice" << endl;
    cout << "1. Login "<<endl;
    cout << "2. Register " << endl;
    cin >> choice;
    while (choice != 1 && choice != 2) {
        cout << "Enter valid input" << endl;
        cin >> choice;
    }
    if (choice == 1) {
        User u;
        u.loginUser();
    }
    else {
        User u;
        u.registerUser();
    }
    return 0;
}
