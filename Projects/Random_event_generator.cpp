#include <iostream>
#include <ctime>
using namespace std;

int main() {

	srand(time(0));
	int randNum = rand() % 5 + 1;

	switch (randNum) {
	case 1:	cout << "You win a sticker!\n";
		break;
	case 2: cout << "You win a facewash!\n";
		break;
	case 3: cout << "You win a gift-card!\n";
		break;
	case 4: cout << "You win a discount code!\n";
		break;
	case 5: cout << "You win a free pizza!\n";
		break;
	}

	return 0;
}
