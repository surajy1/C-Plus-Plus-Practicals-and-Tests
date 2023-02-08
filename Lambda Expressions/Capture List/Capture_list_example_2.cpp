// Capture list example 2

#include <iostream>
using namespace std;

int main() {

	int x = 5, y = 10;

	// mutable
	auto lambda_expr = [ = ](int a)mutable{
		x = x + a;
		y = y + a;
	};

	lambda_expr(20);
	cout << x << " " << y << endl;

	return 0;
}