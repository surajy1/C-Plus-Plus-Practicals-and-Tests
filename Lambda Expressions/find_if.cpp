// find_if

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	vector<int> v{10, 5, 3, 20, 100};

	auto it = find_if(v.begin(), v.end(), [](int x) {return x < 10;});

	cout << *it;

	return 0;
}
