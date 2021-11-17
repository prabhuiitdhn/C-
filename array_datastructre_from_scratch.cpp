#include<iostream>

//https://www.youtube.com/watch?v=TzB5ZeKQIHM&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=95

template<size_t s>
//this tempplate can be used to allocate the memory dynamically
template<typename T, size_t s>

class Array 
{
	//datastructure from the scratch of getting the size dynamically and allocating the memory
public:
	/*

	Array(int size) 
	{
		//m_Data = (int*)alloca(size * sizeof(int));
			//alloca: The alloca() function allocates size bytes of space in the stack frame of the caller.
			//this is to allocate the memory of size
			//But also alloca can not be optimised.

		//so template can be used for the concept of allocating the memory with size


	}
	*/

	//to keep track of size
	int Size() const { return s; }

private:
	//int* m_Data;
	//int m_Data[s];//using template1
	T m_Data[s];

};

int main() 
{
	//one way of initialising the array
	int size = 5;
	int* array = new int[size];

	//2nd way of initialing the array
	int array2[5];//
				  //int array2[size]; //this is not possible bcz size should be constant

				  //Creating the datastructure from scratch

	//3rd approach of initialising the array
	//this is after memory allocated using alloca()
	//Array data(size); //This is the class/constructor which has been created for allocating the memory dyncamically

	//using template; 10 is considered as size_t of s and allocating the memory of 5
	//Array<10> data;//Using first template; But this is only for the integrer type of allocating

	Array<int, 5> data; //using template2
	data.Size(); //will return the size of data

	//static_assert: assert the error

	//Array<std::string, data.Size()> newarray;
	//this helps use to create the new arraof sizeof data.size() and type will be std::string bcz we do have template defined it.



	return 0;

}