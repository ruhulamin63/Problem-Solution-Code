#include<iostream>
#include<cstring>
using namespace std;

 struct DateofBirth {
                        int years;
                        int months;
                        int day;
				    };

	struct Emp {
                    char[25] name;
                    DateofBirth Dob;
                };
int main()
{
     Struct Emp data1;

     data1.name = "Julia Roberts";

     data1.Dob.day = "21";
     data1.Dob.months ="09" ;
     data1.Dob.years = "1967";

     cout<<data1.name<<endl;
     cout << data1.Dob.months<<" "<<data1.Dob.day <<" "<<data1.Dob.years<<endl;

 return 0;
}


