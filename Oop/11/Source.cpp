#include <iostream>
#include <fstream>
#include <string>
using namespace std;
struct record
{
	int regno = 0;
	string fullname;
	string program;
	string contact;
};

void input() {
	string topic, content;
	int count = 0;

	cout << "Enter a topic: ";
	getline(cin, topic);

	cout << "Enter at least 10 lines: "<< endl;
	ofstream fs("info.txt", ios::binary);
	if (fs.is_open() == 0)
	{
		cout << "Cannot open file" << endl;
	}
	else {
		fs.write((char*)&topic, sizeof(topic));
		while (count < 10) {
			getline(cin, content);
			fs.write((char*)&content, sizeof(content));
			count++;
		}
		fs.close();
	}
}

void output() {
	ifstream fs("info.txt", ios::binary);
	if (fs.is_open() == 0)
	{
		cout << "Cannot open file" << endl;
	}
	else {
		string topic, content;
		int count = 0;
		int less = 0;

		fs.read((char*)&topic, sizeof(topic));
		while (fs.read((char*)&content, sizeof(content))) {
			count++;
			int words = 0;
			for (int i = 0; i < content.length(); i++) {
				if (content[i] == ' ') {
					words++;
				}
			}
			if (words < 10) {
				less++;
			}
		}

		cout << "Topic: " << topic << endl;
		cout << "Number of lines with less than 10 words: " << less<< endl;

		fs.close();
	}
}

class PhoneDirectory {
private:
	string fullname;
	string phonenumber;
	string email;

public:
	PhoneDirectory() {
		fullname = "";
		phonenumber = "";
		email = "";
	}

	void setFullName(string name) {
		fullname = name;
	}
	void setPhoneNumber(string num) {
		phonenumber = num;
	}
	void setEmail(string e) {
		email = e;
	}
	string getFullName() {
		return fullname;
	}
	string getPhoneNumber() {
		return phonenumber;
	}
	string getEmail() {
		return email;
	}
};

void writeToFile(PhoneDirectory pd) {
	ofstream fs;
	fs.open("phonedir.txt", ios::app | ios::binary);
	if (fs.is_open() == 0)
	{
		cout << "Cannot open file" << endl;
		return;
	}

	fs.write((char*)&pd, sizeof(pd));
	fs.close();
}

void searchByName(string name) {
	ifstream fs;
	fs.open("phonedir.txt", ios::in | ios::binary);
	if (fs.is_open() == 0)
	{
		cout << "Cannot open file" << endl;
		return;
	}

	PhoneDirectory pd;
	bool found = false;
	while (fs.read((char*)&pd, sizeof(pd))) {
		if (pd.getFullName() == name) {
			cout << "Phone number of " << name << " is " << pd.getPhoneNumber() << endl;
			found = true;
			break;
		}
	}

	if (!found) {
		cout << "Record not found!" << endl;
	}

	fs.close();
}

void searchByEmail(string email) {
	ifstream fs;
	fs.open("phonedir.txt", ios::in | ios::binary);
	if (fs.is_open() == 0)
	{
		cout << "Cannot open file" << endl;
		return;
	}

	PhoneDirectory pd;
	bool found = false;
	while (fs.read((char*)&pd, sizeof(pd))) {
		if (pd.getEmail() == email) {
			cout << "Phone number of the person holding email address " << email << " is " << pd.getPhoneNumber() << endl;
			found = true;
			break;
		}
	}

	if (!found) {
		cout << "Record not found!" << endl;
	}

	fs.close();
}

void printDirectory() {
	ifstream fs;
	fs.open("phonedir.txt", ios::in | ios::binary);
	if (fs.is_open() == 0)
	{
		cout << "Cannot open file" << endl;
		return;
	}

	PhoneDirectory pd;
	while (fs.read((char*)&pd, sizeof(pd))) {
		cout << "Full Name: " << pd.getFullName() << endl;
		cout << "Phone Number: " << pd.getPhoneNumber() << endl;
		cout << "Email: " << pd.getEmail() << endl << endl;
	}

	fs.close();
}

int main()
{
	record student[10];
	for (int i = 0; i < 10; i++) {
		string temp;
		cout << "Enter the data of Student " << i + 1 << " :"<<endl;
		cout << "Reg No: ";
		cin >> student[i].regno;
		cout << "Full Name: ";
		cin >> student[i].fullname;
		cout << "Program: ";
		cin >> student[i].program;
		cout << "Contact: ";
		cin >> student[i].contact;
	}
	fstream fs;
	fs.open("Record.txt", ios::binary | ios::out);
	if (fs.is_open() == 0)
	{
		cout << "Cannot open file"<<endl;
	}
	else
	{
		// writing a structure to binary file
		fs.write((char*)&student, sizeof(student));
	}
	fs.close();
	fs.open("Record.txt", ios::binary | ios::in);
	if (fs.is_open() == 0)
	{
		cout << "Cannot open file"<<endl;
	}
	else
	{
		cout << "Printing the sturcture" << endl;
		for (int i = 0; i < 10; i++) {
			cout << "Student " << i + 1 << endl;
			cout << "regno=" << student[i].regno << endl;
			cout << "Full Name=" << student[i].fullname << endl;
			cout << "Program=" << student[i].program << endl;
			cout << "Contact=" << student[i].contact << endl;
		}
	}
	fs.close();
	input();
	output();
	PhoneDirectory pd1;
	pd1.setFullName("ahbfbja");
	pd1.setPhoneNumber("127890");
	pd1.setEmail("fwfwngwg");
	writeToFile(pd1);

	PhoneDirectory pd2;
	pd2.setFullName("JNCbe");
	pd2.setPhoneNumber("43534535");
	pd2.setEmail("dsniwunfwi");
	writeToFile(pd2);

	searchByName("wfbewkf");
	searchByEmail("fwefbwhbf");
	printDirectory();
	return 0;
}