//interface is just like a class; But only difference is to "This should have a function initialised but no implementation."

//This mainl used when you are initilising the method in base class and gurantee to implement in the drived class.

#include<iostream>

class printable{
	public:
	virtual std::string getClassName() = 0;
};


class Entity : public printable 
{
public:
	//GetName() is a public method here which returns string.
	//virtual std::string GetName() = 0; //pure virtual class; need to implement in derived class
	//Just initialising the method in the base class but no implementation, just to initilaise with '0'
	
	std::string getClassName()override{
		return "Entity";
	}

};

class Player : public Entity 
{
private:
	std::string m_name;
public:
	Player(const std::string& name)
		: m_name(name) {}

	//override function
	//using keyword "override" helps to code readibility says "it is a overridden function; Not mandotory to use but best to use in case of code readibility."
	/*
	std::string GetName() override{
		return m_name;
	}*/
	
	std::string getClassName()override{
		return "Player.";
	}
};

void print(printable* obj){
		std::cout<< obj->getClassName()<<std::endl;
}

int main() {
	Entity* e = new Entity;
	//std::cout<< e->GetName() << std::endl;
	//std::cout << e->GetName() << std::endl;
	Player* p = new Player("Prabhu.");
	//std::cout<< p->GetName() << std::endl;
 
	//Entity* entity = p; //
	
	//Printing the class name using printable class(base) class where the method is initilaised but implemented in the derived class
	print(e);
	print(p);

	return 0;
}; 