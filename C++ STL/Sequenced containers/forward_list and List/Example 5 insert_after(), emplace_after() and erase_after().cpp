#include <forward_list>
#include <iostream>
using namespace std;

int main() {

	forward_list<int> l1 = {15, 20, 30};

	auto it = l1.insert_after(l1.begin(), 10);
	// l1 = {15 20 30}

	it = l1.insert_after(it, {2, 3, 5});
	// l1 = {15 20 2 3 5 30}

	it = l1.emplace_after(it, 40);
	// l1 = {15 10 2 3 5 40 20 30}

	it = l1.erase_after(it);
	// l1 = {15 10 2 3 5 40 30}

	for (int x : l1)
		cout << x << " ";
	// output: 15 10 2 3 5 40 30

	return 0;
}