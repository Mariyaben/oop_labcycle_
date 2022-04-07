#include <iostream>
#include <string>
using namespace std ;

class person
{
    protected:
        string name;
        int age;
    public:
        person(string n,int a)
        {
            name = n;
            age = a;
        }
        void show()
        {
            cout << "Name : " << name << endl;
            cout << "Age  : " << age  << endl;
        }
};

class Employee : public person
{
    protected:
        float employee_code;
        int employee_salary;
    public:
        Employee(float code,int salary)
        {
            employee_code = code;
            employee_salary = salary;
        }
        void show()
        {
            cout << "Employee code : " << code << endl;
            cout << "Employee salary : " << salary << endl;
        }
};

class Grants
{
    protected:
        float bonus;
        float pen;
    public:
        Grants(float b,float p)
        {
            bonus = b;
            pen = p;
        }
        void show()
        {
            cout << "Bonus  : " << bonus << "%\n";
            cout << "Pension: " << pen   << "%\n";
        }
};

class Developer : public Employee,public Grants
{
    protected:
        int rank;
        int id;
        int Sal;
    public:
        Developer(string n,int a, float code,int salary, float b,float p)
            :Grants(b,p),Employee(code, salary)
        {
            rank = rk;
            DeID = id;
            salary = Bpay+(Bpay*(bonus/100))-(Bpay*(pen/100));
        }
        void show()
        {
            cout << "DETAILS OF DEVELOPER : \n";
            person::show();
            cout << "Rank  : " << rank << "\n";
            cout << "Mariya: " << id << "\n";
            Employee::show();
            Extragrants::show();
            cout << "Final Salary : " << Sal << endl;
        }
};

int main()
{
    string Nm;int ag,yrs,rk,id;
    float sal,b,p;
    cout << "Welcome\n\n";
    cout << "Enter the Details : \n\n";
    cout << "Name  : " ;
    cin >> Nm;
    cout << "Enter age : ";
    cin >> ag;
    cout << "Enter Bpay,Bonus and Pension percent : \n";
    cin >> sal >> b >> p ;
    cout << "Enter Years of Service : ";
    cin >> yrs ;
    cout << "Enter DevID and Rank :";
    cin >> id >> rk;
    cout << "\n\n";
    Developer D1(Nm,ag,sal,yrs,b,p,rk,id);
    D1.show();
    return 0;
}

