#include<iostream>

/*
const: It promise; the assigned var is not being changed after initiliasing with it.
uses:
with pointer.
const int* d = new int;//Will not allow to change the content of d
int* const d = new int;//will allow to chaneg the content of d; but will not allow to reassign the pointer to anoter pointer.
const int* const d= new int; //In this case, will not be allowed to change the content and reassign new pointer to this pointer.

*/

class Entity {
private:
	int m_X, M_y;
	int *Mptr_X;
	mutable int x; //varibale which could modify later; It could modify when method calling is "const".
	//so if the method is const and need to modify this variable, in this case, 'mutable' used varibale can be modified.
public:
	const int* const GetXptr() const {
		//returning pointer which can't modify
		//content of pointer could not modify 
		//anything of this class(actual Entity class  ) in this method can't modify
		return Mptr_X;
	}

	int GetX() const {
		x = 4;//It is defined mutable, and it could change If needed.
		//this method used "const" right side of method will never allow to modify anything from class (data members.)
		//[]m_x = 2; //invalid bcz we can used const whic will not allow to modify anything (varibale)
		return m_X;	
	}

	void SetX(int x) {
		m_X = x;
	}
};

void printEntity(const Entity e) {
	//using const here is "not allowing to copy the entity bcz copying"; 
	//we are not allow to copy 
	std::cout << e.GetX() << std::endl;
}

int main() {
	//for class
	Entity e;
	printEntity(e);

	const int MAX_AGE = 56;

	int a = 5; //this could change later in the code 
	//[chan]
	const int b = 3; //this seems very difficula to modify
	
	int* c = new int; //allocating space for pointer a of type  (int)
	*c = 2;
	c = (int *)&MAX_AGE; //changing the content of c

	std::cout << c << std::endl; //it will print 56 here; Modified using pointer.

	//using pointer
	const int* d = new int; //It is like you can't change the content of d
	
	int* const d = new int; //It can change the content of pointer but can't reassign another pointer to itself.

	//*d = 2; //it is not valid bcz const is not allowing to change it.
	d = (int *)&MAX_AGE;



	std::cout << c << std::endl; //it will print 56 here; Modified using pointer.


	return 0;
}