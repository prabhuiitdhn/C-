#include<iostream>
//constructor special typeof method which initialise
//deconstructor is used to deallocate the memroy; destroy the objects

class Entity{
	public:
	float x, y;
	
	Entity()//same as class name
	{
		std::cout<<"constructing"<<std::endl;
		x= 0.0f;
		y = 0.0f;
	}
	
	Entity(float x, float y){ //parametrc constructor
		x = x;
		y= y;
	}	
	
	
	//deconstructor; deleting the object created using contructor
	//automatically called this desconstructor
	~Entity(){
		std::cout<<"Deconstructing"<<std::endl;f
	}
	void print(){
		std::cout<<"hello"<<std::endl;
	}
}

int main(){
	Entity e; //creating the object automiatcailly initiliaed the variable by calling same function name of class.
	Entity e1(1.0, 2.0);//parameter constructor
	e.print()
	//e1.~Entity()//manually desconstructoring
	return 0;
}