#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;

float costs1(float);
float costs2(float);
float costs3(float);

int main ()
{
	float A=175;
	float B=200;
	float C=210;
	cout<<"\n Hazineh Khane Aval: "<<costs1(A);
	cout<<"\n Hazineh Khane Dovom: "<<costs2(B);
	cout<<"\n Hazineh Khane Sevom: "<<costs3(C);
	getch();
	return 0;
}
float costs1(float a){
	return a+2500*5+0.025*100*a;
}
float costs2(float b){
	return b+2800*5+0.025*100*b;
}
float costs3(float c){
	return c+2050*5+0.020*100*c;
}