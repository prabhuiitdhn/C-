//static keyword inside the class/struct
/*
class s {
static int a;
//this struct will be sharing the memory to all of the instances of this class
//only will be one static instance in class
};
*/


/*
//static keyword outside of the class/struct
static int a; //outside of initiliasing the static will be internal and only will be visible to translation unit
class s{
};
*/

//Static function or variable; Linker will only be looking this static variable in the same C++ file, linker will not look into other c++ file(translational unit)

static int s_variable = 5; //this will only be linking internally inside translation unit 
//when defining it linker will not look again for this static "s_variable"

extern int s_varibable; //linker will look s_variable in another translational unit; called external linkage/linking

//if we do not need to use "s_variable" across the whole project then better to use static so, linker will only be thinking "this variable/fucntion"(staic) is only for this function

