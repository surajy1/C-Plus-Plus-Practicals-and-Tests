#include<iostream>
#include<deque>
using namespace std;

int main() {

	deque<int> dq = {10, 15, 30, 5, 12};
	auto it = dq.begin();
	it++;

	dq.insert(it, 20);
	// dq = {10, 20, 15, 30, 5, 12}
	dq.pop_front();
	// dq = {20, 15, 30, 5, 12}
	dq.pop_back();
	// dq = {20, 15, 30, 5}
	cout << dq.size();

	return 0;
}