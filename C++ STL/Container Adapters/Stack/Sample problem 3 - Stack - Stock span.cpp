#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

/*
	Stock span problem and its variations.

	Input 1: arr[] = {15, 13, 12, 14, 16, 8, 6, 4, 10, 30}
	Output 1: 1 1 3 5 1 1 1 4 10

	Input 2: arr[] = {10, 20, 30, 40}
	Output 2: 1 2 3 4

	Input 3: arr[] = {40, 30, 20, 10}
	Output 3: 1 1 1 1
*/

void stockSpan(int arr[], int n) {
	stack<int> s;

	s.push(0);
	for (int i = 1; i < n; i++)
	{
		while (s.empty() == false && arr[s.top()] <= arr[i])
			s.pop();

		int span = (s.empty()) ? (i + 1) : (i - s.top());
		cout << span << " ";
		s.push(i);
	}
}

// TC: O(2*n)

int main() {

	int arr[10] = {15, 13, 12, 14, 16, 8, 6, 4, 10, 30};

	stockSpan(arr, 10);

	return 0;
}
