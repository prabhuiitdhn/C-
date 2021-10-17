//header file used for declaring fucntion; needs to have declaration of fucntion to call in main function(); we can only define fucntion one so, it is for linker to know where the fucntion is

#include <iostream>
#include "headerLog.h"


//" " writing is used for file in the current path but in the "< >" case of including file is need to have that project anywhere in entire project files

//" " (Quotes) for only for compiling including path but <> for anything

void Log(const char* message){
	std::cout<<message<<std::endl;
}

int main(){
	Log("Hello world");
	return 0;
}