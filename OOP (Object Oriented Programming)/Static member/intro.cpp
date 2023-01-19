#include <iostream>
using namespace std;

class Player {
public:
	static int count;
	Player() {count++;}
	~Player() {count--;}
};

int Player::count = 0;

int main()
{
	Player p1;
	cout << Player::count << " ";
	Player p2;
	cout << Player::count << " ";

	return 0;
}
