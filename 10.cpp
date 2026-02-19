#include <iostream>
using namespace std;

class Branch
{
private:
    string branchName;
    string city;

public:
    Branch() {}

    Branch(string name, string c)
    {
        branchName = name;
        city = c;
    }

    void showBranch() const
    {
        cout << "Branch: " << branchName << endl;
        cout << "City: " << city << endl;
    }
};

class Account
{
private:
    string accountHolder;
    float balance;
    Branch *branch;
    static string bankName;
    static float interestRate;

public:
    Account()
    {
        branch = NULL;
    }

    void setAccount(string name, float bal, Branch *b)
    {
        accountHolder = name;
        balance = bal;
        branch = b;
    }

    static void updateInterest(float rate)
    {
        interestRate = rate;
    }

    void showBalance() const
    {
        cout << endl << "Bank: " << bankName << endl;
        cout << "Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;

        if(branch != NULL)
            branch->showBranch();
    }
};

string Account::bankName = "National Bank";
float Account::interestRate = 4.0;

int main()
{
    Branch b1("Main Branch", "Karachi");
    Branch b2("City Branch", "Lahore");

    Account acc[3];

    acc[0].setAccount("Ali", 10000, &b1);
    acc[1].setAccount("Hassan", 15000, &b2);
    acc[2].setAccount("Ahmed", 20000, &b1);

    Account::updateInterest(6.5);

    for(int i = 0; i < 3; i++)
        acc[i].showBalance();

    return 0;
}
