/*
https://en.cppreference.com/w/cpp/language/lambda
https://www.youtube.com/watch?v=mWgmBBz0y8c&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=59
Lambda: anomynous function, define without having actual function
 usecase: Whenever we have function pointer, we can use lambda. It is like define a function without having to define a function.
*/

#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>

void functionCalled(std::vector<int>& vector,
	void(*function)(int)) {
	//first arg: passing argu,ent as passing by reference
	//second arg(void(*function)(int)): function pointer, which takes (int) as parameter, and perform whatever being defined to perform in function(parameter) of main function which is being called.
	for (int vectorElement : vector) {
		//extracting the vectorelement
		function(vectorElement);//calling the functionPointer.
	}

}

void functionCalled1(std::vector<int>& vector,
	const std::function<void(int)>& func) {
	//first arg: passing argu,ent as passing by reference
	//second arg(void(*function)(int)): function pointer, which takes (int) as parameter, and perform whatever being defined to perform in function(parameter) of main function which is being called.
	for (int vectorElement : vector) {
		//extracting the vectorelement
		func(vectorElement);//calling the functionPointer.
	}

}

//need to pass the vector and print the element using lambda/anonymous function/in function calling as parameter like function pointer
int main() {

	std::vector<int> data; //defging the vector
	//filling the value in data
	data.push_back(1);
	data.push_back(2);
	data.push_back(3);
	data.push_back(4);

	//this is an inline function; which takes (int) as paramter and perform the defintion.
	//lambda here is sending as function defined, but in definition it is returning as function pointer.
	auto lambda = [](int a) { std::cout << a << " "; };
	//[ captures ] ( params ) lambda-specifiers requires(optional) { body }
	//[]: called as 'captures'
	//https://en.cppreference.com/w/cpp/language/lambda
	//captures: takes outside variable which is defined outside of function defined. 
	std::cout << "Function calling without captures taking param." << std::endl;
	//functionCalled(data, lambda);


	//[Captures with outisde parameter.]
	int b = 10;
	auto lambda1 = [&b](int a) { std::cout << a+b << " "; }; //passing by reference
	//auto lambda1 = [b](int a) { std::cout << a + b << " "; }; //passing by value
	//captures [taking outside parameter]
	//we can pass directly the value, but with &b (by reference) too
	std::cout<<std::endl;
	std::cout << "Function calling with captures taking param." << std::endl;
	//functionCalled1(data, lambda1);

	auto lambda2 = [b](int a) mutable { b = 12; std::cout << a + b << " "; };
	//inside the function If we do want to change anything we can use "mutable" keyword which allows to modify the variable inside lambda function.
	std::cout << std::endl;
	std::cout << "Function calling with captures taking param and modifying the variable.." << std::endl;
	//functionCalled1(data, lambda2);

	//usecase of lambda: finding the element if this is in a vector
	//used std::find_if (from algorithm)

	auto it = std::find_if(data.begin(), data.end(), [](int value) {return value > 3; });
	//std::find_if is the function which is inside of <algorithm> 
	//It mainly iterates though the data(vectors) and try to look the value which is greater than 3
	//It mainly return the value which is greater than 3;
	std::cout << "Found the value in vector:" << *it << std::endl;

	std::cin.get();
	return 0;
}