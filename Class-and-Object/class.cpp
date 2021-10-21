#include<iostream>
using namespace std;

//Blue print or model of Employee CLASS

class Employee{
    //In C++ we have three access modifiers: public, private, protected.
    //Private: Not accessable outside the class
    //Public: Accessable outside the class
    //Protected: Somewhere between public and private will know more about in the topic Inheritance
    public:
    string name;
    string college;
    int age;

    void Introduce()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"College: "<<college<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

//Object of the Employee class

int main()
{
    Employee employee1;
    employee1.name="Sagnik";
    employee1.college="BPPIMT";
    employee1.age=20;

    employee1.Introduce();

    Employee employee2;
    employee2.name="Subarna";
    employee2.college="RCC";
    employee2.age=20;

    employee2.Introduce();
}