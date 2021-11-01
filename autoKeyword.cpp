/*
auto Keyword: SOmetime when the compiler knows what datatype to return in function so, avoid to initialise again at the time calling thefunction we can use, auto (where compiler will automatcially came to know what should be the return type of this function)
If auto is use, then probably we do not need to care about the datatype bcz it handled it automatcially.

takeaway: if you compiler knows what is the type of (lValues=rValues) rValues, then we can use auto in place of lValues.
//
*/

#include<iostream>
#include<vector>
#include<unordered_map>

//defing macro
#if 1 //1 is for enabling 
	 //0 is for disabling.
#define WAIT std::cin.get()
#define log(x) std::cout<<x<<std::endl
#endif

std::string getName() {
	return "Hello, I am Prabhu here!";
}

class Device {};
class DeviceManager {
private:
	std::unordered_map<std::string, std::vector<Device*>> m_Devices;
public:
	const std::unordered_map<std::string, std::vector<Device*>>& getDevices() const{
		return m_Devices;
	}
};


/*
int main() {

auto v = 5.0f; //'auro' keyword here helps to understand the value of v is (float) then 'v' definitely should the float

int a = 5;
int b = a; //valid and it can be used, bcz we explictily saying the compiler that b is the type of int but we can alos say using auto

auto c = a; //Here 'auto' keyword will automatcially help to undertand the c will be the type of int bcz a is int data type, so, we dont have to initialise it explicitly but using 'auto' keyword compiler can get to know

//1st way of calling getName() function where we do define what would be return datatype of function
std::string name1 = getName();
std::cout << name1[0] << std::endl;

//but here we use auto where compiler automatically tries to understand the output type of getName(); which would be std::string.
auto name = getName();
log(name[0]);

//another example
std::vector<std::string> strings;
strings.push_back("Pine apple");
strings.push_back("Organge");

/*
for (std::vector<std::string>::iterator it = strings.begin(); it != strings.end(); it++)
{
std::cout << *it << std::endl;
}

//instead of using all this stuff, we can use auto, where compiler exactly come to know what would be the type of iterator.
for (auto it = strings.begin(); it != strings.end(); it++)
{
std::cout << *it << std::endl;
}



DeviceManager dm;
const std::unordered_map<std::string, std::vector<Device*>>& devices = dm.getDevices();
/*
//we can also write
using DeviceMap = const std::unordered_map<std::string, std::vector<Device*>>;
//typedef std::unordered_map<std::string, std::vector<Device*>>;
const DeviceMap devices = dm.getDevices();

//Using auto
const auto& device = dm.getDevices();


WAIT; //defined macro which says compiler to compile std::cin.get()
return 0;
}
*/
