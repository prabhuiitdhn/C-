/*
Operator overlaoding:
change the behavior of operator

*/

#include<iostream>

//Defining a structure;
struct vector2 {
	float x, y;
	vector2(float x, float y) : x(x), y(y) {} //constructor which takes x, y as param and x=x, y=y assigining 

											  //adding using the Add function
	vector2 Add(const vector2& other) const {
		//method Add which takes inputs as reference of type of structs as const as(reference address should not change) and 
		//2nd const which does not allow to modify the content of structure
		return vector2(x + other.x, y + other.y);
		//calling constructure which takes value added value as input and Later it will references to struct member.
	}

	vector2 operator+(const vector2& other) const { //Operator overloading using "operator" keyword
													//Overloaded the operator (+)  which takes refenrece as parameter.
		return Add(other);
		//internally called function
	}

	vector2 Multiply(const vector2& other) const {
		return vector2(x * other.x, y + other.y);
	}

	vector2 operator* (const vector2& other) const {
		return Multiply(other);
	}

	bool operator==(const vector2& other) const {
		return x == other.x && y == other.y;
	}
};

//std::ostream //is for output stream.
std::ostream& operator<<(std::ostream& stream, const vector2& other) {
	/*
	This is for operator overloading '<<' operator which takes stream (reference of ostream), and other (reference of vector2)
	*/
	stream << other.x << " " << other.y << std::endl;
	//here "<<" is overloaded
	return stream;
}

int main() {
	vector2 s1(0.2f, 0.9f);
	vector2 s2(0.8f, 0.1f);
	//vector2 result = s1.Add(s2);
	//std::cout << result << std::endl;
	//using Operator overloading
	vector2 resultOperatingAddition = s1 + s2;
	vector2 resultOperatingMultiply = s1 * s2;
	//direct std::cout<< will not work here, bcz '<<' not an overloaded stream which takes in an output stream.
	std::cout << resultOperatingMultiply << std::endl;
	std::cin.get();
	return 0;
}
