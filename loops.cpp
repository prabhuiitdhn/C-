#include<iostream>

void forLoop(){
	std::cout<<"FOr loop:"<<std::endl;
	/*
	for(int i=0; i<5; i++){
		std::cout<<i<<" ";
		std::cout<<":I am printing."<< std::endl;
	}*/
	int i =0;
	for (; i<5; ){
		std::cout<<i<<" ";
		std::cout<<":I am printing."<< std::endl;
		i++;
	}
	
}


void whileLoop(){
	int i = 0;
	std::cout<<"In while loop"<<std::endl;
	while(i<5){
		std::cout<<"I am here..";
		i++;
	}
	
void dowhileLoop(){
	int i =0;
	std::cout<<"Do while Loop"<<std::endl;
	do{
		std::cout<<"Print atleast once.";
		i++;
	}while(i<5);
}
	
}
int main(){
	forLoop();
	std::cout<<"________________________________"<<std::endl;
	whileLoop();
	std::cout<<"++++++++++++++++++++"<<std::endl;
	dowhileLoop();
	return 0;
	
	
}