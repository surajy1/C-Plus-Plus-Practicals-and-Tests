#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v{10, 5, 20, 15};

	// pop_back() returns reference to the last element of the vector and removes the last element from the vector, i.e, 15 will be removed
	v.pop_back();

	for (int x : v)
		cout << x << " "; // 10 15 20

	cout << "\n" << v.front(); // returns referrence to the first element of the vector, i.e, 10

	cout << "\n" << v.back();; // returns referrence to the last element of the vector, i.e, 20

	v.front() = 100;
	cout << "\n" << v.front(); // 100

	v.back() = 200;
	cout << "\n" << v.back(); // 200

	return 0;
}

// Output:
// 10 5 20
// 10
// 20
// 100
// 200
