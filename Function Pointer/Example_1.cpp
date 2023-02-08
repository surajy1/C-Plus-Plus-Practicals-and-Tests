#include <iostream>
using namespace std;

void fun() {
	cout << "Some text.";
}

int main() {

	void(*fun_ptr)() = &fun; // auto fun_ptr = fun;

	fun_ptr();

	return 0;
}
