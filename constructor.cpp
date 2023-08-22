#include<bits/stdc++.h>
using namespace std;
class Person{
public:
	int Age;
	string Name;
	Person(string n,int a)
	{
		Name =n;
		Age=a;
	}
	void settermethod()
{
	cin>>Name;
	cin>>Age;
}

	void displayInfo()
	{
		cout<<"Name:"<<Name<<"\n";
		cout<<"Age:"<<Age<<endl;
	}
};
	int main()
	{
	
	Person p1("obj1",1);
	Person p2("obj2",2);
	p1.displayInfo();
	p1.settermethod();
	p1.displayInfo();
	p2.settermethod();
	p2.displayInfo();
	}