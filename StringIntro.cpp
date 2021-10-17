//string: group of character.
//Many function in string is availbale for appending, deleting, getting the size and many fucntion availbale in string like python.

#include<iostream>
#include<string>

void printString(const std::string& String) {
	//this is reference and wont get copied, const here is promising not to change it.
	//need to send as reference bcz the input parameter should reflect.
	std::cout << String << std::endl;
	return;
}


int main() {
	char* name = "Cherna";
 	name[2] = 'p';

	char name2[6] = { 'C', 'h','e','r','n','a' };

	std::string name = "Cherno"; //another way of define string header fule.
	std::cout << name << std::endl;
	strlen(name);//getting to know the size of 
	//appending the "another string"
	name += 'h';//this would just add 'h' to name simpy in string
	return 0;
}

