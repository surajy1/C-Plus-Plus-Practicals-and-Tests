#include <iostream>
using namespace std;

class BankAccount {
private:
	string account_holder;
	long long account_number;
	double account_balance;

public:
	void set_account_holder(string name) {
		account_holder = name;
	}

	void set_account_number(long long number) {
		account_number = number;
	}

	void deposit(double amount) {
		account_balance += amount;
	}

	void withdraw(double amount) {
		if (amount > account_balance) {
			cout << "\nInsufficient funds.";
		}
		else
			account_balance -= amount;
	}

	double get_balance() {
		return account_balance;
	}

	string get_name() {
		return account_holder;
	}
};

int main() {

	BankAccount my_account;
	my_account.set_account_holder("John Smith");
	my_account.set_account_number(1234567890);
	my_account.deposit(100.0);
	my_account.withdraw(50.0);
	cout << "Account balance: " << my_account.get_balance() << endl;

	return 0;
}
