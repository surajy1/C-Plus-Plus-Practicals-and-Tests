#include <forward_list>
#include <iostream>
using namespace std;

int main() {

	forward_list<int> l;

	l.assign({10, 20, 30, 10});
	// l = {10, 20, 30, 10};

	forward_list<int> l2;
	l2.assign(l.begin(), l.end());
	// l2 = {10, 20, 30, 10};

	for (auto it = l2.begin(); it != l2.end(); it++)
		cout << (*it) << " ";

	return 0;
}