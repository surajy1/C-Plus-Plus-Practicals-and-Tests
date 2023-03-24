#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

/*
	Reverse a string.

	Input 1: abcd
	Output 1: dcba

	Input 2: cpp
	Output 2: ppc
*/

void reverseStr(string &str) {
	stack<char> s;

	for (int i = 0; i < str.length(); i++)
		s.push(str[i]);

	for (int i = 0; i < str.length(); i++)
	{
		str[i] = s.top();
		s.pop();
	}
}

int main() {

	string str;
	cin >> str;

	reverseStr(str);
	cout << str;

	return 0;
}