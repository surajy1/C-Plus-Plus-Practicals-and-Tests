#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v{10, 5, 20, 15};

	v.clear();
	// v = []

	cout << v.size() << "\n"; 
	// 0

	if (v.empty() == true)
		cout << "Empty";
	else
		cout << "Not Empty";

	return 0;
}

// OUTPUT:
// 0
// Empty
