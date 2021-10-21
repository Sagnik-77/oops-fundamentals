// Encapsulation: It is the idea of Bundling or tying together data and methods that operates on that data.
// So that they are grouped together in a class. 
// Usage: We do this in order to prevent anyone or anything outside of our class to be able to directly access our data and to interact with it, modify it.

#include<iostream>
using namespace std;

//Blue print or model of Employee CLASS

class Employee{
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
};

//Object of the Employee class

int main()
{
    //Now we have build the Object for our constructor Employee by passing the parameters
    Employee employee1 = Employee("Sagnik","BPPIMT",20);
    employee1.Introduce();

    Employee employee2 = Employee("Subarna","RCC",20);
    employee2.Introduce();

    employee1.setAge(12);
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old"<<endl;
}