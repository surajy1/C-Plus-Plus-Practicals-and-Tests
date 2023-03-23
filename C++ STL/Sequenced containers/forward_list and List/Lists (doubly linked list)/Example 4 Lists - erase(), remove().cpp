#include <list>
#include <iostream>
using namespace std;

int main() {

	list<int> l = {10, 20, 30, 40, 20, 40};

	auto it = l.begin();
	it++;

	it = l.erase(it);
	//l = {10, 30, 40, 20, 40}

	l.remove(40); // removes every occurance of 40 in l
	//l = {10, 30, 20}

	for (auto x : l)
		cout << x << " ";// 10 30 20

	return 0;
}