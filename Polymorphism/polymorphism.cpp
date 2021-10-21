#include<iostream>
using namespace std;

//Abstract Class:
class AbstractStudent{
    virtual void Permission()=0;      //This is a method inside the Abstract class - OBLIGATORY
    //Virtual function or abstract funtion
    virtual void Assignment()=0; //This is another method inside the Abstract
};
//Class:
class Student{
    //In C++ there are three access modifiers:
    //Private: Not accessible outside the class
    //Public: Accessible outside the class
    //Protected: Will know later
protected: 
    string Name;
    string College;
    int Roll;

public:
    void Introduce()
    {
        cout<<"Name:"<<Name<<endl;
        cout<<"College:"<<College<<endl;
        cout<<"Roll:"<<Roll<<endl;
    }
    //Setter and Getter Methods:
    public:
    //Setter for name
    void setName(string name)
    {
        Name = name;
    }
    //Getter for name
    string getName()
    {
        return Name;
    }
    //Setter for college
    void setCollege(string college)
    {
        College = college;
    }
    //Getter for college
    string getCollege()
    {
        return College;
    }
    //Setter for roll
    void setRoll(int roll)
    {
        Roll = roll;
    }
    //Getter for roll
    int getRoll()
    {
        return Roll;
    }

    //Constructor:
    
    Student(string name, string college, int roll){
        Name = name;
        College = college;
        Roll = roll;
    }

    //Abstract Function:
    void Permission(){
        if(College == "RCCIIT")
            cout<<Name<<" has permission to join the webinar"<<endl;
        else
            cout<<Name<<" doesn't has permission to join the webinar"<<endl;
    }

    void Assignment(){
        if(Roll > 60)
            cout<<Name<<" no need to submit assignment"<<endl;            
        else
            cout<<Name<<" needs to submit assignment"<<endl;
    }

    virtual void ProjectWork(){
        cout<<Name<<" is doing project on Automation with python"<<endl;
    }
};

class HigherStudies : public Student{
    public:
    string Honours;
    void Studies(){
        cout<<Name<<" is studying MTech in "<<Honours<<endl;
    }
    HigherStudies(string name, string college, int roll,string honours)
            :Student(name,college,roll)
            {
                Honours = honours;
            }
    void ProjectWork(){
        cout<<Name<<" is doing project on Webdevlopment"<<endl;
    }
};

class Internship : public Student{
    public:
    string Company;
    void Studies(){
        cout<<Name<<" is studying MTech in "<<Company<<endl;
    }
    Internship(string name, string college, int roll,string company)
            :Student(name,college,roll)
            {
                Company = company;
            }
    void ProjectWork(){
        cout<<Name<<" is doing project on Microprocessor"<<endl;
    }
};

//Object:
int main()
{
    HigherStudies hstudent = HigherStudies("Sagnik","BPPIMT",84,"ECE");
    Internship client = Internship("Subarna","RCCIIT",57,"ECE");
    
    Student* student1 = &hstudent;
    Student* student2 = &client;

    student1->ProjectWork();
    student2->ProjectWork();
}