#include<iostream>
#include<chrono>

struct Timer {
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;

	Timer() {
		//creating construtor which takes time to process 
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer() {
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		float ms = duration.count() * 1000.0f; //comverting to millisecond.
		std::cout << "Time took:" << ms << "s" << std::endl;
	}
};
void functionToCheck() {
	Timer timer;
	for (int i = 0; i < 50; i++) {
		std::cout << "Hello\n";
		//std::endl takes much time to process that's why we can use \n for new line
	}
}
/*
int main() {
functionToCheck();
std::cin.get();
return 0;
}
*/
