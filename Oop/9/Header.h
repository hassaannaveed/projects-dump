#pragma once

#include <iostream>
#include "Header.h"
using namespace std;

class DayOfYear {
private:
	int day;

public:
	string print();
	void operator+ (int val);
	void operator+= (const DayOfYear& right);
	void operator-= (const DayOfYear& right);
	void operator= (const DayOfYear& right);
	bool operator== (const DayOfYear& right);
	void operator++ (const DayOfYear& right);
	void operator-- ();
	friend ostream& operator<< (ostream& os, DayOfYear& right);
	friend istream& operator>> (istream& in, DayOfYear& right);
};

class Matrix {
	int rows;
	int columns;
	int** ptr;
public:
	Matrix(int r, int c);
	bool operator< (const Matrix& right);
	void operator+= (const Matrix& right);
	void operator-= (const Matrix& right);
	void operator*= (const Matrix& right);
	Matrix operator++ (int);
};



class Money {
	int dollar;
	int cents;
public:
	Money();
	Money(int dollar, int cents);
	void operator++ ();
	Money operator++ (int);
	void operator-- ();
	Money operator-- (int);
	void operator*= (const Money& right);
	bool operator!= (const Money& right);
	friend ostream & operator<< (ostream& os, Money& right);
	friend istream & operator>> (istream& in, Money& right);
	~Money();
	int GetDollar(void);
	int GetCents(void);
	void SetDollar(int d);
	void SetCents(int c);
	
};

