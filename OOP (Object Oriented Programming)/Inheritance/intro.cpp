#include <iostream>
using namespace std;

class Person {
protected:
	string name;
	int id;
};

class Student: public Person { // `public` is access specifier
private:
	int marks;
public:
	void print() {
		cout << name << " " << id
		     << " " << marks << endl;
	}
};

int main()
{

	return 0;
}
