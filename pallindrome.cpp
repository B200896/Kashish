#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i;
	int a[n];
	int s[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	//int j;
	int flag=1;
	for(int j=n-1;j>=0;j--)
	{
	      s[j]=a[n-j-1];
	}
	for(int i=0;i<n;i++)
	{
	
		if (a[i]==s[i])
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
	 	}	
	}
	if(flag==1)
	{
		cout<<"it is palindrome";
	}
	else
	cout<<"it is not palindrome";

	//cout<<"Reverse array is"<<s[j];
};
