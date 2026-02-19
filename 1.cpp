#include<iostream>
using namespace std;
class Car
{
    int speed;
    public:
        void setspeed(int speed)
        {
            this->speed=speed;
        }
        void showspeed() const
        {
            cout<<endl<<"Speed: "<<speed;
        }
};
int main()
{
    Car c1;
    c1.setspeed(20);
    c1.showspeed();
}
