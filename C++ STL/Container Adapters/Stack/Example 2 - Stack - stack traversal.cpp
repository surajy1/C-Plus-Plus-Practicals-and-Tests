#include<iostream>
#include<stack>
using namespace std;

int main() {

	stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	// s = {30, 20, 10} in the form of stack

	while (s.empty() == false)
	{
		cout << s.top() << " ";
		s.pop();
	}
	// 30 20 10

	return 0;
}