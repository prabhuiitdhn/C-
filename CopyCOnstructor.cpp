/*
copying: It is mostly refer to copying the data
copy constructor: It is being/needed when you have to copy all the member defined in class. but datamember of source and destination construtor should refer to different memory in space.


*/

#include<iostream>
#include<string>

class String { //this is string class from scratch
private:
	char* m_buffer; //defining the bufferForChar
	unsigned int charSize;
public:
	String(const char* string) {
		//finding the length of string
		charSize = strlen(string); //This will return the size of string parameter in constructor
		//strlen(param) is a c function in <string> which return the sizeof param
		m_buffer = new char[charSize +1];//m_buffer was a pointer but not assigned the size of it, so, using new keyword, we allocated the memory in heap with size defined.
		/*Two ways of copying the string(param) to m_buffer
		1. Using the for loop
		for (int i = 0; i < charSize; i++) {
		m_buffer[i] = string[i];
		}
		2. using memcopy(dest, src, size)
		*/
		memcpy(m_buffer, string, charSize+1); //"This will not add the null termination; and It would print some random char in the place of null termaintion" so, we need to increase the size by 1.
		//After adding +1 in charSize would definitely be adding null termination by itself.
	}

	//copy constructor
	/*
	ONE WAY OF WRITING COPY CONSTRUCTOR
	String(const String& other) {
		//takes the reference of same class.
		//const which will not be modifying the type
		//It used the same concept of memcpy of copying all the members of source String(Class)
		memcpy(this, &other, sizeof(String));
		/*
		C++ will be doing exactly same in copy constructor.
		memcpy(src, destination, size)
		this is refering to current object creating for String class, &other is destination(using reference)
		
	}
	*/

	//String(const String& other) = delete; //It is when the case of not allowing to copy the constructor.

	String(const String& other):charSize(other.charSize) {
		//own copy constructor which does the deep copy
		//creating new memory for m_bbufer
		m_buffer = new char[charSize + 1];
		memcpy(m_buffer, other.m_buffer, charSize + 1);
	}

	~String() {
		delete m_buffer;
	}; 

	friend std::ostream& operator<<(std::ostream& stream, const String& s);
	//using freind here, bcz we are trying to access the private member of class members.

	char& operator[] (unsigned int index) {
		//This function is mainly for returning the "char" at index of m_buffer
		return m_buffer[index];
	}

};


//custom operator overloading for "<<" for printing.
std::ostream& operator<<(std::ostream& stream, const String& s) {
	stream << s.m_buffer; //calling m_buffer from private member of class String; It was not possible to call private member of class without using Freind.
	return stream;
}


int main() {
	String string= "Prabhu.";
	String String1 = string;//Trying to copy the memory being allocated by 'string' to string1; and It will crash the program bcz same memory (m_buffer) will be refering for both of the String Object; and after calling one time constructor, It will call destructor which will deallocate the memory which was already allocated
	//so, clearning the memory twice which is already clear will crash the program; and where comes the concepts of "Copy COnstructor".
	String1[2] = 'E'; //It will not change the string
	//It is being used with copyConstructor.
	std::cout <<string<<std::endl;
	std::cout << String1 << std::endl;
	std::cin.get();
	return 0;

}