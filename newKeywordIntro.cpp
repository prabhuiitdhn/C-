/*
'New' keyword:
1. it mainly care for the memory, used for allocate memory in Heap.
2. New int() //will allocate 4 bytes of memory in heap
3. new is just an operator;
4. After allocating the memory using 'new' we must use delete to deallocate the memory;
*/



#include<iostream>
#include<string>

class Entity {
private:
	std::string m_name;
public:
	Entity() : m_name("Unknown") {}
	Entity(const std::string& name) : m_name(name) {}
	const std::string& getName() const { return m_name; }


};

int main() {
	int a = 2; //dynamically allcoated
	int* b = new int; //allocated in heap
	int* c = new int[50]; //allocated memory in heap of 50x4 bytes;
	
	Entity* e = new Entity[50]; //It is an array of objects/of type Entity
	//It will block 50X sizeof(Entity)
	Entity* e = new Entity();//
	//This create a constructor.
	
	//[In c programing but no in c++]
	//malloc(50); //c function; 'new' called this function and allocate the memory of size(mentioned)
	//Entity* e = (Entity*)malloc(sizeof(Entity));
	//[Malloc is for allocate the memory of sizeof(Entity) which is refered by 'e' pointer has the type of Entity]


	return 0;
}