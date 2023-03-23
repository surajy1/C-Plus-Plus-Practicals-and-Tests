#include <list>
#include <iostream>
using namespace std;

int main() {

	list<int> l1 = {10, 20, 30};
	list<int> l2 = {5, 15, 25};

	l1.merge(l2);
	// l1 = {5, 10, 15, 20, 25, 30}
	// l2 = {}

	for (auto x : l1)
		cout << x << " ";// 5 10 15 20 25 30

	return 0;
}