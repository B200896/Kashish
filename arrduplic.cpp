#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=0;
	int a[n];
	int j;
	int count=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	for(i=0;i<n;i++)
	{
	
	for(j=i+1;j<n;j++)
	{
		
		if(a[i]==a[j])
		{
			count+=1;
			cout<<"The no. is:"<<a[i]<<endl;
		}
		
	}}
	
	cout<<"The duplicate no. repeating:"<<count<<" "<<"time";
}

