#include<iostream>
using namespace std;
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int main()
{
	int(*operation)(int a,int b);
	operation=add;
	cout<<"add="<<operation(3,5)<<endl;
	operation=sub;
	cout<<"sub="<<operation(3,5);
}