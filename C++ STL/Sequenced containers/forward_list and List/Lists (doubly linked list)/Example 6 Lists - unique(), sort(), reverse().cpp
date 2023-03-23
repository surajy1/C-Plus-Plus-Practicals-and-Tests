#include <list>
#include <iostream>
using namespace std;

int main() {

	list<int> l = {10, 15, 15, 20, 20, 20, 10};

	l.unique(); // removes consecutive duplicates
	// l = {10, 15, 20, 10}

	l.sort();
	// l = {10, 10, 15, 20};

	l.reverse(); // reverses the order of the list
	// l = {20, 15, 10, 10}

	for (auto x : l)
		cout << x << " ";

	return 0;
}