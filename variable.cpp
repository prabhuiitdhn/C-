#include<iostream>


int main(){
	int variable = 0; //it store the value between -2Billions to 2 Billions takes 4 byte
	unsigned int var = 1; //it does not care about the sign being allocated 1 bit; Now it can store 4 billion +value
	
	char c; //1byte 
	short int s; //2 bytes
	int i; //4bytes
	long l; //4bytes
	long long int L; //8 bytes
	//can be used unsigned
	
	float f = 5.5; //4bytes; Actually this is not float value; It is a double so, need to use 'f' if needs to take value as float
	float f1 = 5.5f; //it is considered as float value not the double 
	double d; //8bytes
	
	bool b;// it take "True" / "False" (0/1) // 1byte of memory
	
	std::cout<<"Variable introduction:"<< variable<< std::endl;
	//checking the soze of variable
	std::cout<<"The size of variable is:"<< sizeof(variable)<< std::endl;
	return 0;
}