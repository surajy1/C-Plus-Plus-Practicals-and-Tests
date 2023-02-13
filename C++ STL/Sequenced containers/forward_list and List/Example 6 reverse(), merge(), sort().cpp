#include <forward_list>
#include <iostream>
using namespace std;

int main() {

	forward_list<int> l1 = {15, 20, 30};

	l1.reverse();
	// l1 = {30 20 15}
	for (int x : l1)
		cout << x << " ";
	// output: 30 20 15

	cout << "\n";

	forward_list<int> l2 = {5, 15};

	l1.merge(l2);
	// l1 = {5 15 30 20 15}
	for (int x : l1)
		cout << x << " ";
	// output: 5 15 30 20 15

	cout << "\n";

	l1.sort();
	// l1 = {5 15 15 20 30}
	for (int x : l1)
		cout << x << " ";
	// output: 5 15 15 20 30

	return 0;
}