/*
Template: Blueprint of code. It is used when we do need to write same template code again and again, but with different input parameters.
what if we do need to print the value but with different data type, in this case, we will have to write the code again and again, that's why we use 'template'
Template don't exist until we call it. It worked on compilation time but it actually exist when it is being called. 
*/


#include<iostream>

//Defined template.
//template<anydatatype anydatatype_name>
template<typename T> //Defined template which will evaluate at the time of compile time.
//defined the function which has to written again and again using tmeplate
void print(T value) {
	std::cout << value << std::endl;
}


//to allocate the memory again and again, we can use template where typename will be "which type of array wants to create", and  "N is the size in int says how much size of array would be creating"
template<typename T, int N>
class array
{
public:
	T m_array[N];
	int getSize() const{
		return N;
	}
};


int main() {
	
	//print(10); //calling the function which has 'int' type parameter.
	//print(10.5); //calling the same function which has 'double' type parameter.
	//print("Hello"); //calling the same function whuch has 'string' type parameter. 

	//also, we can call this function like this
	//print<int>(10);//saying compiler that function 'print' will take datatype int

	array<int, 5> p;
	std::cout<<p.getSize()<<std::endl;
	array<double, 10> p;
	std::cout << p.getSize() << std::endl;
	std::cin.get();

	return 0;
}