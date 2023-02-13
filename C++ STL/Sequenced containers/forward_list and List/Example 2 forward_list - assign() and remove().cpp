#include <forward_list>
#include <iostream>
using namespace std;

int main() {

	forward_list<int> l;

	l.assign({10, 20, 30, 10});
	// l = {10, 20, 30, 10};
	l.remove(10);
	// l = {20, 30};

	for (auto it = l.begin(); it != l.end(); it++)
		cout << (*it) << " ";

	return 0;
}