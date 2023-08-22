#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=0;
	int a[n];
	int j;
	int temp;
	while(i!=j)
	{
		if(a[i]%2==0)
		i++;
		else
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}

