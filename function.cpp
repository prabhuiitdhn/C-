#include<iostream>

/*return_type function_name(parameters, parameters){
	//body of fucniton
	//return
*/

int multiply(int a, int b){
	return a * b;
}

void multiplyAndLong(int a, int b){
	int result = multiply(a, b);
	std::cout<<"The return value is:"<< result<< std::endl;
	return;
}



int main(){
	/*
	int  result;
	result = multiply(5, 10);
	std:: cout<<"The value of mult:"<<result<<std::endl;
	*/
	multiplyAndLong(10, 2)
	std::cin>>get(); //will be taking some input; keyboard 
	return 0;
}