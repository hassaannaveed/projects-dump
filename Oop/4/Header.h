
#include <iostream>
using namespace std;
void print_pattern(char ch, int n) {
	cout << " "<<ch<<" ";
	if (n < 1) {
		for (int i = 0; i < n;i++) {
			print_pattern(ch,n);
		}		
	}
}

int returnMini(int arr[], int index, int len) {
	return 0;
}

void printPrimeFactors(int num) {
	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			cout << i;
		}
	}
}


void print_num(int n) {
	int temp = n;
	cout << n;
	if (n > 0) {
		print_num(n - 1);
	}
	
}


void Printpattern (int n, int k) {
	int temp = 0;
	for (int i = 0; i < n; i++) {
		cout << "*";
	}
	cout << n;
	temp = k;
	if (n < temp) {
		Printpattern(n + 1,temp);
	}

}

struct Student {
private:
	int rollNum;
	string nam;
	string dept;
	int batch;
	float cgpa;

public:
	int getRollNum() {
		return rollNum;
	}
	void setRollNum(int i) {
		rollNum = i;
	}
	string getName() {
		return nam;
	}
	void setName(string name) {
		nam = name;
	}
	string getDep() {
		return dept;
	}
	void setDep(string dp) {
		dept = dp;
	}
	int getBatch() {
		return batch;
	}
	void setBatch(int bat) {
		batch = bat;
	}
	float getCGPA() {
		return cgpa;
	}
	void setCGPA(float gpa) {
		cgpa = gpa;
	}
	void sortStudent(Student arr[], int s) {
		bool swap = true;
		for (int i = 0; i < s - 1; i++) {
				if (arr[i].cgpa > arr[i + 1].cgpa) {
					int temp = arr[i].cgpa;
					arr[i].cgpa = arr[i + 1].cgpa;
					arr[i + 1].cgpa = temp;
					swap = true;
				}
				if (swap = false && i > s) {
					break;
				}
		}
		for (int i = 0; i < s - 1; i++) {
			cout << "Student " << i + 1 << ":" << endl;
			cout << arr[i].getRollNum()<<endl;
			cout << arr[i].getName() << endl;
			cout << arr[i].getDep() << endl;
			cout << arr[i].getBatch() << endl;
			cout << arr[i].getCGPA() << endl;
		}
	}
	void printInfo(Student arr[], int s) {
		sortStudent(arr, 5);
		cout << "Student with highest GPA in array:" << endl;
		cout << arr[4].getRollNum() << endl;
		cout << arr[4].getName() << endl;
		cout << arr[4].getDep() << endl;
		cout << arr[4].getBatch() << endl;
		cout << arr[4].getCGPA() << endl;
		cout << "Student with lowest GPA in array:" << endl;
		cout << arr[0].getRollNum() << endl;
		cout << arr[0].getName() << endl;
		cout << arr[0].getDep() << endl;
		cout << arr[0].getBatch() << endl;
		cout << arr[0].getCGPA() << endl;
		cout << "Student with average GPA in array:" << endl;
		cout << arr[2].getRollNum() << endl;
		cout << arr[2].getName() << endl;
		cout << arr[2].getDep() << endl;
		cout << arr[2].getBatch() << endl;
		cout << arr[2].getCGPA() << endl;
	}


};

void fillstructure(Student arr[5]) {
	int rollnum;
	string name;
	string department;
	int batch;
	float gpa;
	for (int i = 0; i < 5; i++) {
		cout << "Student " <<i+1<<":"<<endl;
		cout << "Enter the roll number of the student: ";
		cin >> rollnum;
		arr[i].setRollNum(rollnum);
		cout << "Enter the name of the student: ";
		cin >> name;
		arr[i].setName(name);
		cout << "Enter the department of the student: ";
		cin >> department;
		arr[i].setDep(department);
		cout << "Enter the batch of the student: ";
		cin >> batch;
		arr[i].setBatch(batch);
		cout << "Enter the CGPA of the student: ";
		cin >> gpa;
		arr[i].setCGPA(gpa);
	}

}

struct Employee{
	
	private:
	int empNo;
	long basicPay;
	long houseRent;
	long medicalAllow;
	long conveyanceAllow;
	long netPay;
	
	public:
	void setBasicPay(long bp) {
		basicPay = bp;
	}
	long getBasicPay() {
		return basicPay;
	}
	void setEmpNo(int e) {
		empNo = e;
	}
	int getEmpNo() {
		return empNo;
	}
	void calculateHouseRent() {
		houseRent = ((54/100)*basicPay);
	}
	void calculateMedicalAllowance() {
		medicalAllow = ((15/100)*basicPay);
	}
	void calculateConveyanceAllowance() {
		conveyanceAllow = ((20/100)*basicPay);
	}
	void calculateNetPay() {
		netPay = basicPay + houseRent + medicalAllow + conveyanceAllow;
	}
	long gethouseRent() {
		return houseRent;
	}
	long getMedicalAllowance() {
		return medicalAllow;
	}
	long getConveyanceAllowance() {
		return conveyanceAllow;
	}
	long getNetPay() {
		return netPay;
	}
};

void swap(Employee& emp1, Employee& emp2) {
	int empNo;
	long basicPay;
	empNo = emp1.getEmpNo();
	basicPay = emp1.getBasicPay();
	emp1.setEmpNo(emp2.getEmpNo());
	emp1.setBasicPay(emp2.getBasicPay());
	emp1.calculateHouseRent();
	emp1.calculateMedicalAllowance();
	emp1.calculateConveyanceAllowance();
	emp1.calculateNetPay();
	emp2.setEmpNo(empNo);
	emp2.setBasicPay(basicPay);
	emp2.calculateHouseRent();
	emp2.calculateMedicalAllowance();
	emp2.calculateConveyanceAllowance();
	emp2.calculateNetPay();
}
