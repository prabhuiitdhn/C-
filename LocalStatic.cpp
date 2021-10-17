#include<iostream>

//Local static - allows to declare a varible which has a life time of whole program and scope is limitd to inside the fucntion
//static

void function(){
	static int i =0 ; //when the fucntion called first time, the variable 'i' will have value '0'; i==0 will always be in a memory bcz this is static.
	//i will be in the memory of stack till program terminate
	
}

//singleton class will have one class instance existence; It just have Get() instance which has reference Singleton.
class singleton{
	public:
		static singleton& Get(){ 
		//Get() is one instance of Singleton which is reference
			static singleton instance; //extending the life time of instance till program terminate
			//if static is not here, once instance called it get destroyed and would not be able to keep alive for life time of program but It is about static which keeps instance of singleton alive.
			return instance;
		}
		
		void hello(){
			std::cout<< "Hello" <<std::endl;
		};
};


int main(){
	singleton::Get().hello();
	return 0;
}