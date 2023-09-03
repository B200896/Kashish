#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		a[i]=sum;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
