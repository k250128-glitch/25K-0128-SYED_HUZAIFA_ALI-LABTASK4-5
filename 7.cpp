#include <iostream>
using namespace std;

class Account
{
private:
    string accountHolder;
    float balance;
    static string bankName;
    static float interestRate;

public:
    Account(string name, float b)
    {
        accountHolder = name;
        balance = b;
    }

    void deposit(float amount)
    {
        balance += amount;
    }

    void showBalance() const
    {
        cout << "Holder: " << accountHolder << endl;
        cout << "Bank: " << bankName << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
        cout << "Balance: " << balance << endl << endl;
    }

    static void setBank(string name, float rate)
    {
        bankName = name;
        interestRate = rate;
    }
};

string Account::bankName = "Default Bank";
float Account::interestRate = 0.0;

int main()
{
    Account a1("Ali", 10000);
    Account a2("Hassan", 15000);
    Account a3("Ahmed", 20000);

    Account::setBank("National Bank", 5.5);

    a1.deposit(2000);
    a2.deposit(1000);
    a3.deposit(500);

    a1.showBalance();
    a2.showBalance();
    a3.showBalance();

    return 0;
}
