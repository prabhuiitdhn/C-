/*
allocate memory in heap: we do need new(allocating) and delete(to deallocate the memory)
smart_ptr: but it automate the process; when we call new, we don't need to call delete to deallocate the memory.
1. unique_ptr:  we can't copy the unique ptr; It is unique. If it is copied then If one ptr dies the copied(other) ptr will also deallocate.
2. shared_ptr: (reference counting) It keeps track of how many pointer reference we have.
[It is like, if e0, e1 are the 2 reference point, in this case, if e0 dies, then e1 dies, then share_ptr finishes]
3. weak_ptr: weak_ptr; If we copy using shared_ptr any then it won't increase reference count like shared_pt; It is basically like we dont care about the how many reference we are allocating but we do care about initialisation.
*/


#include<iostream>
#include<string>
#include<memory>
//We do need to add <memory> if we had to use smart_ptr

class Entity {
public:
	Entity() {
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity() {
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void print() {
		return;
	}
};

void smartPointer() {
	//Smart Pointer.
	//we can use empty scope after this particular scope; heap allocation will deallocate.
	{
		//std::unique_ptr<Entity> entity = new Entity(); [invalid]
		//bcz it unique_ptr take explicit way of initialing constructor
		std::unique_ptr<Entity> entity(new Entity());
		//std::unique_ptr<Entity> entity = std::make_unique<Entity>();
		//[This also can be done, It is good for exception safety. ]
		entity->print();
		//std::unique_ptr<Entity> e0 = entity; //It will not allow to copy bcz one entity wil be copy to e0 then after the scope both will deallocate so, not allowing to copy
		//the reason of using smart_ptr is to create without using new and delete; We do not need to explicitly use delete to deallocate the memory 
	}


	//share_pointer
	/*
	If it is running then after first scope dies,
	//shared_ptr won't die; It dies after whole scope dies;
	//It works as reference counting: after first scope one memory deallocated and
	//it reduces referencecounting as 1 but after next scope dies referencecount ==0 then then deallocate all the moemory allocated.
	*/
	{
		std::shared_ptr<Entity> e0;
		{
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			std::weak_ptr<Entity> weakEntity = sharedEntity; //It wont increase reference counting while copying
			e0 = sharedEntity;
		} //It deallocated after 2 reference count; after 2 times runing the scope

		std::weak_ptr<Entity> e1;
		{
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			std::weak_ptr<Entity> weakEntity = sharedEntity; //It wont increase reference counting while copying
			e1 = sharedEntity;
		}//it deallocated after first time of running scope

	}
}

/*
int main() {
smartPointer();
std::cin.get();
return 0;
}
*/
