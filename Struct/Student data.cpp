#include <iostream>
using namespace std;

struct Student
{
	int rollNo;
	string name;
	int age;
	string section;
};

void print(Student s[], int n) {
	cout << "Roll No: " << s[n].rollNo
	     << "\nName: " << s[n].name
	     << "\nAge: " << s[n].age
	     << "\nSection: " << s[n].section;
}

int main(int argc, char const *argv[])
{
	Student st[5];

	for (int i = 1; i <= 4; i++)
	{
		st[i].rollNo = i;

		cout << "Student no: " << i;

		cout << "\nEnter name: " ;
		cin >> st[i].name;

		cout << "Enter age: ";
		cin >> st[i].age;

		cout << "Enter section: ";
		cin >> st[i].section;

		cout << "\n";
	}

	int num;
	cout << "Enter the student no. for info: ";
	cin >> num;

	print(st, num);

	return 0;
}
