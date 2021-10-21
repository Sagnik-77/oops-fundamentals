#include<iostream>
using namespace std;

class AEmployee{                        // abstract class
    virtual void askforpromotion() = 0; // virtual function
};

class Employee:AEmployee {
    private:
    string name;
    string college;
    int age;

    public:
    //Setter for name
    void setName(string Name)
    {
        name = Name;
    }
    // Getter for name
    string getName() 
    {
        return name;
    }
    //Setter for college
    void setCollege(string College)
    {
        college = College;
    }
    // Getter for college
    string getCollege()
    {
        return college;
    }
    //Setter for age
    void setAge(int Age)
    {
        if(Age >= 18)
        age = Age;
    }
    //Getter for age
    int getAge()
    {
        return age;
    }

    void Introduce()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"College: "<<college<<endl;
        cout<<"Age: "<<age<<endl;
    }
    Employee(string Name, string College, int Age)
    {
        name = Name;
        college = College;
        age = Age;
    }
    void askforpromotion()
    {
        if(age>30)
            cout<<name<<" got promoted"<<endl;
        else
            cout<<name<<" haven't got promoted"<<endl;
    }
};

//Object of the Employee class

int main()
{
    //Now we have build the Object for our constructor Employee by passing the parameters
    Employee employee1 = Employee("Sagnik","BPPIMT",20);

    Employee employee2 = Employee("Subarna","RCC",40);

    employee1.askforpromotion();
    employee2.askforpromotion();

}