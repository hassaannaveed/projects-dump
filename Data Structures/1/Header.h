#ifndef Header
#define Header
#include <iostream>
using namespace std;
class Patient{
private:
string name;
string type;
int nofdays;
public:
Patient(){
	name = "";
	type = "in-patient";
	nofdays = 0;
}

Patient(string n, string t, int no){
	name = n;
	type = t;
	nofdays = no;
}	
string getname(){
	return name;
}
int getnofdays(){
	return nofdays;
}
void setname(string x){
	name = x;
}
void settype(string x){
	type = x;
}
void setnofdays(int x){
	nofdays = x;
}
};

class Hospital{
private:
Patient *Ob;
int meditationcharges;
double dailyrate;
int hospitalcharges;
public:
void addpatient(Patient *p){
	Ob = p;
}
double total(double dr, int hc, int m){
	return (dr * hc * m);
}
double total(int hc, int m){
	return (hc * m);
}
Hospital(){
	meditationcharges = 0;
	dailyrate = 0.0;
	hospitalcharges = 0;
}
Hospital(Patient *p, int m, double d, int hc){
	addpatient(p);
	meditationcharges = m;
	dailyrate = d;
	hospitalcharges = hc;
}	
};


#endif