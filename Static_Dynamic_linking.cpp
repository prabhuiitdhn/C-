//https://www.youtube.com/watch?v=or1dAmUO8k0&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=49
//https://www.youtube.com/watch?v=pLy69V2F_8M&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=50
//(To much more clear understanding)
/*
Static library: library will be putting inside .exe; It is faster
dynamic library: It Linked runtime
.dll: is the file which dynmic link library at runtime.(If linking dynamically)
.lib: static libray that we use with .dll; actually contains all the files/location in .dll too, which links immediatety by linker.

to include the external library:
Static library
->create dependencies in soln folder
->Open project in vs -> properties->c++->set path of external library(include) in "Additional external library"

Dynamic Linking: 

*/

//Main fifference; almost same
//#include " "; is for checking the relative library path first and if not find anything then looks into compiler path
//#include<> ; is for external library 


#include<iostream>
#include<GLFW/glfw3.h>



int main() {
	int a = glfwInit();
	std::cout << a << std::endl;

	return 0;
}