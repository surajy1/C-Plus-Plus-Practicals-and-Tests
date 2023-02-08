// accumulate()

#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {

	vector<int> v{10, 2, 4, 20, 1};

	int res = accumulate(v.begin(), v.end(), 0); // res = sum of every element in v

	cout << res << "\n";

	res = accumulate(v.begin(), v.end(), 1, [](int x, int y) {return x * y;}); // res = multiplication of every element in v

	cout << res ;

	return 0;
}
