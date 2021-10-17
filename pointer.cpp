//pointer is a integer/number which stores the address
#include<iostream>
#define log(x) std::cout<< x << std::endl;



int main(){
	log("Starting the program.")
	
	//void* ptr = 0; here 0 is invalid bcz memory address would never be 0; we can't write and read from this address; so program will crash
	void* ptrNull = NULL; 
	void* ptr = nullptr; 
	//NULL is valid to use
	//empty pointer; void pointer is just to allocate the pointer, later that can take any datatype to refer the pointer but now It is just an empty pointer.
	int var = 8;
	void* ptr1 = &var; //It can give the address of that 'var'; can say which particular address in memory var is stored.
	
	return 0;
}

#include<iostream>

void ptr1Intro() {
	int var = 8;
	void* ptr = &var;
	int* ptr1 = &var;
	//double* ptr2 = (double*)&var; //type casting; changing the integer type of var to double type
	//type do not matter; It only store the address

	//defrencing; In the address of ptr; using '*'(Value at that address) can read/write the data 
	//*ptr = 9; //It gives error bcz compiler does nto know which type of value that is going to store; bcz it is actually a void.
	*ptr1 = 9; //this can use to change the value; actually *ptr1 has address where (value) can be read/write
	std::cout << "The value is:" << var;
	return;
}

void ptr2Intro() {
	//allocate memory with some certain size
	char* buffer = new char[8]; //telling the compiler to allocate continous (8)* sizeof(char) memory which refered as buffer
	//returning pointer beginneing of mmeory
	memset(buffer, 0, 8); //telling the compiler to store 0 in 8 byte of memory whihc was allocated before
	std::cout << "done.." << std::endl;
	delete[] buffer; //deleteing the memory allocated before
	return;
}

void ptr3Intro() {
	char* buffer = new char[8];
	memset(buffer, 0, 8);
	char** ptr = &buffer;//ths ptr allocate the address of buffer
	std::cout << "Ptr to Ptr.." << std::endl;
	return;
}

int main() {
	//ptr1Intro()
	//ptr2Intro();
	ptr3Intro();
	return 0; 
}
 