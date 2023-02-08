// Capture list example 3

#include <iostream>
using namespace std;

int main() {

	static int x = 5, y = 10;

	auto lambda_expr = [](int a) {
		x = x + a;
		y = y + a;
	};

	lambda_expr(20);
	cout << x << " " << y << endl;

	return 0;
}