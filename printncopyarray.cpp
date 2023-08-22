#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr1[n];
	int i=0;
	int j=0;
	int arr2[n];
	for(i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
	for(i=0;i<n;i++)
	{
		arr2[i]=arr1[i];
	}
	for (j=0;j<n;j++)
	{
		cout<<arr2[j];
	}
	
	
}
