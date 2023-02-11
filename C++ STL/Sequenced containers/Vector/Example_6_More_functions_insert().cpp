#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v{10, 5, 20, 15};

	auto it = v.insert(v.begin(), 100);
	// v = [100 10 5 20 15]

	v.insert(v.begin() + 2, 200);
	// v = [100 10 200 5 20 15]

	v.insert(v.begin(), 2, 300);
	// v = [300 300 100 10 200 5 20 15]

	vector<int> v2;
	v2.insert(v2.begin(), v.begin(), v.begin() + 2);
	// v2 = [300 300]

	for (int x : v)
		cout << x << " ";
	cout << "\n";

	for (int x : v2)
		cout << x << " ";

	return 0;
}

// OUTPUT:
// 300 300 100 10 200 5 20 15
// 300 300
