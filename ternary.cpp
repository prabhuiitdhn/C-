/*
Ternary
*/

#include<iostream>
#include<string>

static int s_level = 1;
static int s_speed = 2;

void ternary() {
	//Normal ways of wring the code.
	if (s_level > 5) {
		s_speed = 10;
	}
	else {
		s_speed = 5;
	}

	//ternary operator
	//OutputParam = (constion) ? (things when condtion==True) : (thinsg when conditio==False)
	s_speed = s_level > 5 ? 10 : 5;

	//And operator in condition used/
	/*
	if (s_level>5){
	if (s_level> 10){
	s_speed 15;
	}
	else{
	s_speed 10;
	}
	}
	else{
	s_speed 5;
	}
	*/
	s_speed = s_level > 5 ? s_level > 10 ? 15 : 10 : 5;

	std::string rank = s_level > 10 ? "master" : "Beginner";
}
/*
int main() {
ternary();
return 0;
}

*/
