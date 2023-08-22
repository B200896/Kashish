#include<iostream>
using namespace std;
int con(int *f,*c)
{
	*f=(*c*9/5)+32;
	*c=(*f-32)*5/9;
}
int main()
{
	int *f;
	int *c;
	int f;
	int c;
	cin>>f>>c;
	int *ptr1=&f;
	int *ptr2=&c;
	*f=&f;
	*c=&c;
	con(ptr1,ptr2,f,c)
	cout<<f<<" "<<c;



}
