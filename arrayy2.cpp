#include<iostream>
using namespace std;
int main()
{

	int i;
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	
	int max=a[0];
	for(i=0;i<n;i++)
	{
		if (max<a[i])
		{
			max=a[i];
			
		}

	}
	cout<<"max no. is"<<" "<<max;

};

