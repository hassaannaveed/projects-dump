/*
Hassaan Naveed
22i-0557
SE-F
*/

#include <iostream>
#include "Header.h"
using namespace std;

string DayOfYear::print() {

}
void DayOfYear::operator+ (int val) {
	this->day += val;
}
void DayOfYear::operator+= (const DayOfYear& right) {
	this->day += right.day;
}
void DayOfYear::operator-= (const DayOfYear& right) {
	this->day -= right.day;
}
void DayOfYear::operator= (DayOfYear& right) {
	this->day = right.day;
}
bool DayOfYear::operator== (const DayOfYear& right) {
	if (this->day == right.day) {
		return true;
	}
	else {
		return false;
	}
}
void DayOfYear::operator++ () {
	if (this->day == 365) {
		this->day = 1;
	}
	else {
		this->day++;
	}
}
void DayOfYear::operator-- () {
	if (this->day == 1) {
		this->day = 365;
	}
	else {
		this->day--;
	}
}
ostream& operator<< (ostream& os, DayOfYear& right) {
	os << right.day;
}
istream& operator>> (istream& in, DayOfYear& right) {
	in >> right.day;
}

Matrix::Matrix(int r, int c) {
	rows = r;
	columns = c;
	ptr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		ptr[rows] = new int[columns];
	}
}
bool Matrix::operator< (const Matrix& right) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			if (this->ptr[i][j] > right.ptr[i][j]) {
				return false;
			}
		}
	}
	return true;
}
void Matrix::operator+= (const Matrix& right) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			this->ptr[i][j] += right.ptr[i][j];
		}
	}
}
void Matrix::operator-= (const Matrix& right) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			this->ptr[i][j] -= right.ptr[i][j];
		}
	}
}
void Matrix::operator*= (const Matrix& right) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			this->ptr[i][j] *= right.ptr[i][j];
		}
	}
}
Matrix Matrix::operator++ (int) {
	Matrix obj(this->rows, this->columns);
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			obj.ptr[i][j]++;
		}
	}
	return obj;
}

Money::Money(void) {
	SetDollar(0);
	SetCents(0);
}
Money::Money(int dollar, int cents) {
	SetDollar(dollar);
	SetCents(cents);
}
void Money::operator++ () {
	this->dollar = this->dollar + 1;
	this->cents = this->cents + 1;
}
Money Money::operator++ (int) {
	Money obj(this->GetDollar(), this->GetCents());
	obj.SetDollar(obj.GetDollar() + 1);
	obj.SetCents(obj.GetCents() + 1);
	return obj;
}
void Money::operator-- () {
	this->dollar = this->dollar - 1;
	this->cents = this->cents - 1;
}
Money Money::operator-- (int) {
	Money obj(this->GetDollar(), this->GetCents());
	obj.SetDollar(obj.GetDollar() - 1);
	obj.SetCents(obj.GetCents() - 1);
	return obj;
}
void Money::operator*= (const Money& right) {
	this->dollar *= right.dollar;
	this->cents *= right.cents;
}
bool Money::operator!= (const Money& right) {
	if (this->dollar != right.dollar) {
		return true;
	}
	else {
		return false;
	}
}
ostream & operator<< (ostream& os, Money& right) {
	os << right.dollar << right.cents;
}
istream& operator>> (istream& in, Money& right) {
	in >> right.dollar >> right.cents;
}
Money::~Money() {

}
int Money::GetDollar(void) {
	return dollar;
}
int Money::GetCents(void) {
	return cents;
}
void Money::SetDollar(int d) {
	dollar = d;
}
void Money::SetCents(int c) {
	cents = c;
}

int main()
{
    return 0;
}
