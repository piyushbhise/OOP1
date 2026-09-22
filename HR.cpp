#include<iostream>
using namespace std;

class employee
{
int age;
string name;
int empID;
public:
employee(int a, string n, int id)
{
age = a;
name = n;
empID = id;
}
~employee()
{
cout<<"DESTRUCTOR CALLED FOR. "<<endl;
}
void display()
{
cout<<"Employee record createtd"<<endl;
cout<<"AGE OF THE EMPLOYEE IS: "<<age<<endl;
cout<<"NAME OF THE EMPLOYEE IS: "<<name<<endl;
cout<<"ID OF THE EMPLOYEE IS: "<<empID<<endl;
}
};
int main()
{
employee e1(17, "PIYUSH" ,1001);
e1.display();

return 0;
}
