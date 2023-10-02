#pragma once
#include <iostream>
#include <cstring>
using namespace std;

int stlength(string s) {
    int x = 0;
    while (s[x] != '\0') {
        x = x + 1;
    }
    return x;
}

class Holiday {
private:
    string name;
    int day;
    string month;
public:
    Holiday() {
        name = "";
        day = 0;
        month = "";
    }
    Holiday(string n, int d, string m) {
        name = n;
        day = d;
        month = m;
    }
    string getName(void) {
        return name;
    }
    int getDay(void) {
        return day;
    }
    string getMonth(void) {
        return month;
    }
    bool setName(string s) {
        if (stlength(s) > 50) {
            return false;
        }
        else {
            name = s;
            return true;
        }
    }
    bool setMonth(string p) {
        if (stlength(p) > 10) {
            return false;
        }
        else {
            month = p;
            return true;
        }
    }
    bool setDay(int u) {
        if (u < 1) {
            return false;
        }
        else {
            day = u;
            return true;
        }
    }
};

bool inSameMonth(Holiday &a, Holiday &b) {
    if (a.getMonth() == b.getMonth()) {
        return true;

    }
    else {
        return false;
    }
}

double avgDate(Holiday arr[], int size) {
    return 0.0;
}

class Rational {
private:
    int numerator;
    int denominator;
public:
    Rational() {
        numerator = 0;
        denominator = 0;
    }
    Rational(int n, int d) {
        numerator = n;
        denominator = d;
    }
    void setNumerator(int a) {
        numerator = a;
    }
    int getNumerator() {
        return numerator;
    }
    void setDenominator(int a) {
        denominator = a;
    }
    int getDenominator() {
        return denominator;
    }
};

Rational addRationalNumber(Rational r1, Rational r2) {

}

class Date {
private:
    int year;
    int month;
    int day;
public:
    Date() {
        year = 2000;
        month = 1;
        day = 1;
    }
    Date(int year, int month, int day) {
        this->year = year;
        this->month = month;
        this->day = day;
    }
    void setDay(int d) {
        day = d;
    }
    int getDay(void) {
        return day;
    }
    void setMonth(int m) {
        month = m;
    }
    int getMonth(void) {
        return month;
    }
    void setYear(int y) {
        year = y;
    }
    int getYear(void) {
        return year;
    }
    void addD(int days) {
        day = day + days;
    }
    void addWeeks(int weeks) {
        day = day + (weeks * 7);
    }
    string toString() {
        string out;
        string stt;
        stt = day;
        out = year + "/" + month + "/" + stt;
        return out;
    }
};

class Car {
private:
    string make;
    string model;
    int year;
    int mileage;
    double capacity;
public:
    Car() {

    }
    Car(string mk, string md, int y, double fl) {
        int x;
        make = mk;
        model = md;
        year = y;
        x = y - 2015;
        if (y == 2015) {
            mileage = 12000;
        }
        else if (y == 2016) {
            mileage = 15000;
        }
        else if (y == 2017) {
            mileage = 18000;
        }
        else {
            mileage = 12000 + (x * 3000);
        }
        capacity = fl;
    }
    void setMake(string mk) {
        make = mk;
    }
    string getMake() {
        return make;
    }
    void setModel(string md) {
        model = md;
    }
    string getModel() {
        return model;
    }
    void setYear(int y) {
        year = y;
    }
    int getYear() {
        return year;
    }
    int getMileage() {
        return mileage;
    }
    void setFuelCapacity(double f) {
        capacity = f;
    }
    double getFuelCapacity() {
        return capacity;
    }
};