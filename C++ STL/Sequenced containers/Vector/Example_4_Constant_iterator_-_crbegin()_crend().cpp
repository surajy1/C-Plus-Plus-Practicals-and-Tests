#include <iostream>
#include <vector>
using namespace std;

int main() {

	int arr[] = {10, 5, 20};
	int n = sizeof(arr) / sizeof(arr[0]);

	vector<int> v(arr, arr + n);

	for (auto it = v.crbegin(); it != v.crend(); it++) // crbegin() and crend() are constant iterators
		cout << (*it) << " "; // 20 5 10
	cout << "\n";

	for (auto it = v.cbegin(); it != v.cend(); it++) // cbegin() and cend() are constant iterators
		cout << (*it) << " "; // 10 5 20
  
	cout << "\n" << (*(v.rend() - 1)); // 10

	return 0;
}
