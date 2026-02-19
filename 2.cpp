#include<iostream>
using namespace std;
class Book
{
    string title,author;
    public:
        void setbook()
        {
            cout<<endl<<"Enter title:";
            getline(cin,title);
            cout<<endl<<"Enter author:";
            getline(cin,author);
        }
        void displaybook()
        {
            cout<<endl<<"Title: "<<title<<endl<<"Author: "<<author;
        }
};
int main()
{
    Book *books=new Book[5];
    for(int i=0;i<5;i++)
    {
        books[i].setbook();
    }
    for(int i=0;i<5;i++) books[i].displaybook();
}
