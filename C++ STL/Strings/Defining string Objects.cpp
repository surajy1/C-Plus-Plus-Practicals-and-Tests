#include <iostream>
using namespace std;

int main() {

	string sleeping (6, 'z'); // "zzzzzz"
	cout << sleeping; // zzzzzz
	cout << endl;

	string light_sleeper (1, 'z'); // "z"
	cout << light_sleeper; // z
	cout << endl;

	string part_literal {"Least said soonest mended.", 5}; // "Least"
	cout << part_literal; // Least
	cout << endl;

	string proverb {"Many a mickle makes a muckle."};

	string phrase {proverb, 0, 13};
	// Initialize with "13 characters" starting at "index 0"
	cout << phrase; // Many a mickle
	cout << endl;

	string third_word {proverb, 7, 6}; // "mickle"
	cout << third_word; // mickle
	cout << endl;

	string str = "Consistency is the key to success";
	string part_string(str, 15);
	cout << part_string; // "the key to success"
	cout << endl;

	string part_literal_2 {"Consistency is the key to success", 15};
	cout << part_literal_2; // "Consistency is "

	return 0;
}

/* OUTPUT:
zzzzzz
z
Least
Many a mickle
mickle
the key to success
Consistency is
*/
