#include<iostream>
#include<deque>
using namespace std;

int main() {

	deque<int> dq = {10, 20, 30};
	dq.push_front(5); // dq = {5, 10, 20, 30}
	dq.push_back(50); // dq = {5, 10, 20, 30, 50}

	for (auto x : dq)
		cout << x << " "; // 5 10 20 30 50
	cout << endl;

	cout << dq.front() << " " << dq.back(); // 5 50

	return 0;
}