#include<iostream>
using namespace std;
class Engine
{
    double horsepower;
    public:
    void setpower()
    {
        cout<<"Enter Power:";
        cin>>horsepower;
    }
    double getpower(){return horsepower;}
};
class car
{
    Engine e; string model;
    public:
        void setcar()
        {
            e.setpower();
            cout<<endl<<"Enter car model:";
            cin>>model;
        }
        void display()
        {
            cout<<endl<<"Power: "<<e.getpower()<<endl<<"Model "<<model;
        }
};
int main()
{
    car c;
    c.setcar();
    c.display();
}
