/*Visibility- How visible method/members are to other class.
Private: only the friend/same class would be able to access the data members declared as provate.
protected: Only the class, or only the derived class along with base class would be able to access the member, other wont
public:
//It allows all can access the data members defined in public.

Why?
-Making all public is bad code writing.
-

*/

class Entity{
	private:
	int x, y;
	protected:
	int p, q;
	public:
	Entity(){
		x = 0;
	}
};

class Player: public Entity
{
	public:
	Player{
		//x= 2;//It wont work; bcz x is defined as private, so wont be able to access
		//only freind class would be able to acess the private data member;
		p = 10; //valid
		//valid to write, bcz along with the base class, this sub class are ablllowed to access this varibale. 
	}
}

int main(){
	Entity e;
	//e.x = 2;[invalid]//gives error bcz outside the class Entity private member will not be able to acess.
}