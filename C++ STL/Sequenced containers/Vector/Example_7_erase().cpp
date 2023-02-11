#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v{10, 5, 20, 15};

	v.erase(v.begin());
	// v = [5 20 15]

	for (int x : v)
		cout << x << " ";

	cout << "\n";

	v.erase(v.begin(), v.end() - 1);
	// v = [15]

	for (int x : v)
		cout << x << " ";

	return 0;
}

// OUTPUT:
// 5 20 15
// 15
