#include <iostream>
#include "Header.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	string ans;
	cout<<"Is the patient admitted as in-patient or out-patient?(in/out): ";
	cin>>ans;
	while(ans != "in" && ans != "out"){
	cout<<"Is the patient admitted as in-patient or out-patient?(in/out): ";
	cin>>ans;	
	}
	Hospital h;
	if (ans == "in"){
		string n;
		int a,c,d;
		double b;
		cout<<"Enter your name>: ";
		cin>>n;
		cout<<"How many days spent in Hospital?: ";
		cin>>a;
		cout<<"What's the daily rate?: ";
		cin>>b;
		cout<<"What are Hospital medication charges?: ";
		cin>>c;
		cout<<"Charges for hospital services?: ";
		cin>>d;
		Patient p1(n,"in",a);
		Hospital h(*p1, c, b, d);
		cout<<"Total charges: "<<h.total(b, d, c);
		
	}
	else{
		string n;
		int c,d;
		cout<<"Enter your name>: ";
		cin>>n;
		cout<<"What are Hospital medication charges?: ";
		cin>>c;
		cout<<"Charges for hospital services?: ";
		cin>>d;
		Patient p1(n,"out",0);
		Hospital h(*p1, c, 0, d);
		cout<<"Total charges: "<<h.total(d, c);
	}
	return 0;
}



