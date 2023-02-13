#include <forward_list>
#include <iostream>
using namespace std;

int main() {

	forward_list<int> l;

	l.assign(5, 10);
	// l = {10 10 10 10 10}

	for (auto it = l.begin(); it != l.end(); it++)
		cout << (*it) << " ";
	// output: 10 10 10 10 10

	return 0;
}