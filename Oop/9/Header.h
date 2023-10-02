#pragma once
#include <iostream>
#include "Header.h"
using namespace std;

class Vehicle {
protected:
	double mileage;
	double price;
public:
	Vehicle();
};

class Car :public Vehicle {
protected:
	double cost;
	int warranty;
	int seating;
	string fueltype;
public:
	Car();
};

class Bike :public Vehicle {
protected:
	int cylinders;
	int gears;
	string cooling;
	string wheel;
	int fueltanksize;
public:
	Bike();
};

class Audi :public Car {
protected:
	string model;
public:
	Audi();
	double getMileage();
	void setMileage(double m);
	double getPrice();
	void setPrice(double p);
	double getCost();
	void setCost(double c);
	double getWarranty();
	void setWarranty(int w);
	int getSeatingCapacity();
	void setSeatingCapacity(int c);
	string getFuelType();
	void setFuelType(string f);
	string getModel();
	void setModel(string m);
};

class Ford :public Car {
protected:
	string model;
public:
	Ford();
	double getMileage();
	void setMileage(double m);
	double getPrice();
	void setPrice(double p);
	double getCost();
	void setCost(double c);
	double getWarranty();
	void setWarranty(int w);
	int getSeatingCapacity();
	void setSeatingCapacity(int c);
	string getFuelType();
	void setFuelType(string f);
	string getModel();
	void setModel(string m);

};

class Bajaj :public Bike {
protected:
	string maketype;
public:
	Bajaj();
	double getMileage();
	void setMileage(double m);
	double getPrice();
	void setPrice(double p);
	int getNumOfCylinders();
	void setNumOfCylinders(int c);
	int getNumOfGears();
	void setNumOfGears(int g);
	string getCoolingType();
	void setCoolingType(string c);
	string getWheelType();
	void setWheelType(string w);
	int getFuelTankSize();
	void setFuelTankSize(int f);
	string getMakeType();
	void setMakeType(string m);

};

class TVS :public Bike {
protected:
	string maketype;
public:
	TVS();
	double getMileage();
	void setMileage(double m);
	double getPrice();
	void setPrice(double p);
	int getNumOfCylinders();
	void setNumOfCylinders(int c);
	int getNumOfGears();
	void setNumOfGears(int g);
	string getCoolingType();
	void setCoolingType(string c);
	string getWheelType();
	void setWheelType(string w);
	int getFuelTankSize();
	void setFuelTankSize(int f);
	string getMakeType();
	void setMakeType(string m);
};

class Base {
protected:
	float length;
	float width;
public:
	Base();
	Base(float x, float y);
	float getLength();
	void setLength(float l);
	float getWidth();
	void setWidth (float l);
};

class Rectangle :public Base {
	Rectangle();
	Rectangle(float, float);
	float getLength();
	void setLength(float l);
	float getWidth();
	void setWidth(float l);
	float areaOfRectangle();
};

class Square :public Base {
	Square();
	Square(float, float);
	float getLength();
	void setLength(float l);
	float areaOfSquare();
};

class Triangle :public Base {
	Triangle();
	Triangle(float, float);
	float getLength();
	void setLength(float l);
	float getHeight();
	void setHeight(float l);
	float areaOfTriangle();
};



