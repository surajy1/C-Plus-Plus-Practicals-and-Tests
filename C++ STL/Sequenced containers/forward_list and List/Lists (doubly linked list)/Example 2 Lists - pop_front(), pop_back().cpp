#include <list>
#include <iostream>
using namespace std;

int main() {

	list<int> l = {10, 2, 5, 20};

	l.pop_front();
	l.pop_back();

	for (auto it = l.begin(); it != l.end(); it++)
		cout << (*it) << " "; //2 5

	return 0;
}