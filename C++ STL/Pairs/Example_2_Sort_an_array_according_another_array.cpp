#include <iostream>
#include <utility>
#include <algorithm>
using namespace std;

void sortChar(int a[], char b[], int n) {
	pair<int, char> pa[n];
	for (int i = 0; i < n; i++)
		pa[i] = {a[i], b[i]};

	sort(pa, pa + n);

	for (int i = 0; i < n; i++)
		cout << pa[i].second << " ";
}

// TC: O(n*log(n))

int main() {

	int a[3] = {10, 15, 5};
	char b[3] = {'x', 'y', 'z'};

	int n = sizeof(a) / sizeof(a[0]);

	sortChar(a, b, n);

	return 0;
}