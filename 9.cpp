#include <iostream>
using namespace std;

class Project
{
private:
    string projectTitle;
    int duration;

public:
    Project() {}

    Project(string t, int d)
    {
        projectTitle = t;
        duration = d;
    }

    void showProject() const
    {
        cout << "Project: " << projectTitle << endl;
        cout << "Duration: " << duration << " months" << endl;
    }
};

class Employee
{
private:
    string empName;
    float salary;
    Project *project;
    static float taxRate;

public:
    Employee()
    {
        project = NULL;
    }

    void setEmployee(string name, float sal, Project *p)
    {
        empName = name;
        salary = sal;
        project = p;
    }

    static void changeTaxRate(float rate)
    {
        taxRate = rate;
    }

    void calculateNetSalary() const
    {
        float net = salary - (salary * taxRate / 100);

        cout << endl << "Employee: " << empName << endl;
        cout << "Gross Salary: " << salary << endl;
        cout << "Tax Rate: " << taxRate << "%" << endl;
        cout << "Net Salary: " << net << endl;

        if(project != NULL)
            project->showProject();
    }
};

float Employee::taxRate = 5.0;

int main()
{
    Project p1("AI System", 12);
    Project p2("Mobile App", 8);

    Employee emp[3];

    emp[0].setEmployee("Ali", 50000, &p1);
    emp[1].setEmployee("Hassan", 60000, &p2);
    emp[2].setEmployee("Ahmed", 55000, &p1);

    Employee::changeTaxRate(10);

    for(int i = 0; i < 3; i++)
        emp[i].calculateNetSalary();

    return 0;
}
