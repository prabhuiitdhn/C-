#include<iostream>
#include<string>


//When we create an object, it store memory; even if nothing is is clas, need to occuppy memory of 1 byte.
class Entity {
private:
	std::string m_name;
public:
	Entity() : m_name("Unknown") {}
	Entity(const std::string& name) : m_name(name) {}
	const std::string& getName() const { return m_name; }


};

int main()
{
	Entity e0;
	std::cout << e0.getName() << std::endl;
	Entity e1("Prabhu");
	std::cout << e1.getName() << std::endl;
	Entity e2 = Entity("Prabhu2"); //fastest ways to create an object
	std::cout << e2.getName() << std::endl;

	//Another ways of creatring an object using pointer
	//Allocate the memory in stack.
	Entity *e; 
	{
		Entity entity("Prabhu3");
		e = &entity;
		std::cout << entity.getName() << std::endl;
	}

	//Allocate the memory in Heap.
	//In heap allocation, 'new' keyword used. using 'new' keyword we can allocate the memory in heap but need to delete manually;
	Entity *e;
	{
		Entity* entity = new Entity("Prabhu3");
		e = entity;
		//Dereferencing ways: 1
		std::cout << (*e).getName() << std::endl;
		//Dereferencing ways: 2
		std::cout << e->getName() << std::endl; 
		//arrow is mainly used for dereferencing the pointer. which does not take '*' to dereference.
		delete entity;
	}

	std::cin.get();
	return 0;
}