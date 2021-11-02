/*
chrono Library: https://en.cppreference.com/w/cpp/chrono
timing: 
<chrono> library
*/

#include<iostream>
//This is for time.
#include<chrono>
//this is for threading
#include<thread>

using namespace std::literals::chrono_literals;
/*
*/
int main() {

	auto start = std::chrono::high_resolution_clock::now(); //[It gives the current time.]
	//here auto keyword used to get the same type returning from the high_resolution_now()
	std::this_thread::sleep_for(1s);
	//saying to pause the current thread for 1 second
	auto end = std::chrono::high_resolution_clock::now();

	std::chrono::duration<float>  duration = end - start;
	//std::chrono::duration helps to calculate the duration in second.
	std::cout << duration.count() <<"s" <<std::endl;
	//this will print the time between start and end in second.

	std::cin.get();
	return 0;
}