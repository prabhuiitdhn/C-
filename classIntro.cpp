//classes are for grouping the data and functions

class Player {
	//defualt is in private
public: //allow to access the variable from anywhere
	int x, y;
	int speed;

	void Move(int xa = 0.5, int ya = 0.6) {
		//in this data function which is inside of class are allowed to take the data members.
		x += xa * speed;
		y += ya * speed;
	}

};

//if function is out of the class
void Move(Player& player, int xa = 0.5, int ya = 0.6) {
	player.x += xa * player.speed;
	player.y += ya * player.speed;
}

int main() {
	Player p1;
	p1.Move();
	return 0;
}