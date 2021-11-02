/*
Type punning: (getting around of type system of c++); accessing the memory of one type and treating as different.
(sometime if some memory which is being allocated for integer, but we want to grab the memory and treat it as like double/class/ other now)
It is like low-level-memory access, which may require in the case of performance of c++ improvement.
Usecase:
	whatIf I wanted to convert the elements of struct to an array?? using type-puning 
takeaway: we can acess one datatype variable datatype address and treat it as different.

*/

#include<iostream>

struct kuchhBhi {
	int x=2, y=3;
}e;


int main() {
	//suppose we have int variable, and wanted to acess it as double
	int a = 50; //'a' is initialised here as integer
	double value = a; //implicit conversion.
	//but we are tying to access the 'a' as double; It is actually like conversion.
	//The adress of a and value would definitely be different.
	
	//so, If we have memory xxxx of a which is integer type but what if we wanted to access this memory and treat it like double
	//That's when come concepts of type_Punning in c++
	double value_using_puning = *(double*)&a;
	//[so, we first get adress of a(&a:gives integer pointer) then convert/cast to double* (double Pointer)]
	//(double*)&a - becomes the pointer of adress (&a)
	//so, need to derefence it to get the value; but this time, the value will be type of double using the same memory allocated (int type)
	//If we check into the memory then both will have same memory allocated.
	std::cout << value_using_puning << std::endl;
	 


	std::cout << "Converting to Struct to array." << std::endl;
	//int x = e.x (we can access)
	int *position = ((int*)&e);
	//getting the address of object (struct;e) casting to int* and initialising to (array) position*
	std::cout << position[0] << " " << position[1] << std::endl;

	std::cout << "Conveting struct to Char* & to array." << std::endl;
	int y = *((char*)&e + 4);
	int y_more = *(int*)((char*)&e + 4);
	//We are tying to acess y of struct KuchhBhi so,
	//accessing the &e (address of KuchhBhi) -> casting to char* (but it allocated 1 byte; currently stores 'x') 
	//so need to +4 bytes to get y from intial address of x in struct KuchhBhi
	std::cout << y<<" "<<y_more << std::endl;

	std::cin.get();
	return 0;
}
 