//array is collection of variable.
//array has contigous set of data.

//using with 'new' is for keeping the memory alive till the program terminates.
#include<iostream>
#include<array>

int main(){
	int example[5];
	//filling the value in the index
	example[2] = 4;
	//or using ptr
	int* ptr = example;
	*(ptr+3) =8; //ptr is for 0th index of exmaple and +3 (shifting to 3rd index of ptr) and using dereferencing (asterik) can fill the value.
	*((int*)((char*) ptr + 12)) = 8;//Another way to put the value in 3rd index of example, if ptr has char datatype.
	//12-> 3(index)x4(sizeof(int))
	//char ptr; will store one byte of storgae in memory that's why need to shift 12
	//typecasting char to integer tyep and dereferencing for setting the value
	
	 
	//Store into heap memory
	int* another = new int[5];//created into the heap; alive until program terminate
	//use 'delete' to  delete memory
	delete[] another; //will delete the memory stored in heap
	
	std::array<int, 5> anotherExample; //another way to initialise the array
	int size = anotherExample.size();
	
	std::cout<<size<<std::endl;
	
	return 0;
}