#include<iostream>
#include<stack>
using namespace std;

int main() {

	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	// s = {30, 20, 10} in the form of stack

	cout << s.size() << endl; // 3
	cout << s.top() << endl;  // 30
	s.pop(); // s = {20, 10}
	cout << s.top() << endl;  // 20

	return 0;
}
