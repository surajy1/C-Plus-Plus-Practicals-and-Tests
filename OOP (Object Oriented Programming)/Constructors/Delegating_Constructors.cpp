#include <iostream>
using namespace std;

// Class to represent a box
class Box {
public:
	Box(double length, double width, double height);
	explicit Box(double side); // Constructor for a cube(explicit)
	Box() = default; // Defaulted default constructor

	double volume(); // Function to calculate the volume of a box

private:
	double m_length{1.0};
	double m_width{1.0};
	double m_height{1.0};
};

// Constructor definition using a member initializer list
Box::Box(double length, double width, double height)
	: m_length{length}, m_width{width}, m_height{height}
{
	cout << "Box constructor 1 called.\n";
}

// Delegating Constructor
Box::Box(double side) : Box{side, side, side}
{
	cout << "Box constructor 2 called.\n";
}

double Box::volume() {
	return m_length * m_width * m_height;
}

int main()
{
	Box box1{2.0, 3.0, 4.0}; //An arbitrary box
	Box box2{5.0}; // A box that is a cube
	cout << "box1 volume = " << box1.volume() << endl;
	cout << "box2 volume = " << box2.volume() << endl;

	return 0;
}
