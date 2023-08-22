#include<iostream>
using namespace std;
class Employee{
private:
	string name;
	int id;
	int salary;
public:
	Employee()
	{
		name="Kashish";
		id=7403;
		salary=20000;
	}
	void disp()
	{
		cout<<"Name:"<<name<<"\n";
		cout<<"ID no.:"<<id<<"\n";
		cout<<"Salary:"<<salary;
	}
	void inputfx()
	{
		cin>>name;
		cin>>id;
		cin>>salary;
	}};
	int main()
	{
		Employee E1;
		E1.disp();
		E1.inputfx();
	};

