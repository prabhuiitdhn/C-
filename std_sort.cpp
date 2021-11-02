/*
https://en.cppreference.com/w/cpp/algorithm/sort
https://www.youtube.com/watch?v=x0uUKWJzSO4&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=65
Sorting in c++; <algorithm>
*/

#include<iostream>
#include<vector>
#include<algorithm>
//std::sort is in <algorithm>
#include<functional>
//To use std::greater<int>() function; which can be used to send it as argument in std::sort(_, _, predicate)

int main() {
	std::vector<int> data = { 1, 4, 5, 3, 0, 9 };
	//need to sort the vector in ascending order.
	//std::sort(first, last); automatically sort it to ascending order.
	//[It just take the argeument as startOfTheVectorIterator, endOfTheVectorIterator]
	
	//std::sort(first, last, predicate); [It just take the argument as startOfTheVectorIterator, endOfTheVectorIterator]
	std::sort(data.begin(), data.end());
	// It is being sorted.
	std::cout << "Without predicated." << std::endl;
	for (int value : data) {
		std::cout << value << " ";
	}

	std::sort(data.begin(), data.end());
	//Using predicate (any function or lambda)
	std::cout << "\nWith Predicate." << std::endl;
	std::sort(data.begin(), data.end(), std::greater<int>());
	//sorted based on greatest value 
	for (int j : data) {
		std::cout << j << " ";
	}

	//Using lambda
	//[captures](param1, param2){defintion of lambda function}
	std::cout << "\nUsing Lambda!" << std::endl;
	std::sort(data.begin(), data.end(), [](int a, int b) {
		return a < b;
		//returning the element first in compare(a, b) 
	});
	for (int j : data) {
		std::cout << j << " ";
	}

	std::cin.get();
	return 0;
}
