/*
macro: preprocesssor:  
*/


#include<iostream>
#include<string>

#define WAIT std::cin.get() //This is not the right way to write the code.
#define LOG(x) std::cout<< x <<std::endl

#if 0 //This is used for make inactiva all the #macros under the if and endIf
//If configuration is in debug mode then LOG(x) will print value
#ifdef DEBUG
#define LOG(x) std::cout<< x <<std::endl
#else // DEBUG
//and in the case of else (not in DEBUG mode), It will print LOG(x) nothing
#define LOG(x)
#endif

#endif
 
 
 /*
 we can also use to line multi line macro using '\' backslash
 
 #define MAIN int main() \
 {\
	 std::cin.get();\
 }
 
 MAIN
 */
 
 
int main() {
	LOG("Hello, Macros.");
	WAIT;
	return 0;
}