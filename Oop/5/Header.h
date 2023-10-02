#pragma once
class Date {
private:
	int year;
	int month;
	int day;
public:
	int getyear(void) {
		return year;
	}
	void setyear(int yr) {
		year = yr;
	}
	int getmonth(void) {
		return month;
	}
	void setmonth(int mnth){
		month = mnth;
	}
	int getday(void) {
		return day;
	}
	void setday(int day) {
		this->day = day;
	}
	bool isLeapYear() {
		if (this->year % 4 == 0) {
			if (this->year % 100 == 0) {
				if (this->year % 400 == 0) {
					return true;
				}
				else {
					return false;
				}
			}
			else {
				return true;
			}
		}
		else {
			return false;
		}
	}
	int daysBetween(Date d) {
		if (this->day > d.day) {
			return(this->day - d.day);
		}
		else if (this->day < d.day) {
			return(d.day - this->day);
		}
		else {
			return 0;
		}
	}
};


class Sale {
private:
	double itemCost;
	int itemQuantity;
	double taxRate;
public:
	double getitemCost(void) {
		return itemCost;
	}
	void setitemCost(double cost) {
		itemCost = cost;
	}
	int getitemQuantity(void) {
		return itemQuantity;
	}
	void setitemQuantity(int qt) {
		itemQuantity = qt;
	}
	int gettaxRate(void) {
		return taxRate;
	}
	void settaxRate(double rate) {
		taxRate = rate;
	}
	double getTax(void) {
		return(itemCost * taxRate);
	}
	double getTotal() {
		return(itemCost + getTax());
	}
	Sale() {
		itemCost = 0;
		itemQuantity = 0;
		taxRate = 0;
	}
	Sale(double cost, int quantity, double rate) {
		itemCost = cost;
		itemQuantity = quantity;
		taxRate = rate;
	}
};

class Storage {
private:
	int* items;
	int capacity;
	int counter;
	
public:
	Storage(int c) {
		capacity = c;
		items = new int [c];
		counter = 0;
	}
	bool isFull(void) {
		if (counter == capacity) {
			return true;
		}
		else {
			return false;
		}
	}
	void insert(int val) {
		if (isFull() == false) {
			items[counter] = val;
			counter = counter + 1;
		}
	}
	bool search(int val) {

		for (int i = 0; i < counter; i++) {
			if (items[i] == val) {
				return true;
			}
		}

	}
	void remove(int val) {
		for (int i = 0; i < counter; i++) {
			if (items[i] == val) {
				for (int j = i; j < counter; j++) {
					items[j] = items[j + 1];
				}
			}
		}
	}
	void Print() {
		for (int i = 0; i < counter; i++) {
			cout << items[i]<<endl;
		}
	}
};

class CoffeeShots {
private:
	string type;
	double price;
	float volume;
	char size;

public:
	CoffeeShots(string t, double p,float v) {
		type = t;
		price = p;
		volume = v;
		if (v > 0 && v < 50) {
			size = 's';
		}
		else if (v > 51 && v < 75) {
			size = 'm';
		}
		else if (v > 75) {
			size = 'l';
		}
	}
	string gettype(void) {
		return type;
	}
	double getprice(void) {
		return price;
	}
	float getvolume(void) {
		return volume;
	}
	char getsize(void) {
		return size;
	}
	void setprice(double s) {
		price = s;
	}
	void upSize() {
		volume = volume + 5.0;
		if (volume > 0 && volume < 50) {
			size = 's';
		}
		else if (volume > 51 && volume < 75) {
			size = 'm';
		}
		else if (volume > 75) {
			size = 'l';
		}
		price = price + 5.0;
	}
	void spillOver(float ml) {
		volume = volume - ml;
	}
};

CoffeeShots& createMyCoffee(void) {

	string a;
	double b;
	float c;
	cout << "Enter the type of the coffee: ";
	cin >> a;
	cout << "Enter the price of the coffee: ";
	cin >> b;
	cout << "Enter the volume of the coffee: ";
	cin >> c;
	CoffeeShots coffee(a, b, c);
	return coffee;
}

class Block {
private:
	int length;
	int breadth;
	int height;
	string colors;
	string materials;
public:
	Block() {

	}
	int getlength(void) {
		return length;
	}
	int getbreadth(void) {
		return breadth;
	}
	int getheight(void){
		return height;
	}
	string getcolors(void) {
		return colors;
	}
	string getmaterial(void) {
		return materials;
	}
	void setlength(int l) {
		length = l;
	}
	void setbreadth(int b) {
		breadth = b;
	}
	void setheight(int h) {
		height = h;
	}
	void setcolors(string c) {
		colors = c;
	}
	int getVolume(void) {
		return (length * breadth * height);
	}
	int getArea(void) {
		return (2*(length + breadth + height));
	}
	void Print(void) {
		cout << "Length is: " << length<<endl;
		cout << "Breadth is: " << breadth<<endl;
		cout << "Height is: " << height<<endl;
		cout << "Material is: " << materials<<endl;
		cout << "Color is: " << colors << endl;
		cout << "Volume is: " << getVolume() << endl;
		cout << "Area is: " << getArea() << endl;
	}
};