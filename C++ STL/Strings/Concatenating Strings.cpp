#include <iostream>
using namespace std;

int main() {

	string first;								// Stores the first name
	string second;								// Stores the second name

	cout << "Enter your first name: ";
	cin >> first;								// Read first name

	cout << "Enter your second name: ";
	cin >> second;								// Read second name

	string sentence = "Your full name is ";		// Create basic Sentence
	sentence += first + " " + second + ".";		// Augment with names

	cout << sentence << endl;					// Output the sentence
	cout << "The string contains "
	     << sentence.length() << " characters."
	     << endl;

	return 0;
}

/* Output:
Enter your first name: John
Enter your second name: Doe
Your full name is John Doe.
The string contains 27 characters.
*/
