#include<iostream>
using namespace std;
int sum(int *x)
{
	int sum=0;
	for(int i=0;i<*x;i++)
	{
		sum+=i;
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	int *ptr=&n;
	int s=sum(&n);
	cout<<s;
}

