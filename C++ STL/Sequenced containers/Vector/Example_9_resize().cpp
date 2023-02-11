#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v{10, 5, 20, 15};

	v.resize(3); // v = [10 5 20]
	for (int x : v)
		cout << x << " ";

	cout << "\n";

	v.resize(5); // v = [10 5 20 0 0]
	for (int x : v)
		cout << x << " ";

	cout << "\n";

	v.resize(8, 100); 
	// v = [10 5 20 0 0 100 100 100]
	for (int x : v)
		cout << x << " ";

	return 0;
}

// OUTPUT:
// 10 5 20
// 10 5 20 0 0
// 10 5 20 0 0 100 100 100
