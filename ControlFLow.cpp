#include<iostream>

//continue: go to next iterator of this loop if true; 
//break:get out of the loop
//return- used to return the value (data type)
void continueLoop(){
	int i= 0;
	for(; i< 5;){
		std::cout<<"Hello"<<std::endl;
		i++;
		if (i>2 ==0 )
			continue;
		std::cout<<"continue."<<std::endl;
	}
}

void breakLoop(){
	//break exited from the loop if true
	for(int i =0; i<5; i++){
		if (i>3){
			break;
		}

		std::cout<<"Working the loop."<<std::endl;
	}
}

int main(){
	std::cout<<"Continue Loop:"<<std::endl;
	//continueLoop();
	breakLoop();
	return 0;	
}
 