/*
	Design a data structure that supports the following operations on a sequence.
	1) insert(x)		: Insert at the end
	2) replace(x,seq)	: Replace the first occurrance of x with given sequence
	3) print()			: Print the current sequence

	Example:
	Input: insert(3), insert(10), insert(2), insert(10), print(), replace(10,{20, 30, 40}), print()

	Output: 3 10 2 10
			3 20 30 40 2 10
*/

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

list<int> l;
void insert(int x) {l.push_back(x);};

void print() {
	for (int x : l)
		cout << x << " ";
	cout << "\n";
}

void replace(int x, vector<int>&seq) {
	auto it = find(l.begin(), l.end(), x);
	if (it == l.end())
		return;
	it = l.erase(it);
	l.insert(it, seq.begin(), seq.end());
}

int main() {

	insert(3);
	insert(10);
	insert(2);
	insert(10);
	print();
	vector<int>seq = {20, 30, 40};
	replace(10, seq);
	print();

	return 0;
}