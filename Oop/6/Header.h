#pragma once
#include <iostream>
#include <string>
using namespace std;

class Laptop {
private:
	string model;
	string mac;
	string company;
public:
	Laptop() {
		Laptop("", "", "");
	}
	Laptop(string model, string mac, string company) {
		this->model = model;
		this->mac = mac;
		this->company = company;
	}
	string getModel(void) {
		return this->model;
	}
	void setModel(string model) {
		this->model = model;
	}
	string getMacAddress(void) {
		return this->mac;
	}
	void setMacAddress(string mac) {
		this->mac = mac;
	}
	string getCompanyName(void) {
		return this->company;
	}
	void setCompanyName(string company) {
		this->company = company;
	}
	string getLaptopInfo(void) {
		string temp;
		temp = this->model + " " + this->mac + " " + this->company;
	}
};


class Course {
private:
	string courseCode;
	string courseTitle;
	int creditHours;
	char section;
	int repeatCount;
public:
	Course() {
		courseCode = "";
		courseTitle = "";
		creditHours = 0;
		section = 'A';
		repeatCount = 0;
	}
	Course(Course &c) {
		this->courseCode = c.getCourseCode();
		this->courseTitle = c.getCourseTitle();
		this->creditHours = c.getCreditHours();
		this->section = c.getSection();
		this->repeatCount = c.getRepeatCount();
	}
	Course(string cc, string ct, int ch, char s, int rc) {
		courseCode = cc;
		courseTitle = ct;
		creditHours = ch;
		section = s;
		repeatCount = rc;
	}

	string getCourseCode(void) {
		return courseCode;
	}
	string getCourseTitle(void) {
		return courseTitle;
	}
	int getCreditHours(void) {
		return creditHours;
	}
	char getSection(void) {
		return section;
	}
	int getRepeatCount(void) {
		return repeatCount;
	}
	void setCourseCode(string code) {
		courseCode = code;
	}
	void setCourseTitle(string title) {
		courseTitle = title;
	}
	void setCreditHours(int credit) {
		creditHours = credit;
	}
	void setSection(char sec) {
		section = sec;
	}
	void setRepeatCount(int repeat) {
		repeatCount = repeat;
	}




};


class Semester {
private:
	string semesterCode;
	int courseCount;
	Course* coursePtr;
public:
	Semester() {
		semesterCode = "";
		courseCount = 0;
		coursePtr = new Course[courseCount];
	}
	Semester(Semester &s) {
		this->semesterCode = s.getSemesterCode();
		this->courseCount = s.getCourseCount();
	}
	Semester(string sc, int c, Course* courseArr) {
		semesterCode = sc;
		courseCount = c;
		coursePtr = courseArr;
	}
	string getSemesterCode(void) {
		return semesterCode;
	}
	int getCourseCount(void) {
		return courseCount;
	}
	Course* getCoursePtr() {
		return coursePtr;
	}

};


int GetCreditHoursCount(Semester sem) {
	return 0;
}
bool FindCourseInSemesterRegistration(Semester sem, string sc) {
	return true;

}

class Point {
	int x;
	int y;
public:
	Point() {
		x = 0;
		y = 0;
	}
	Point(int x, int y) {
		this->x = x;
		this->y = y;
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
	void setX(int x) {
		this->x = x;
	}
	void setY(int y) {
		this->y = y;
	}
};


class Line {
private:
	Point P1;
	Point P2;
public:
	Line(Point& p1, Point& p2) {
		this->P1.setX(p1.getX());
		this->P1.setY(p1.getY());
		this->P2.setX(p2.getX());
		this->P2.setX(p2.getX());
		
	}
	Line(int x1, int y1, int x2, int y2) {
		this->P1.setX(x1);
		this->P1.setY(y1);
		this->P2.setX(x2);
		this->P2.setX(y2);
	}
	Line(Line &copy) {
		this->P1.setX(copy.P1.getX());
		this->P1.setY(copy.P1.getY());
		this->P2.setX(copy.P2.getX());
		this->P2.setY(copy.P2.getY());
	}
	Point getP1() {
		return P1;
	}
	Point getP2() {
		return P2;
	}
	double getSlope() {
		double slope;
		slope = ((this->P2.getY() - this->P1.getY()) / (this->P2.getX() - this->P1.getX()));
		return slope;
	}
	string toString() {
		string temp;
		temp = ("[(" + to_string(P1.getX()) + "," + to_string(P1.getY()) + "), (" + to_string(P2.getX()) + "," + to_string(P2.getY()) + ")]");    
	}
};


class Account {
private:
	long accountNumber;
	double balance;
	static int base;

public:
	void incbase(void) {
		base++;
	}
	Account() {
		balance = 0;
		incbase();
		accountNumber = base;
	}
	Account(double bal) {
		balance = bal;
		incbase();
		accountNumber = base;
	}
	void checkBalance() const {
		cout << "Account Number: " << accountNumber << endl;
		cout << "Balance: " << balance << endl;
	}
	void deposit(double amount) {
		if (amount == 0.0) {
			balance = balance + amount;
			cout << "Account Number: " << accountNumber << endl;
			cout << "Balance: " << balance << endl;
		}
		else {
			cout << "Enter an amount greater than 0";
		}
	}
	void withdraw(double amount) {
		if (balance >= amount) {
			balance = balance - amount;
			cout << "Account Number: " << accountNumber << endl;
			cout << "Balance: " << balance << endl;
		}
		else {
			cout << "Low funds";
		}
	}
	~Account() {
		cout << "Account is closed"<<endl;
		cout << "Account Number: " << accountNumber << endl;
		cout << "Balance: " << balance << endl;
		cout << "Balance is transfered to Authorized person";

	}

};
