#include<iostream>

using namespace std;

inline double product(float a, float b){ return a * b;}

int main(){
	float a= 9.0;
	float b = 10.9;
	std:: cout<< "the inline product output is:" << product(a, b)<<endl;
	return 0;
}