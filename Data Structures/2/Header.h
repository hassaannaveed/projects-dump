#pragma once
using namespace std;

template <class T>

//Task 1

T smaller(T first, T second) {
    if (first < second) {
        return first;
    }
    return second;
}

//Task 2

template <class T>
T smaller(T first, T second, T third) {
    if (first < second && second < third) {
        return first;
    }
    if (second < first && first < third) {
        return second;
    }
    if (third < second && second < first) {
        return third;
    }
    return second;
}

//Task 3

template <class T>
void same(T a[], T b[], int size1, int size2) {
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << endl;
            }
        }
    }

}
template <class T>
void concatenate(T a[], T b[], int size1, int size2, T arr[]) {
    for (int i = 0; i < size1; i++) {
        arr[i] = a[i];
    }

    for (int i = size1; i < 16; i++) {
        for (int j = 0; j < size2; j++) {
            int flag = 0;
            for (int k = 0; k < size1; k++) {
                
                if (b[j] == a[k]) {
                    flag = 1;
                }
            }
            if (flag == 0) {
                arr[i] = b[j];
             }
        }
    }

}

//Task 4

template <class T>
class Boxes {
private:
    int* materialA;
    char* materrialB;
    float* materialC;
public:
    Boxes() {
    materialA = new int[10];
    materrialB = new char[10];
    materialC = new float[10];
    }
void addMaterial(T material, int index) {
		if (typeid(material).name() == typeid(int).name()) {
			materialA[index] = material;
		}
		if (typeid(material).name() == typeid(char).name()) {
			materrialB[index] = material;
		}
		if (typeid(material).name() == typeid(float).name()) {
			materialC[index] = material;
		}
	}
void displayMaterial() {
		cout << "Material A: ";
		for (int i = 0; i < 10; i++) {
			cout << materialA[i] << " ";
		}
		cout << endl;
		cout << "Material B: ";
		for (int i = 0; i < 10; i++) {
			cout << materrialB[i] << " ";
		}
		cout << endl;
		cout << "Material C: ";
		for (int i = 0; i < 10; i++) {
			cout << materialC[i] << " ";
		}
		cout << endl;
	}
    void highestA() {
		int max = materialA[0];
		for (int i = 0; i < 10; i++) {
			if (materialA[i] > max) {
				max = materialA[i];
			}
		}
		cout << "Highest value of Material A: " << max << endl;
	}
    void highestB() {
        int max = materialB[0];
        for (int i = 0; i < 10; i++) {
            if (materialB[i] > max) {
                max = materialB[i];
            }
        }
        cout << "Highest value of Material B: " << max << endl;
    }
    void highestC() {
        int max = materialC[0];
        for (int i = 0; i < 10; i++) {
            if (materialC[i] > max) {
                max = materialC[i];
            }
        }
        cout << "Highest value of Material C: " << max << endl;
    }
};



