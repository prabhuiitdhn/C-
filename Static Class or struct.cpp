//static method will not call non-static variable

#include<iostream>

struct entity {
	//int x, y;
	/*
	static int x, y;
	void print() {
	std::cout << x << "+" << y << std::endl;
	}
	*/

	int x, y;
	//this will not work bcz static method will not take access of non-static variable x, y
	static void print() {
		std::cout << x << "+" << y << std::endl;
	}

};

//this will work, bcz we are acessing the non-static variable in static method usng object out of struct/class  

static void print(entity e) {
	std::cout << e.x << "+" << e.y << std::endl;

}

int main() {
	entity e;
	e.x = 2;
	e.y = 4;
	e.print(); //it will be printing rhe exact same value;

	//But if change the entity variable as static, 
	entity e1;
	e1.x = 5;
	e1.y = 6;
	e.print();

	//both printi value will have the same value print; bcz if variable ar static, both entity are referring to one variable x, y

}