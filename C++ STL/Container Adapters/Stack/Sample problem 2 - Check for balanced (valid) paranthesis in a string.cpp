#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

/*	https://leetcode.com/problems/valid-parentheses

	Given a string of paranthesis ({,},(,),[ and ]).
	We need to check if this string is balanced or not.

	Input 1: s = "([])"
	Output 1: Yes

	Input 2: s = "[{]}"
	Output 2: No

	Input 3: s = "{}[()]"
	Output 3: Yes
*/
bool matching(char a, char b) {
	return ((a == '(' && b == ')') ||
	        (a == '{' && b == '}') ||
	        (a == '[' && b == ']'));
}

bool isBalanced(string str) {
	stack<int> s;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '(' || str[i] == '{' || str[i] == '[')
			s.push(str[i]);
		else
		{
			if (s.empty() == true)	// edge case: str = ")("
				return false;
			else if (matching(s.top(), str[i]) == false)
				return false;
			else
				s.pop();
		}
	}
	return (s.empty() == true);
}

int main() {

	string str;
	cin >> str;

	if (isBalanced(str))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
