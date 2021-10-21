#include<iostream>
using namespace std;

//Blue print or model of Employee CLASS

class Employee{
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
    // Constructor have Three rules to follow in:
    // 1. Constructor cannot have a return type
    // 2. Constructor will have the same name as the class
    // 3. Constructor must be Public.
    Employee(string Name, string College, int Age)
    {
        name = Name;
        college = College;
        age = Age;
    }
};

//Object of the Employee class

int main()
{
    //Now we have build the Object for our constructor Employee by passing the parameters
    Employee employee1 = Employee("Sagnik","BPPIMT",20);
    employee1.Introduce();

    Employee employee2 = Employee("Subarna","RCC",20);
    employee2.Introduce();
}