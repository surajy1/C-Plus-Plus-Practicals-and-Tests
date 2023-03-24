/*
	Design a data structure that supports following operations in O(1) time complexity.
	1) insertMin(x)	: assumes that inserted item is always smaller than existing items
	2) insertMax(x) : assumes that inserted item is always greater than existing items
	3) getMin() : returns current minimum
	4) getMax() : returns current maximum
	5) extractMin() : removes current minimum
	6) extractMax() : removes current maximum

	Input:
	insert(5)
	insertMax(10)
	insertMin(3)
	insertMax(15)
	insertMin(2)
	getMin()
	getMax()
	insertMin(1)
	getMin()
	insertMax(20)
	getMax()

	Output:
	2
	15
	1
	20
*/

#include<iostream>
#include<deque>
using namespace std;

deque<int> dq;

void insertMin(int x) {dq.push_front(x);}
void insertMax(int x) {dq.push_back(x);}
int getMin() {return dq.front();}
int getMax() {return dq.back();}
void extractMin() {dq.pop_front();}
void extractMax() {dq.pop_back();}

int main() {

	insertMin(5);	// dq = {5}
	insertMax(10);  // dq = {5, 10}
	insertMin(3);	// dq = {3, 5, 10}
	insertMax(15);  // dq = {3, 5, 10, 15}
	insertMin(2);	// dq = {2, 3, 5, 10, 15}
	getMin(); // 2
	getMax(); // 15
	insertMin(1);  // dq = {1, 2, 3, 5, 10, 15}
	getMin(); // 1
	insertMax(20); // dq = {1, 2, 3, 5, 10, 15, 20}
	getMax(); // 20

	return 0;
}
