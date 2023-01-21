#include <iostream>
using namespace std;

int main() {

	int x, y;
	cin >> x >> y;

	try {
		if (!y)
			throw 0;

		cout << "Result is " << x / y;
	}
	catch (int z) {
		cout << "Infinity!";
	}

	return 0;
}