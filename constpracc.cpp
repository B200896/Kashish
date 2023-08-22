#include<bits/stdc++.h>
using namespace std;
class student{
	string name;
	int age;
public:
	student(string n,int a)
	name=n;
	age=a;

	void input()
	{
		cin>>name;
		cin>>age;
	}
	void output()
	{
		cout<<name;
		cout<<age;
	}
};
int main()
{
	student s1;
	s1.output();

}
