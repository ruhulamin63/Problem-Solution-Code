#include<iostream>

using namespace std;

struct student{
    int id;
    float cgpa;
    string name;
};

int main()
{
    student ruhul;
        ruhul.id=18380012;
        ruhul.cgpa=3.48;
        ruhul.name="Ruhul Amin";

        cout << "Id = " << ruhul.id << endl;
        cout << "Cgpa = " << ruhul.cgpa << endl;
        cout << "Name = " << ruhul.name << endl;

   return 0;
}
