/*
Arrow Operator: It dereference the pointer to call the methods/member of class.
If object of class is being created using 'new' or been allocated to heap memory-> will have to use arrow key to derefence and call the functions and members of class
*/

#include<iostream>

class Entity {
public:
	int x;
public:
	void print() const {
		std::cout << "Hello!" << std::endl;
	}
};

//basic Scopedptr which automatically delete after calling constructor
class ScopedPtr {
private:
	Entity* m_obj;
public:
	ScopedPtr(Entity* entity) : m_obj(entity) {
	}

	ScopedPtr() {
		delete m_obj;
	}

	Entity* operator->() {
		return m_obj;
	}
};

class vector3 {
public:
	float x, y, z;
};

/*
int main() {

Entity e; //'e' object is not being created using pointer so, it would be able to call print method from the class without arrow
e.print();

Entity* ptr = &e;
//ptr.print()//this will not work bcz ptr is pointer object for Entiy class
//so, to call the method, we need to dereference the ptr
(*ptr).print();//valid; can be iused bcz we have dereferenced the ptr

Entity* ptr1 = &e;
ptr1->print(); //we can directly used arrow key to call the method in class.Internally '->' dereference and then call the method.
std::cin.get();


//We can also use -> as operator overoading to call the function

ScopedPtr entity = new Entity();
entity->print(); //operator overloading.
//-> is being used to call the method in Entity()



//Arrow operator used for getting the offset

int offset = (int)&((vector3*)0)->x;
std::cout << "The offset of x:" << offset << std::endl;
int offset_y = (int)&((vector3*)0)->y; //Starting at '0', we wanted to get the address of y
//(vector3*)0 //initialisng at pointer but started from '0'index in memory
//&((vector3*)0)->z//getting the address
//(int)&((vector3*)0)->z//getting the address and casting to interger to get the exact offset of x, y, z
std::cout << "The offset of y:" << offset_y << std::endl;
std::cin.get();
return 0;


}
*/

