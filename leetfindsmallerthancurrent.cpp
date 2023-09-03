#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	int count=0;
	int b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]<a[i])
			{
				count+=1;
				//b[j]=count;
			}
		}
		
			b[i]=count;
			cout<<b[i];
		
		//cout<<b[j];
	}
	
	}

