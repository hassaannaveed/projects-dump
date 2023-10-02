/*
Hassaan Naveed
22i-0557
SE-F
*/

#include <iostream>
#include "Header.h"
using namespace std;

Course::Course(){
    courseCode = "";
    courseTitle = "";
    courseType = "";
    creditHours = -1;
    courseTeacher = "";
    section = 'A';
}
Course::Course(Course &c) {
    this->courseCode = c.courseCode;
    this->courseTitle = c.courseTitle;
    this->courseType = c.courseTitle;
    this->creditHours = c.creditHours;
    this->courseTeacher = c.courseTeacher;
    this->section = c.section;
}
Course::Course(string cc, string ctitle, string ctype, int ch, string cther, char s) {
    courseCode = cc;
    courseTitle = ctitle;
    courseType = ctype;
    creditHours = ch;
    courseTeacher = cther;
    section = s;
}
void Course::setCourseCode(string cc) {
    courseCode = cc;
}
void Course::setCourseTitle(string ctitle) {
    courseTitle = ctitle;
}
void Course::setCourseType(string ctype) {
    courseType = ctype;
}
void Course::setCreditHours(int ch) {
    creditHours = ch;
}
void Course::setCourseTeacher(string cther) {
    courseTeacher = cther;
}
void Course::setSection(char s) {
    section = s;
}
string Course::getCourseCode(void) {
    return courseCode;
}
string Course::getCourseTitle(void) {
    return courseTitle;
}
string Course::getCourseType(void) {
    return courseType;
}
int Course::getCreditHours(void) {
    return creditHours;
}
string Course::getCourseTeacher(void) {
    return courseTeacher;
}
char Course::getSection(void) {
    return section;
}

Semester::Semester() {
    semesterCode = "";
    courseCount = 0;
}
Semester::Semester(Semester& s) {
    this->semesterCode = s.semesterCode;
    this->courseCount = s.courseCount;
}
Semester::Semester(string sc, int c, Course* courseArr) {
    semesterCode = sc;
    courseCount = c;
}

void Semester::setSemesterCode(string sc) {
    semesterCode = sc;
}
void Semester::setCourseCount(int cc) {
    courseCount = cc;
}
string Semester::getSemesterCode(void) {
    return semesterCode;
}
int Semester::getCourseCount(void) {
    return courseCount;
}

string mostTeachersCount(Semester sem) {

}
void findTypesByCount(Semester sem) {

}

Counter::Counter() {
    count = 0;
    objCount = 0;
    serialNo++;
}
Counter::Counter(int c) {
    count = c;
    serialNo++;
}
Counter::~Counter() {

}
void Counter::setCount(int c) {
    count = c;
    serialNo++;
}
int Counter::getCount()const {
    return count;
}
int Counter::getSerialNo()const {
    return serialNo;
};
int Counter::getObjCount() {
    return objCount;
}
int Counter::IncrementObjCount() {
    this->objCount++;
    return objCount;
}
Counter Counter::operator=(const Counter& obj) {
    this->count = obj.count;
}
Counter Counter::operator–() {
    this->count = (-1) * (this->count);
}

Square::Square() {
    side = 0;
}
Square::Square(int i) {
    side = i;
    setArea();
}
bool Square::setSide(int f) {
    if (f > 0) {
        side = f;
        return true;
    }
    else {
        return false;
    }
}
int Square::getSide()const {
    return side;
}
bool Square::setArea() {
    if (side > 0) {
        area = (4 * side);
        return true;
    }
    else {
        return false;
    }
}
int Square::getArea()const {
    return area;
}
Square Square::operator+(const Square& obj) {
    this->side = this->side + obj.side;
    getArea();
}
Square Square::operator*(const Square& obj) {
    this->side = this->side - obj.side;
    getArea();
}
bool Square::operator>(const Square& obj) {
    if (this->side > obj.side) {
        return true;
    }
    else {
        return false;
    }
}
bool Square::operator<=(const Square& obj) {
    if (this->side < obj.side || this->side == obj.side) {
        return true;
    }
    else {
        return false;
    }
}
const Square Square::operator=(const Square& obj) {
    this->side = obj.side;
    getArea();
}

Complex::Complex(double r, double i) {
    setReal(r);
    setImaginary(i);
}
void Complex::setReal(double r) {
    real = r;
}
double Complex::getReal()const {
    return real;
}
void Complex::setImaginary(double i) {
    imaginary = i;
}
double Complex::getImaginary() const {
    return imaginary;
}
Complex Complex::operator - (const Complex& obj) {
    this->real = this->real + obj.real;
    this->imaginary = this->imaginary + obj.imaginary;
}
Complex Complex::operator += (const Complex& obj) {
    this->real = this->real - obj.real;
    this->imaginary = this->imaginary - obj.imaginary;
}
Complex Complex::operator /= (const Complex& obj) {
    Complex temp(0,0);
    temp.real = ((this->real * obj.real) - (this->imaginary * obj.imaginary));
    temp.imaginary = ((this->real * obj.imaginary) - (this->imaginary * obj.real));
    return temp;
}
void Complex::operator = (const Complex& obj) {

    this->real = obj.real;
    this->imaginary = obj.imaginary;


}
bool Complex::operator != (const Complex& obj) {
    if (this->real == obj.real && this->imaginary == obj.imaginary) {
        return true;
    }
    else {
        return false;
    }
}
bool Complex::operator+ ()const {
    if (this->real == 0 && this->imaginary == 0) {
        return true;
    }
    else {
        return false;
    }
}

Date::Date(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
};
int Date::getDay() {
    return day;
};
int Date::getMonth() {
    return month;
};
int Date::getYear() {
    return year;
};
void Date::operator = (const Date& obj) {
    this->day = obj.day;
    this->month = obj.month;
    this->year = obj.year;
};
void Date::operator + (const Date& obj) {
    this->day = this->day + obj.day;
};
void Date::operator -= (const Date& obj) {
    this->day = this->day - obj.day;
};
void Date::operator += (const Date& obj) {
    this->day = this->day + obj.day;
    this->month = this->month + obj.month;
    this->year = this->year + obj.year;
};

int main()
{
    return 0;
}
