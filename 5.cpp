#include <iostream>
using namespace std;

class Department
{
private:
    string name;
    string code;

public:
    void setDepartment()
    {
        cout << "Enter Department Name: " << endl;
        getline(cin, name);

        cout << "Enter Department Code: " << endl;
        getline(cin, code);
    }

    void showDepartment() const
    {
        cout << "Department: " << name << endl;
        cout << "Code: " << code << endl;
    }
};

class Student
{
private:
    string name;
    int age;
    Department dept;

public:
    void setStudent()
    {
        cout << endl << "Enter Student Name: " << endl;
        getline(cin, name);

        cout << "Enter Age: " << endl;
        cin >> age;
        cin.ignore();

        dept.setDepartment();
    }

    void showStudent() const
    {
        cout << endl << "Student Name: " << name << endl;
        cout << "Age: " << age << endl;
        dept.showDepartment();
    }
};

int main()
{
    Student s[3];

    for(int i = 0; i < 3; i++)
    {
        cout << endl << "--- Enter details of Student " << i+1 << " ---" << endl;
        s[i].setStudent();
    }

    cout << endl << "===== STUDENT RECORD =====" << endl;

    for(int i = 0; i < 3; i++)
    {
        s[i].showStudent();
    }

    return 0;
}
