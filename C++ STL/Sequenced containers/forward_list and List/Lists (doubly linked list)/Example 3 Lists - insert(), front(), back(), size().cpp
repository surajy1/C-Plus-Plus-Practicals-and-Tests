#include <list>
#include <iostream>
using namespace std;

int main() {

	list<int> l = {10, 20, 30};

	auto it = l.begin();
	it++;

	it = l.insert(it, 15);
	// l = {10, 15, 20, 30}

	// for (auto it = l.begin(); it != l.end(); it++)
	// 	cout << (*it) << " ";

	// cout << "\n";

	l.insert(it, 2, 7);
	// l = {10, 7, 7, 15, 20, 30}
	// for (auto it = l.begin(); it != l.end(); it++)
	// 	cout << (*it) << " ";
	// cout << "\n";

	cout << l.front() << " " << l.back(); // 10 30

	cout << " " << l.size(); // 6

	return 0;
}