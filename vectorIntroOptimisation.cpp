/*
Optimising the vector code, which cause problem with state-of-art implementaion, bcz it could allocated much more space than neccessary
*/

#include<iostream>
#include<string>
#include<vector>

class vertex {
public:
	float x, y, z;
	vertex(float x, float y, float z):x(x), y(y), z(z)
		//defing constructor
	{
	}

	vertex(const vertex& Vertex):
		//copy constructor (taking constructor as paramter and copying the member of constructor.)
		x(Vertex.x), y(Vertex.y), z(Vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};

int main() {
	//std::vector<vertex> vertices(3);//It construct 3 constructor
	std::vector<vertex> vertices;
	//Optimisation technique1; where reserving the memory to copying the constructor member.
	vertices.reserve(3); //We just saying the compiler to allocate memory for <3> bcz we do know we are going to allocate it.
	//allocating the memory so, It should not copy again and again
	//using push_back, we still get copy of vertex class inside the main function and put the value
	vertices.push_back(vertex(1, 2, 3));
	vertices.push_back(vertex(4, 5, 6));
	vertices.push_back(vertex(7, 8, 9));

	//Optimisation technique2
	//emblace_back: which doe not create a vertex in main, instead it just put the value in actual vector without copy vertex in main
	//we just pass parameter, we say please place the value of vertex in verctor without copying into the main
	//if we run this, we wont be seeing the "copied!" bcz it does not require to copy the constructor in main
	//Afaster way of copying
	vertices.emplace_back(1, 2, 3);
	vertices.emplace_back(4, 5, 6);
	vertices.emplace_back(7, 8, 9);

	std::cin.get();
	return 0;
}