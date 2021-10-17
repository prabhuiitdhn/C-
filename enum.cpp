#include<iostream>

//enum: set of values in sequence, ways to give a name to set of values, set of values in the enumeration; 
//enum is just an integer, It is used to groud all the integer variable.

/*
int A = 0;
int B= 1;
int C = 2;

instead of unsng all abouve, we simply use
enum Example{
	A, B, C
}

Both initialisation of A, B, C will behave same but enum is best way to group the variables.

*/

//Another way of initialising the enum, which takes datatype. In deafult It is a integer but this can also takes as data type.

/*
enum Example1::unsigned char{
	//these are actually the number assigned as followed A= 0; B=1.; C = 2; in sequencial form.	
	A, B, c; //one way of initilisation
	C= 0, D= 8, E = 10, F; //this is how we can initilse it too.
	
	/*
	in this case, the value c = 0, D = 8, E = 10, but F = 11. bcz enum is gropiong the variale in sequcne
	*/
}

*/

enum Example{
	//these are actually the number assigned as followed A= 0; B=1.; C = 2; in sequencial form.	
	//A, B, c; //one way of initilisation
	C= 0, D= 8, E = 10, F; //this is how we can initilse it too.
	
	/*
	in this case, the value c = 0, D = 8, E = 10, but F = 11. bcz enum is gropiong the variale in sequcne
	*/
}

int main(){
	enum example e;
	e = F;
	std:: cout<<F<<std::endl;
	return 0;
}