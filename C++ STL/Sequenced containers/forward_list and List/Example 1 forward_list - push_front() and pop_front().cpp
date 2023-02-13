#include <forward_list>
#include <iostream>
using namespace std;

int main() {

	forward_list<int> l = {10, 15, 20};
	l.push_front(5);
	// l = {5, 10, 15, 20}
	l.push_front(3);
	// l = {3, 5, 10, 15, 20}
	l.pop_front();
	// l = {5, 10, 15, 20}

	for (int x : l)
		cout << x << " ";
	// output: 5 10 15 20

	return 0;
}
