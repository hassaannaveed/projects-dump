/*
Hassaan Naveed
22i-0557
SE-F
*/

#include <iostream>
#include "Header.h"
using namespace std;

Vehicle::Vehicle() {
    mileage = 0;
    price = 0;
}

Car::Car() {
    cost = 0.0;
    warranty = 0;
    seating = 0;
    fueltype = "";
}

Bike::Bike() {
    cylinders = 0;
    gears = 0;
    cooling = "";
    wheel = "";
    fueltanksize = 0;
}

Audi::Audi() {
    model = "";
}

Ford::Ford() {
    model = "";
}

Bajaj::Bajaj() {
    maketype = "";
}
TVS::TVS() {
    maketype = "";
}

double Audi::getMileage() {
	return mileage;
}
void Audi::setMileage(double m) {
	mileage = m;
}
double Audi::getPrice() {
	return price;
}
void Audi::setPrice(double p) {
	price = p;
}
double Audi::getCost() {
	return cost;
}
void Audi::setCost(double c) {
	cost = c;
}
double Audi::getWarranty() {
	return warranty;
}
void Audi::setWarranty(int w) {
	warranty = w;
}
int Audi::getSeatingCapacity() {
	return mileage;
}
void Audi::setSeatingCapacity(int c) {
	seating = c;
}
string Audi::getFuelType() {
	return fueltype;
}
void Audi::setFuelType(string f) {
	fueltype = f;
}
string Audi::getModel() {
	return model;
}
void Audi::setModel(string m) {
	model = m;
}

double Ford::getMileage() {
	return mileage;
}
void Ford::setMileage(double m) {
	mileage = m;
}
double Ford::getPrice() {
	return price;
}
void Ford::setPrice(double p) {
	price = p;
}
double Ford::getCost() {
	return cost;
}
void Ford::setCost(double c) {
	cost = c;
}
double Ford::getWarranty() {
	return warranty;
}
void Ford::setWarranty(int w) {
	warranty = w;
}
int Ford::getSeatingCapacity() {
	return mileage;
}
void Ford::setSeatingCapacity(int c) {
	seating = c;
}
string Ford::getFuelType() {
	return fueltype;
}
void Ford::setFuelType(string f) {
	fueltype = f;
}
string Ford::getModel() {
	return model;
}
void Ford::setModel(string m) {
	model = m;
}

double Bajaj::getMileage() {
	return mileage;
}
void Bajaj::setMileage(double m) {
	mileage = m;
}
double Bajaj::getPrice() {
	return price;
}
void Bajaj::setPrice(double p) {
	price = p;
}
int Bajaj::getNumOfCylinders() {
	return cylinders;
}
void Bajaj::setNumOfCylinders(int c) {
	cylinders = c;
}
int Bajaj::getNumOfGears() {
	return cylinders;
}
void Bajaj::setNumOfGears(int g) {
	gears = g;
}
string Bajaj::getCoolingType() {
	return cooling;
}
void Bajaj::setCoolingType(string c) {
	cooling = c;
}
string Bajaj::getWheelType() {
	return wheel;
}
void Bajaj::setWheelType(string w) {
	wheel = w;
}
int Bajaj::getFuelTankSize() {
	return fueltanksize;
}
void Bajaj::setFuelTankSize(int f) {
	fueltanksize = f;
}
string Bajaj::getMakeType() {
	return maketype;
}
void Bajaj::setMakeType(string m) {
	maketype = m;
}


double TVS::getMileage() {
	return mileage;
}
void TVS::setMileage(double m) {
	mileage = m;
}
double TVS::getPrice() {
	return price;
}
void TVS::setPrice(double p) {
	price = p;
}
int TVS::getNumOfCylinders() {
	return cylinders;
}
void TVS::setNumOfCylinders(int c) {
	cylinders = c;
}
int TVS::getNumOfGears() {
	return cylinders;
}
void TVS::setNumOfGears(int g) {
	gears = g;
}
string TVS::getCoolingType() {
	return cooling;
}
void TVS::setCoolingType(string c) {
	cooling = c;
}
string TVS::getWheelType() {
	return wheel;
}
void TVS::setWheelType(string w) {
	wheel = w;
}
int TVS::getFuelTankSize() {
	return fueltanksize;
}
void TVS::setFuelTankSize(int f) {
	fueltanksize = f;
}
string TVS::getMakeType() {
	return maketype;
}
void TVS::setMakeType(string m) {
	maketype = m;
}

Base::Base(float x, float y) {
	length = x;
	width = y;
}
float Base::getLength() {
	return length;
}
void Base::setLength(float l) {
	length = l;
}
float Base::getWidth() {
	return width;
}
void Base::setWidth(float w) {
	width = w;
}

float Rectangle::getLength() {
	return length;
}
void Rectangle::setLength(float l) {
	length = l;
}
float Rectangle::getWidth() {
	return width;
}
void Rectangle::setWidth(float w) {
	width = w;
}
Rectangle::Rectangle() {
	length = 0;
	width = 0;
}
Rectangle::Rectangle(float x, float y) {
	length = x;
	length = y;
}
float Rectangle::areaOfRectangle() {
	return (length * width);
}

float Square::getLength() {
	return length;
}
void Square::setLength(float l) {
	length = l;
}
Square::Square() {
	length = 0;
	width = 0;
}
Square::Square(float x, float y) {
	length = x;
	length = y;
}
float Square::areaOfSquare() {
	return (length * length);
}

float Triangle::getLength() {
	return length;
}
void Triangle::setLength(float l) {
	length = l;
}
float Triangle::getHeight() {
	return width;
}
void Triangle::setHeight(float w) {
	width = w;
}
Triangle::Triangle() {
	length = 0;
	width = 0;
}
Triangle::Triangle(float x, float y) {
	length = x;
	length = y;
}
float Triangle::areaOfTriangle() {
	return (0.5 * length * width);
}

int main()
{
    Audi a;
    Ford f;
    Bajaj b;
    TVS t;
    cout << "This is the info of the Audi car: " << endl;
	cout << a.getMileage() << endl;;
	cout << a.getPrice() << endl;;
	cout << a.getCost() << endl;
	cout << a.getWarranty()<<endl;
	cout << a.getSeatingCapacity()<<endl;
	cout << a.getFuelType()<<endl;
	cout << "This is the info of the Ford car: " << endl;
	cout << f.getMileage() << endl;;
	cout << f.getPrice() << endl;;
	cout << f.getCost() << endl;
	cout << f.getWarranty() << endl;
	cout << f.getSeatingCapacity() << endl;
	cout << f.getFuelType() << endl;
	cout << "This is the info of the Bajaj bike: " << endl;
	cout << b.getMileage() << endl;;
	cout << b.getPrice() << endl;;
	cout << b.getNumOfCylinders() << endl;
	cout << b.getNumOfGears() << endl;
	cout << b.getCoolingType() << endl;
	cout << b.getWheelType() << endl;
	cout << b.getFuelTankSize() << endl;
	cout << "This is the info of the TVS bike: " << endl;
	cout << t.getMileage() << endl;;
	cout << t.getPrice() << endl;;
	cout << t.getNumOfCylinders() << endl;
	cout << t.getNumOfGears() << endl;
	cout << t.getCoolingType() << endl;
	cout << t.getWheelType() << endl;
	cout << t.getFuelTankSize() << endl;
	return 0;
}
