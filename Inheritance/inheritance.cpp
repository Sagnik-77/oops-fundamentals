#include<iostream>
using namespace std;

class AEmployee{                        // abstract class
    virtual void askforpromotion() = 0; // virtual function
};

class Employee:AEmployee {
    private:
    string college;
    int age;
    protected:
    string name;


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

//Inheritance of Classes

class Developer: public Employee{
    public:
    string favProgramLanguage;
    Developer(string Name, string College, int Age, string FavProgramLanguage)
    : Employee(Name, College, Age)
    {
        favProgramLanguage = FavProgramLanguage;
    }
    void fixBug(){
        cout<< name <<" from "<< getCollege() <<" fixed bug using "<<favProgramLanguage<<endl;
    }
};

class Teacher : public Employee{
    public:
    string subject;
    Teacher(string Name, string College, int Age, string Subject)
    : Employee(Name, College, Age)
    {
        subject = Subject;
    }
    void prepareLesson(){
        cout<< name <<" is preparing "<<subject<<" lesson "<<endl;
    }
};

//Object of the Employee class

int main()
{
    //Now we have build the Object for our constructor Employee by passing the parameters

    Developer dev = Developer("Somnath","BNGHS",50,"Python");
    Teacher teach = Teacher("Tanima","BNGHS", 48, "Bengali");
    teach.prepareLesson();
    teach.askforpromotion();
}