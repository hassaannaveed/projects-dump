#include <iostream>
#include "header.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(void) {


	int **seat=new int *[13];
	for(int i=0;i<13;i++) {
		seat[i]=new int [6];
	}
	plane(seat);
	
	
	cout<<PrimeNumber(7);
	
	
	int *array = new int [7];
	for(int k=0;k<7;k++) {
		array[k]=rand();
	}
	ArraySorting(array,7);
	return 0;
	

}