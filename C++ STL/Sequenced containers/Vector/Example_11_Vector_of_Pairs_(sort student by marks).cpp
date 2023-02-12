#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

void printSortedByMarks(int rollno[], int marks[], int n) {
	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++)
		v.push_back({marks[i], rollno[i]});
	// v.push_back({rollno[i], marks[i]});

	sort(v.begin(), v.end(), greater<pair<int, int>>());
	// sort(v.begin(), v.end(), [](pair<int, int>p1, pair<int, int>p2) {return p1.second > p2.second;});

	for (int i = 0; i < n; i++)
		cout << v[i].second << " " << v[i].first << "\n";
	// cout << v[i].first << " " << v[i].second << "\n";
}

int main() {

	int rollno[3] = {101, 103, 105};
	int marks[3] = {80, 70, 90};

	printSortedByMarks(rollno, marks, 3);

	return 0;
}

// OUTPUT:
// 105 90
// 101 80
// 103 70