#include<iostream>
using namespace std;
void evd(int *n)
{
	if(*n%2!=0)
	{
		cout<<"odd";
	}
	else
	{
		cout<<"Even";
     }
}
int main()
{
	int n;
	cin>>n;
	int *ptr;
	ptr=&n;
	evd(&n);
}




	