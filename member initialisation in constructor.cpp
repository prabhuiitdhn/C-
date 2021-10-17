//https://www.youtube.com/watch?v=1nfuYMXjZsA&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=37

/*
constructor member initialiser list



*/
#include<iostream>
#include<string>

class Example {
	 
};


class Entity {
private:
	int m_score;
	const std::string m_name;
public:
	//Another way of initialising the methods
	//use the colon and initliase all the members in order; If that is not in order, It may throws an error
	//[It simplies the coding style, bcz initilaising all the members when requires creats and lengthy code wriing]
	//This coding style improves the performace of the code writing.
	Entity()
		: m_name("Unknown"), m_score(0) {
	}



	//One way to initialise the constructor member fucntions
	Entity()  //constructur wiwhtout parameter; Defualt constructor.
	{
		std::string m_name = "Unknown";
	}

	Entity(const std::string& name) //constructor with parameter; Parameterised constructor.
	{
		std::string m_name = name;
	}

	const std::string& getName() const {
		return m_name;
	}
};

int main() {
	Entity e;
	Entity e1("Prabhu.");
	return 0;
	

}
