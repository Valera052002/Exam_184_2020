#include<iostream>
#include<cstring>

using namespace std;
class Worker
{
string surname;
int experience, salaryh, hours, salary;

public:
void create(string sn, int exp, int sh, int h)

{
surname = sn;
experience = exp;
salaryh = sh;
hours = h;

}
void receive()
{
cout<<surname<<endl<<"Experience is "<<experience<<endl<<"Hourly wage is "<<salaryh<<endl<<"Valera has worked "<<hours<<" hours"<<endl;
}
};

int main()

{
string surname;
int experience, salaryh, hours, salary;
cout<<"Enter worker's name: "; cin>>surname; cout<<endl;
cout<<"Enter worker's experience: "; cin>>experience; cout<<endl;
cout<<"Enter worker's hourly wag: "; cin>>salaryh; cout<<endl;
cout<<"Enter how much hours "<<surname<<" has worked: "; cin>>hours; cout<<endl;

Worker objWorker;
objWorker.create(surname, experience, salaryh, hours);
objWorker.receive();
system ("pause");
return 0;
}