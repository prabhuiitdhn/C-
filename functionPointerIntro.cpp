/*
Function Pointer: Assign a function to a variable.
*/

#include<iostream>
/*
*/
void Helloworld() {
	std::cout << "Hello, World" << std::endl;
}

void HelloworldWithParam(int a) {
	std::cout << "Hello, World:" << a <<std::endl;
}


int main() {
	//The way of calling the function
	Helloworld();
	//way to use auto and change to fucntion pointer
	
	//auto function = Helloworld(); //It wont work bcz Helloword() is not retruning, It is returning void

	auto function = Helloworld; //Actually Implicit conversion is happening, Helloworld (here has address but It automatically assinging to function which is in auto)
	//It works, and function becomes function pointers. It is same like auto function = &Helloworld;
	//function actually keep address
	//It actually say, find the address of Helloworld which is allocated for cpu instruction. and It retreives the location.f
	std::cout << function << std::endl;
	//It calls the function, actually It keeps the adress of Helloworld() function, when I am calling this, saying to compiler to execute it, and referinfg to this address and calling the function
	std::cout << "First time." << std::endl;
	function(); //calling function/Helloworld() 1st time
	//void(*function)(parameter) [This is what happening inside. It become function pointer.]
	std::cout << "Second time." << std::endl;
	function(); //calling function/Helloworld() 2nd time

	std::cout << "Third time." << std::endl;
	void(*function1)() = Helloworld; //This will work too, bcz this is what happening when we call "function();"
	function1();

	//we can also use using typedef/alias

	typedef void(*Helloworldfunction)();
	std::cout << "Using typedef." << std::endl;
	Helloworldfunction function3 = Helloworld;
	function3();



	//With parameter
	auto functionParam = HelloworldWithParam;
	functionParam(1);


	typedef void(*HelloworldWith)(int);
	HelloworldWith function4 = HelloworldWithParam;
	function4(2);
	function4(10);

	//Actual use of function pointer in real time



	std::cin.get();
	return 0;


}