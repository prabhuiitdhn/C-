/*
https://www.youtube.com/watch?v=3cm0VckC8q0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=52
How to return multiple in function.
//vector is stored in heap, where array is stored in stack;
//std::vector
1. Using struct returnMultiple1
2. using void; pass the parameter which has tp be returned.
3. use tuple and pair (a class which contains mutiple amount of variable )

*/


#include<iostream>
#include<array>
#include<string>
#include<vector>
#include<utility>
#include<tuple>
#include<functional>


struct usingStructReturn1 {
	int a;
	double b;
};

std::pair<std::string, int> returnMultiple5() {
	std::string vs = "Hello";
	std::string vp = "Prabhu";
	return std::make_pair(vs, 10);
}


std::tuple<std::string, std::string> returnMultiple4() {
std::string vs = "Hello";
std::string vp = "Prabhu";
int val = 10;

return std::make_pair(vs, vp);
}


std::vector<std::string> returnMultiple3() {
	//return type is the vector which consists string inside.
	std::string vs = "Hello";
	std::string vp = "Prabhu.";

	std::vector<std::string> results(2);
	//reseving the memory of vector where std::string will be an element under it.
	results[0] = vs;
	results[1] = vp;
	return results;
}

std::array<std::string, 2> returnMultiple2() {
	//returning two string at a time in the form of std::array
	//std::array will be stored 
	std::string vs = "hello";
	std::string vp = "Prabhu";
	std::array<std::string, 2> results;

	results[0] = vs;
	results[1] = vp;

	return results; 
}

usingStructReturn1 returnMultiple1()
{
	usingStructReturn1 r1;
	r1.a = 1;
	r1.b = 2.0;
	return r1;
}

int main() {
	/*
	retur1 r2;
	r2 = returnMultiple1();
	std::cout << r2.a << " " << r2.b;
	*/

	/*
	std::array<std::string, 2> output = returnMultiple2();
	std::cout << output[0] << " " << output[1] << std::endl;
	*/

	/*
	std::vector<std::string> output = returnMultiple3();
	std::cout << output[0] << " " << output[1] << std::endl;

	*/

	/*
	auto output = returnMultiple4();
	std::cout << get<0>(output);
	*/

	/*
	auto output = returnMultiple5();
	std::cout << output.first() << " "<< output.second();
	*/

	


	std::cin.get();
	return 0;
}