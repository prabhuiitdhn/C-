#include<iostream>
//constructor special typeof method which initialise
class Entity{
	public:
	float x, y;
	
	Entity()//same as class name
	{
		x= 0.0f;
		y = 0.0f;
	}
	
	Entity(){ //parametrc constructor
		x = x;
		y= y;
	}	
	void print(){
		std::cout<<"hello"<<std::endl;
	}
}

int main(){
	Entity e; //creating the object automiatcailly initiliaed the variable by calling same function name of class.
	Entity e1(1.0, 2.0);//parameter constructor
	e.print()
	return 0;
}