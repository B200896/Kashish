#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i;
	int a[n];
	int j;
	int temp;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]%2!=0)
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
			
		}
		
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
