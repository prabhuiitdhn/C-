/*

std::array
It is much more efficient while writing the array code. std::array is actually keeps tracks of datatype and size. 
If we do have to print the array sometime, it would help in much more efficient way to keep track of size of it.
using std::array<dataType, sizeofarraytobe> data;
to get the shape data.size()
takeaway: We should use it in the place of state-of-art way of using array bcz it is similar with much more benefits (ex: not keeping the track of size, sort, index bouncing)
*/

#include<iostream>
#include<array>

template<std::size_t SIZE>
//If we dont want to keep track of initialised array size while passing the array to parameter, then we can use template for size.
void printArray(std::array<int, SIZE>& array1) {
	//using std::array, we can use std::sort() and all STL in c++
	int sizeofArray = array1.size();
	for (int i = 0; i < sizeofArray; i++) {
		std::cout << array1[i] << " ";
	}
}

int main() {

	//defing the array using std::array

	std::array<int, 2> data;
	//putting the value in array
	data[0] = 1;
	data[1] = 2;
	data[2] = 3; //Even after data has only the size of 2, It will take try to put the value bcz it will use bounce checking.
	//If size is limiting up, then nothing to worry about, bcz It check and bounce automatically.
	//getting the size of array
	std::cout << "The size of array:" << data.size() << std::endl;
	//Much easier to print the array
	printArray(data);

	std::cin.get();
	return 0;
}