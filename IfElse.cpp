#include<iostream>

//https://www.youtube.com/watch?v=qEgCT87KOfc&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=12

//also give the idea of disassemblyf
int main(){
	
	/*
	int x = 5;
	bool comparingResult = x ==5;
	if (comparingResult){
		std::cout<<"Check If and else Condition."<< std::endl;
	}
	else{
		std::cout<<"Nope, They are not equal."<<std::endl;
	}
	*/
  
    const char *ptr = "Hello";
	if (ptr){
		std::cout<<"Pointer has some valid.";
	}
	else if (ptr == "Help"){
		std::cout<<"Nope, Ptr is not help";
	}
	else{
		std::cout<<"Nothing is in ptr matching";
	}
 
	return 0;
}