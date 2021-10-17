//polymorphism meaning having multiple types for a single type.
//Used to extend to the exisiting class.

#include<iostream>

class Entity{
	public:
	int x, y;
	void print(){
		std::cout<<"I am in the base class"<<std::endl;
	}
};

class EntityDerived: public Entity{
	public:
	int z=10;
	void printName(){
		std::cout<<"I am in the derived class.";
	}

};

int main(){
	std::cout<<"Size of the clss."<<std::endl;
	std::cout<<sizeof(Entity)<<std::endl;
	//Entity contains x, y, varivale of size 4; total 8
	std::cout<<sizeof(EntityDerived)<<std::endl;
	//EntityDerived contains x, y (from previosu) class and in current class includes z (total 12);
	EntityDerived E;
	E.print();
	E.printName();
	return 0;
};