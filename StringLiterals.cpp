//String Literals.
//https://www.youtube.com/watch?v=FeHZHF0f2dw&list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb&index=33 
//(detail to see where the const is written in assembly and si not allowing to modify the string)

#include<iostream>
#include<string>
#include<stdlib.h> //this is for c function

//String literals are always stored in read only memory.
int main() {

	using namespace std::string_literals;//no of fuction it gives
	std::string name0 = "cherno" + std::string("Hello");
	//or
	std::string name0 = "cherno"s + "Hello";//'s' as string
	std::u32string name0 = U"cherno"s + U"hello";


	"Cherno"; //string literal; const char array of size '7'; bcz it add one extra char "null termiantion '\0' (says end of string)"
	const char name[8] = "Cherno"; 
	const char* name2 = "Cherno"; //we can also assign the string like this.
	//in this case of intilaisation of name2; which is in pointer, stored in read only mode.
	//const will not allow to change the name[2] but not const, then it is possible to change
	//name2[2] = 'p'; //invalid if const is used; wont allow to modify
	 /* [This is how look in assembly code.] //main.asm file
	 PUBLIC	??_C@_06MDBPMDDK@Cherno?$AA@			; `string'
	 EXTRN	__imp_??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@I@Z:PROC
	 EXTRN	__imp_??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@P6AAAV01@AAV01@@Z@Z:PROC
	 EXTRN	__imp_?flush@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@XZ:PROC
	 EXTRN	__imp_?put@?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV12@D@Z:PROC
	 EXTRN	__imp_?widen@?$basic_ios@DU?$char_traits@D@std@@@std@@QBEDD@Z:PROC
	 EXTRN	__imp_?cout@std@@3V?$basic_ostream@DU?$char_traits@D@std@@@1@A:BYTE
	 EXTRN	@__security_check_cookie@4:PROC
	 ;	COMDAT ??_C@_06MDBPMDDK@Cherno?$AA@
	 CONST	SEGMENT
	 ??_C@_06MDBPMDDK@Cherno?$AA@ DB 'Cherno', 00H		; `string'
	 */

	std::cout << strlen(name) << std::endl; //says size of string
	std::cout << name2;

	//datype of character.; for space allowcation of 
	const wchar_t* name3 =L"cherno"; //1bytes(as per complier)//which said "Following string literals made up of "white char"
	const char16_t* name4 = u"Cherna"; //2bytes(as per complier)//which said "Fowllwinf tring literal" 
	const char32_t* name5 = U"chernaa";

	const char* example = R"(Cherno )"; //it uses to remove the escape character.
	//also
	const char* example = "Line\n"
		"Line2\n";
	return 0;
}