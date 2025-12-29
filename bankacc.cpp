#include <iostream>
using namespace std;
class BankAccount 
{
private:
    string accountHolder;
    int accountNumber;
    double balance;
public:
    BankAccount(string name, int number, double initialBalance) 
	{
        accountHolder = name;
        accountNumber = number;
        balance = initialBalance;
    }
    void deposit(double amount) 
	{
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
    void withdraw(double amount) 
	{
        if (amount <= balance) 
		{
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else 
		{
            cout << "Insufficient balance!" << endl;
        }
    }
    void display() 
	{
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main() 
{
    BankAccount myAccount("John Doe", 123456, 1000.0);
    myAccount.display();
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);
    myAccount.display();
    return 0;
}

