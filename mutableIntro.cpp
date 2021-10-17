 /*Mutable keyword
 Mutable: It could changed later; const but coud change.

 */
#include<iostream>
#include<string>

class Entity {
private:
	std::string m_name;
	mutable int m_debugcount = 0; //using 'mutable' we are allowing to method (defined using const) to modify the m_debugcount
public:
	/*
	[but what if we need to use some vaariable in class which is mandatory to modify;
	eg: what if we wanted to understand how many this method is being call; 
	and m_debgcount can give the output but method is restricted not modifty(const; right)so, in this case, we can defined the variable as mutable.(which could help to modify in this method)]
	*/
	const std::string& GetName() const {
		//left (const) is to return the string which would not modify
		//right (const) is for not to modify the content of class 
		//m_name = "helow"; //invalid to use it, bcz method is being defined const (right)
		m_debugcount++;
		return m_name;
	}
};

int main() {
	const Entity e;
	e.GetName();

	int x = 0;
	//Another way of lambda function writing.
	//auto f = [x]() mutable  //passing the direct value
	//auto f = [=]() mutable //passing the exact value
	auto f = [&]() mutable { //passing the reference
		x++;
		std::cout << x << std::endl;
	};
	f();

	return 0;
}