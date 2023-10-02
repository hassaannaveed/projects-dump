#pragma once

#include <iostream>
#include "Header.h"
#include <cmath>
using namespace std;

class Point {
	int X_Coordinate;
	int Y_Coordinate;
public:
	Point() {
	}
	Point(int x, int y) {

	}
	Point(const Point& p) {
	}
	int getX_Coordinate() const {
	}
	int getY_Coordinate() const {
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
		
	}
	float findLength() {
		
	}
	Point& findMidPoint() {
		
	}
};

class Car {
	string make;
	string carModel;
	string regNo;
	int year;
public:
	Car() {
		
	}
	Car(string m, string c, string r, int y) {
		
	}
	string getMake(){
		
	}
	string getCarModel() {
		
	}
	string getRegNo() {
		
	}
	int getYear() {
		
	}
	void setMake(string m) {
		
	}
	void setCarModel(string m) {
		
	}
	void setRegNo(string r) {
		
	}
	void setYear(int y) {
		
	}
};

class Garage {
	string name;
	int index;
	int capacity;
	Car *arr;
	Garage() {

	}
	Garage(string n, int i, int c) {

	}
	bool IsEmpty() {

	}
	bool IsFull() {
		
	}
	bool Push(Car c) {
		
	}
	bool Find(string reg) {
		
	}
	bool Remove(string reg) {
		
	}
};

class Professor {
	string name;
	int employeeID;
	string designation;
public:
	Professor() {
		
	}
	Professor(string n, int id, string des){
		
	}
	string getName() {
		

	}
	int getEmployeeID() {
		

	}
	string getDesignation() {
		


	}
	void setName(string n) {
		

	}
	void setEmployeeID(int id) {
		

	}
	void setDesignation(string d) {
		
	}
};

class Department {
	string name;
	int deptID;
	Professor* profList;
	int noOfProfessors;
public:
	Department() {
		
	}
	Department(string n, int id, int no) {
		
	}
	string getName() {
		

	}
	Professor getProf() {
		
	}
	int getDeptID() {
		
	}
	int getNoOfProf() {
		
	}
	void setName(string n) {
		

	}
	void setDeptID(int id) {
		

	}
	void setProf(Professor f, int i) {
		
	}
	void setNoOfProf(int no) {
		
	}
};

class University {
	string name;
	Department *dept;
	int noOfDept;
public:
	University() {
		
	}
	University(string n, int no) {
		
	}
	string getName() {
		

	}
	Department getDept() {
		

	}
	int getNoOfDept() {
		
	}
	void setName(string n) {
		

	}
	void setDept(Department id, int i) {
		

	}
	void setNoOfDept(int d) {
		
	}
	bool addDepartment(Department D) {
		
	}
	bool deleteDepartment(string name) {
		
	}
	bool updateDepartment(int id, string name) {
		
	}
	void Display() {

	}
	bool addProfessor(Professor p);
	bool deleteProfessor(int id);
	bool updateProfessor(int id, string newDesignation);
	void Display();
};
