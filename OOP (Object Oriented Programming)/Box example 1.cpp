#include <iostream>
using namespace std;

class Box {
public:
	double volume()
	{
		return m_length * m_width * m_height;
	}

private:
	double m_length{1.0};
	double m_width{1.0};
	double m_height{1.0};
};

int main()
{
	Box myBox;

	cout << "Volume of myBox is " << myBox.volume() << endl;

	return 0;
}
