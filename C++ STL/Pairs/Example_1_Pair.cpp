#include <iostream>
#include <utility>
using namespace std;

int main() {

	pair<int, int> p1(10, 20); // default values are 0 when not initialized. i.e, p1(0, 0)

	pair<int, string> p2(10, "abc");
	// default values when not initialized: p2(0, "")

	cout << p1.first << " " << p1.second << "\n";
	cout << p2.first << " " << p2.second << "\n";

	return 0;
}
