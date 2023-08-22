#include<bits/stdc++.h>
using namespace std;
class Person{


public:
	int Age;
	string Name;
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
	Person p1;
	//cout<<"Person age is:"<<p1.age<<endl;
	//cout<<"Person occupation is:"<<p1.occupation<<endl;
	p1.settermethod();
	p1.displayInfo();


}

