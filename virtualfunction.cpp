//virtual function is override the method in sub/base class.
//virtual function: dynamic dispatch
//using Same method name in base class or derived class creates problem sometime, Thats; why we need to declare a method name with virtual so that compiler know which method should call from which class.
//additional memory required if method is virtual, bcz compiler need to decide which method to call when compiler tries to call.


#include<iostream>

class Entity {
public:
	//GetName() is a public method here which returns string.
	virtual std::string GetName() {
		//generate the v-table for this function too, so, If this fnction overridden, and it used to call when it points to the correct function.
		
		return "Entity";
	}

};

class Player : public Entity {
private:
	std::string m_name;
public:
	Player(const std::string& name)
		: m_name(name) {}

	//override function
	//using keyword "override" helps to code readibility says "it is a overridden function; Not mandotory to use but best to use in case of code readibility."
	std::string GetName() override{
		return m_name;
	}
};

int main() {
	Entity* e = new Entity;
	//std::cout<< e->GetName() << std::endl;
	std::cout << e->GetName() << std::endl;
	Player* p = new Player("Prabhu.");
	std::cout<< p->GetName() << std::endl;
 
	Entity* entity = p; //
	

	return 0;
};