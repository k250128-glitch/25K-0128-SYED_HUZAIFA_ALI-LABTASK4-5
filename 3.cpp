#include<iostream>
using namespace std;
class Bank
{
    static float interestrate;
    public:
        static void changerate(float r)
        {
            interestrate=r;
        }
        void showrate()
        {
            cout<<endl<<interestrate;
        }
};
float Bank ::interestrate=3.5;
int main()
{
    Bank b1;
    b1.showrate();
    Bank::changerate(5.5);
    b1.showrate();
}
