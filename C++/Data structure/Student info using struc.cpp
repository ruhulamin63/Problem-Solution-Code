#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;
    int credit;
    float cgpa;
public:
    void setValues();
    void getValues();
};

void Student::setValues()
{
   cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Student name: ";
    cin>>name;
    cout<<"Enter Credit: ";
    cin>>credit;
    cout<<"Enter CGPA: ";
    cin>>cgpa;
}

void Student::getValues()
{
    cout<<"ID: "<<id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Credit:"<<credit<<endl;
    cout<<"CGPA:"<<cgpa<<endl;
}

int main()
{

int i,id,name,credit,cgpa;
Student s[5];
for(i=0;i<5;i++)
{
  cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Student name: ";
    cin>>name;
    cout<<"Enter Credit: ";
    cin>>credit;
    cout<<"Enter CGPA: ";
    cin>>cgpa;
    s[i].setValues();
    cout<<endl;
}


for(i=0;i<5;i++)
{
    cout<<"Enter ID: ";
    cin>>id;
    cout<<"Enter Student name: ";
    cin>>name;
    cout<<"Enter Credit: ";
    cin>>credit;
    cout<<"Enter CGPA: ";
    cin>>cgpa;
    s[i].getValues();
    cout<<endl;
}


}
