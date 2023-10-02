/*
Hassaan Naveed
22i-0557
SE-F
*/

#include <iostream>
#include "Header.h"
using namespace std;

class Point {
	int X_Coordinate;
	int Y_Coordinate;
public:
	Point() {
		X_Coordinate = 0;
		Y_Coordinate = 0;
	}
	Point(int x, int y) {
		X_Coordinate = x;
		Y_Coordinate = y;

	}
	Point(const Point& p) {
		this->X_Coordinate = p.X_Coordinate;
		this->Y_Coordinate = p.Y_Coordinate;
	}
	int getX_Coordinate() const {
		return X_Coordinate;
	}
	int getY_Coordinate() const {
		return Y_Coordinate;
	}
};

class Line {
	Point Point_1;
	Point Point_2;
public:
	Line() :Point_1(4, 6), Point_2(2, 4) {

	}
	Line(int x1, int y1, int x2, int y2) : Point_1(x1, y1), Point_2(x2, y2) {

	}
	Line(const Point& p1, const Point& p2) : Point_1(p1.getX_Coordinate(), p1.getY_Coordinate()), Point_2(p2.getX_Coordinate(), p2.getY_Coordinate()) {

	}
	float findSlope() {
		return ((Point_2.getY_Coordinate() - Point_1.getY_Coordinate()) / (Point_2.getX_Coordinate() - Point_1.getX_Coordinate()));
	}
	float findLength() {
		int temp;
		temp = pow((Point_2.getX_Coordinate() - Point_1.getX_Coordinate()), 2) + pow((Point_2.getY_Coordinate() - Point_1.getY_Coordinate()), 2);
		temp = sqrt(temp);
		return temp;
	}
	Point& findMidPoint() {
		Point* ptr = new Point((Point_1.getX_Coordinate() + Point_2.getX_Coordinate()) / 2, (Point_1.getY_Coordinate() + Point_2.getY_Coordinate()) / 2);
		return *ptr;
	}
};

class Car {
	string make;
	string carModel;
	string regNo;
	int year;
public:
	Car() {
		make = "";
		carModel = "";
		regNo = "";
		year = 0;
	}
	Car(string m, string c, string r, int y) {
		make = m;
		carModel = c;
		regNo = r;
		year = 0;
	}
	string getMake() {
		return make;
	}
	string getCarModel() {
		return carModel;
	}
	string getRegNo() {
		return regNo;
	}
	int getYear() {
		return year;
	}
	void setMake(string m) {
		make = m;
	}
	void setCarModel(string m) {
		carModel = m;
	}
	void setRegNo(string r) {
		regNo = r;
	}
	void setYear(int y) {
		year = y;
	}
};

class Garage {
	string name;
	int index;
	int capacity;
	Car* arr;
	Garage() {
		name = "";
		index = 0;
		capacity = 10;
		arr = new Car[capacity];
	}
	Garage(string n, int i, int c) {
		name = n;
		index = i;
		capacity = c;
		arr = new Car[capacity];
	}
	bool IsEmpty() {
		if (index == 0) {
			return true;
		}
		else {
			return false;
		}
	}
	bool IsFull() {
		if (index == capacity) {
			return true;
		}
		else {
			return false;
		}
	}
	bool Push(Car c) {
		if (index != capacity) {
			index++;
			arr[index - 1].setCarModel(c.getCarModel());
			arr[index - 1].setMake(c.getMake());
			arr[index - 1].setRegNo(c.getRegNo());
			arr[index - 1].setYear(c.getYear());
			return true;
		}
		else {
			return false;
		}
	}
	bool Find(string reg) {
		for (int i; i < capacity; i++) {
			if (arr[i].getRegNo() == reg) {
				return true;
			}
		}
		return false;
	}
	bool Remove(string reg) {
		for (int i; i < capacity; i++) {
			if (arr[i].getRegNo() == reg) {
				index = index - 1;
				arr[i].setMake("");
				arr[i].setCarModel("");
				arr[i].setRegNo("");
				arr[i].setYear(0);
				return true;
			}
		}
		return false;
	}
};

class Professor {
	string name;
	int employeeID;
	string designation;
public:
	Professor() {
		name = "";
		employeeID = 0;
		designation = "";
	}
	Professor(string n, int id, string des) {
		name = n;
		employeeID = id;
		designation = des;
	}
	string getName() {
		return name;

	}
	int getEmployeeID() {
		return employeeID;

	}
	string getDesignation() {
		return designation;


	}
	void setName(string n) {
		name = n;

	}
	void setEmployeeID(int id) {
		employeeID = id;

	}
	void setDesignation(string d) {
		designation = d;
	}
};

class Department {
	string name;
	int deptID;
	Professor* profList;
	int noOfProfessors;
public:
	Department() {
		name = "";
		deptID = 0;
		noOfProfessors = 0;
		profList = new Professor[noOfProfessors];
	}
	Department(string n, int id, int no) {
		name = n;
		deptID = id;
		noOfProfessors = no;
		profList = new Professor[noOfProfessors];
	}
	string getName() {
		return name;

	}
	Professor getProf() {
		return *profList;
	}
	int getDeptID() {
		return deptID;
	}
	int getNoOfProf() {
		return noOfProfessors;
	}
	void setName(string n) {
		name = n;

	}
	void setDeptID(int id) {
		deptID = id;

	}
	void setProf(Professor f, int i) {
		profList[i] = f;
	}
	void setNoOfProf(int no) {
		noOfProfessors = no;
	}
};

class University {
	string name;
	Department* dept;
	int noOfDept;
public:
	University() {
		name = "";
		noOfDept = 0;
		dept = new Department[noOfDept];
	}
	University(string n, int no) {
		name = n;
		noOfDept = no;
		dept = new Department[noOfDept];
	}
	string getName() {
		return name;

	}
	Department getDept() {
		return *dept;

	}
	int getNoOfDept() {
		return noOfDept;
	}
	void setName(string n) {
		name = n;

	}
	void setDept(Department id, int i) {
		dept[i] = id;

	}
	void setNoOfDept(int d) {
		noOfDept = d;
	}
	bool addDepartment(Department D) {
		for (int i = 0; i < noOfDept; i++) {
			if (dept[i].getName() == "") {
				dept[i + 1].setName(D.getName());
				dept[i + 1].setDeptID(D.getDeptID());
				dept[i + 1].setNoOfProf(D.getNoOfProf());
				return true;
			}
		}
		return false;
	}
	bool deleteDepartment(string name) {
		for (int i = 0; i < noOfDept; i++) {
			if (dept[i].getName() == name) {
				dept[i].setName("");
				dept[i].setDeptID(0);
				dept[i].setNoOfProf(0);
				return true;
			}
		}
		return false;
	}
	bool updateDepartment(int id, string name) {
		for (int i = 0; i < noOfDept; i++) {
			if (dept[i].getName() == name && dept[i].getDeptID() == id) {
				dept[i].setName(name);
				dept[i].setDeptID(id);
				return true;
			}
		}
		return false;
	}
	void Display() {

	}
};

int main()
{

    return 0;
}
