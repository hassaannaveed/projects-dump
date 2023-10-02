/*
Hassaan Naveed
22i-0557
SE-F
*/

#include <iostream>
#include <vector>
using namespace std;

class CarPark {
    string regNo;
    string arrival;
    int slot;
public:
    CarPark() {
        regNo = "";
        arrival = "";
        slot = -1;
    }
    CarPark(string regNo, string arrival, int slot) {
		this->regNo = regNo;
		this->arrival = arrival;
		this->slot = slot;
	}
    string getRegNo() const {
		return regNo;
	}
    void setRegNo(string regNo) {
		this->regNo = regNo;
	}
    string getArrival() const {
		return arrival;
	}
    void setArrival(string arrival) {
		this->arrival = arrival;
	}
    int getSlot() const {
		return slot;
	}
    void setSlot(int slot) {
		this->slot = slot;
	}
};

vector<CarPark> cars;

struct func {
    void newCar() {
        string r, a;
        int s;
        cout << "Enter car registration number: ";
        cin >> r;
        cout << "Enter car arrival time: ";
        cin >> a;
        cout << "Enter car slot: ";
        cin >> s;
        CarPark car(r, a, s);
        cars.push_back(car);
        cout << "Car has been parked!" << endl;
    }

    void removeCar() {
        string r;
        cout << "Enter car registration number: ";
        cin >> r;
        for (int i = 0; i < cars.size(); i++) {
            if (cars[i].getRegNo() == r) {
                cars.erase(cars.begin() + i);
                cout << "Car removed!" << endl;
                return;
            }
        }
        cout << "Car not found!" << endl;
        return;
    }

    void updateCar() {
        string r;
        int s;
        cout << "Enter car registration number: ";
        cin >> r;
        for (int i = 0; i < cars.size(); i++) {
            if (cars[i].getRegNo() == r) {
                cout << "Enter new car slot: ";
                cin >> s;
                cars[i].setSlot(s);
                cout << "Car slot updated successfully!"<<endl;
                return;
            }
        }
        cout << "Car not found!" << endl;
    }

    void totalParked() {
        cout << "Total cars parked right now: " << cars.size() << endl;
    }

    void removeAll() {
        cars.clear();
        cout << "All cars have been removed!" << endl;
    }

    void search(string r) {
        for (int i = 0; i < cars.size(); i++) {
            if (cars[i].getRegNo() == r) {
                cout << "Car found at slot: " << cars[i].getSlot() << endl;
                return;
            }
        }
        cout << "Car not found!" << endl;
    }

    void menu() {
        cout << "Welcome to the Car Parking System" << endl;
        cout << "----------------------------------" << endl;
        cout << "Chose the correct option:" << endl;
        cout << "1. Park a new car" << endl;
        cout << "2. Remove a car" << endl;
        cout << "3. Update a car slot" << endl;
        cout << "4. Print total number of parked cars" << endl;
        cout << "5. Remove all parked cars" << endl;
        cout << "6. Search car by registration number" << endl;
        cout << "7. Exit" << endl;
        cout << "Your choice: ";
    }
};

int main()
{
    func f;
    int ch;
    f.menu();
    cin >> ch;
    while (ch < 1 || ch>7) {
		cout << "Enter a valid choice: ";
		cin >> ch;
	}
    if (ch == 1) {
        f.newCar();
    }
    else if (ch == 2) {
        f.removeCar();
	}
	else if (ch == 3) {
		f.updateCar();
	}
	else if (ch == 4) {
		f.totalParked();
	}
	else if (ch == 5) {
		f.removeAll();
	}
	else if (ch == 6) {
		string r;
        cout << "Enter car registration number: ";
        cin >> r;
		f.search(r);
	}
	else if (ch == 7) {
		cout << "Exiting..." << endl;
		return 0;
	}
    return 0;
}
