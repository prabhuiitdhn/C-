#include<iostream>
/*
vector datastructure from scratch:
	- It is resizable list of data; and it is in heap allocated.
*/


void memcpyScratch(void* dst, const void* src, size_t size_bytes){
	/*
	input: dst pointer as void, bcz we dont know what could be coming in memcpy scratch
		src pointer as void, bcz we don't know what type of array will be coming
		size_t is int (in bytes); which represents the size
	*/
	//typecasting
	char *cdest = (char *)dst;
	//typecasting the destination as char bcz it stores 1 bytes so, copying each bytes from source to destination, will definitely be in char;
	char *csrc = (char *)src;

	for (int i = 0; i < size_bytes; i++) {
		cdest[i] = csrc[i];
		//copying each index of 1bytes value from src to destination.
	}

	return;
}

int main()  
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	//int arr1[] = { 1, 2, 3, 4, 5 };
	//this is the source
	const int n = sizeof(arr1) / sizeof(arr1[0]); //this is for printing the actual value of array size of collections of integers.
	int arr2[n]; //memory allocated for destination array

	memcpyScratch(arr2, arr1, sizeof(arr1)); 

	std::cout << "Size of array1:" << sizeof(arr1); //This will return 20 bcz 5 integer has been put in arr1(5 *4 =20) bytes will be allocating
	std::cout << "\nCheck the value being copied.\n";
	for (int i = 0; i < n; i++) {
		std::cout << arr2[i] << " ";
	}

	std::cin.get();
	return 0;
}