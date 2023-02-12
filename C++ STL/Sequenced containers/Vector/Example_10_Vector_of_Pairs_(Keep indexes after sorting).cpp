#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

void keepIndexesAfterSorting(int arr[], int n) {
	vector<pair<int, int>> v;

	for (int i = 0; i < n; i++)
		v.push_back({arr[i], i});
	// 	make_pair(arr[i], i);

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
		cout << v[i].first << " " << v[i].second << "\n";
}

int main() {

	int arr[4] = {20, 40, 20, 10};

	keepIndexesAfterSorting(arr, 4);

	return 0;
}

// OUTPUT:
// 10 3
// 20 0
// 20 2
// 40 1