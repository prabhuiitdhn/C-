#include<iostream>
#include<random>
#include<chrono>

int main() {
	unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::default_random_engine generator(seed);
	std::normal_distribution<double> distribution(0.0, 3.0);
	double number = abs(distribution(generator));
	std::cout << number;
	std::cin.get();
	return 0;
}