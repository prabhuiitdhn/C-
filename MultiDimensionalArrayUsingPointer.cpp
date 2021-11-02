 /*
 multidimensional array: Is array of arrays.: A collections of array.
 in pointer: collection of pointer of array
 */

#include<iostream>

int main() {
	//allocation of heap array
	int* array = new int[50]; //allocation of 50 continous memory allocation of int pointer type.
	//One dimensional array
	//It allocation 200 bytes (40 xsizeof(int)) allocating the memory

	int** a2d = new int*[50];
	//Buffer of pointer array; It is pointer of collection of int pointer.
	//It is also allocation 200 bytes of  memory but It is storing the pointer(addrees)
	
	for (int i = 0; i < 50; i++) {
		a2d[i] = new int[50];
		//so here each index of a2d is storing a pointer and each pointer now we are storing a array of size 50
	}
	
	 
	//3d allocation of memory
	//each threePointer allocate the collection sof doublePointer
	//& each double pointer allocate the colllection of singlePointer
	//and each single poointer refer to the array
	
	int ***a3d = new int**[50];

	for (int j = 0; j < 50; j++) {
		a3d[j] = new int*[50];
		for (int i = 0; i < 50; i++) {
			a3d[j][i] = new int[50];
		}

	}
	

	//the above method of allocating memory is much more slower bcz each pointer is refered to random array but each compilter has to look for address and get the value;
	//bcz it is not being allocated in contigous memory; bcz it is not in continous memory, compiler executes slower the program that's we do allocate contigous memory and use index concepts to put the valye

	int *array = new int[5 * 5]; 
	//alos becoming the 2d array and accessing using index
	//We do have single pointer but allocating continous memory of 25 instead of 5 * (collection of array which has 5 element)

	//This way of writing is much more faster than previous way of writing.
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			array[j + i * 5] = i + j;
			//inner_index + outer_index * width of array
			//usng this indexing concpets allocation is in contigous in memory
		}
	}


	delete[] a2d; //used for releasing the allocated memory of 200Bytes
	delete[] a3d;
	return 0;
}