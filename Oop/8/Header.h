#pragma once

#include <iostream>
using namespace std;

class Course {
	string courseCode;
	string courseTitle;
	string courseType;
	int creditHours;
	string courseTeacher;
	char section;

public:
	Course();
	Course(Course& c);
	Course(string cc, string ctitle, string ctype, int ch, string cther, char s);
	void setCourseCode(string cc);
	void setCourseTitle(string ctitle);
	void setCourseType(string ctype);
	void setCreditHours(int ch);
	void setCourseTeacher(string cther);
	void setSection(char s);
	string getCourseCode(void);
	string getCourseTitle(void);
	string getCourseType(void);
	int getCreditHours(void);
	string getCourseTeacher(void);
	char getSection(void);

};

class Semester {
	string semesterCode;
	int courseCount;
	Course* courseArr;

public:
	Semester();
	Semester(Semester& s);
	Semester(string sc, int c, Course* courseArr);
	void setSemesterCode(string sc);
	void setCourseCount(int cc);
	string getSemesterCode(void);
	int getCourseCount(void);
	Course getCourseArr(void);
};

class Counter {
	int count;
	int objCount;
	int serialNo;

public:
	Counter();
	Counter(int c);
	~Counter();
	void setCount(int c);
	int getCount()const;
	int getSerialNo()const;
	static int getObjCount();
	static int IncrementObjCount();
	Counter operator=(const Counter& obj);
	Counter operator–();
};

class Square {
	int side;
	int area;
public:
	Square();
	Square(int i);
	bool setSide(int f);
	int getSide()const;
	bool setArea();
	int getArea()const;
	Square operator+(const Square& obj);
	Square operator*(const Square& obj);
	bool operator>(const Square& obj);
	bool operator<=(const Square& obj);
	const Square operator=(const Square& obj);
};

class Complex {
	double real;
	double imaginary;
public:
	Complex(double r, double i);
	void setReal(double r);
	double getReal()const;
	void setImaginary(double i);
	double getImaginary() const;
	Complex operator - (const Complex& obj);
	Complex operator += (const Complex& obj);
	Complex operator /= (const Complex& obj);
	void operator = (const Complex& obj);
	bool operator != (const Complex& obj);
	bool operator+ ()const;
};

class Date {
	int year;
	int month;
	int day;
public:
	Date(int year, int month, int day);
	int getDay();
	int getMonth();
	int getYear();
	void operator = (const Date& obj);
	void operator + (const Date& obj);
	void operator -= (const Date& obj);
	void operator += (const Date& obj);
};