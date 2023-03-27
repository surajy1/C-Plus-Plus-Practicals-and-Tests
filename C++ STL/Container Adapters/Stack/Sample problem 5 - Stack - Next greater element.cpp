#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

/*
	Given an array of distinct integers,
	find next greater (position-wise closest
	and on right side) for every array element.

	Input 1: arr[] = {5, 15, 10, 8, 6, 12, 9, 18}
	Output 1: 15 18 12 12 12 18 18 -1

	Input 2: arr[] = {10, 15, 20, 25}
	Output 2: 15 20 25 -1

	Input 3: arr[] = {25, 20, 15, 10}
	Output 3: -1 -1 -1 -1
*/

vector<int> printNextGreater(int arr[], int n) {
	vector<int> v;
	stack<int> s;

	s.push(arr[n - 1]);
	v.push_back(-1);
	for (int i = n - 2; i >= 0; i--)
	{
		while (s.empty() == false && s.top() <= arr[i])
			s.pop();

		int nextGr = (s.empty()) ? -1 : s.top();
		v.push_back(nextGr);
		s.push(arr[i]);
	}
	reverse(v.begin(), v.end());
	return v;
}

// TC: O(n)

int main() {

	int arr[8] = {5, 15, 10, 8, 6, 12, 9, 18};

	vector<int> ans = printNextGreater(arr, 8);

	for (int x : ans)
		cout << x << " ";

	return 0;
}