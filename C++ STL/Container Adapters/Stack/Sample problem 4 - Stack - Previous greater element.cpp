#include<iostream>
#include<stack>
using namespace std;

/*
	Given an array of distinct integers,
	find closest (position-wise) greater on left
	of every element. If there is no greater
	element on left, then print -1.

	Input 1: arr[] = {15, 10, 18, 12, 4, 6, 2, 8}
	Output 1: -1 15 -1 18 12 12 6 12

	Input 2: arr[] = {8, 10, 12}
	Output 2: -1 -1 -1

	Input 3: arr[] = {12, 10, 8}
	Output 3: -1 12 10
*/

void printPrevGreater(int arr[], int n) {
	stack<int> s;

	s.push(arr[0]);
	cout << -1 << " ";
	for (int i = 1; i < n; i++)
	{
		while (s.empty() == false && s.top() <= arr[i])
			s.pop();

		int pg = (s.empty()) ? -1 : s.top();
		cout << pg << " ";
		s.push(arr[i]);
	}
}

// TC: O(n)

int main() {

	int arr[10] = {15, 10, 18, 12, 4, 6, 2, 8};

	printPrevGreater(arr, 8);

	return 0;
}
