#include<iostream>
using namespace std;
void oddsum(int *n)
{
	int sum=0;
	for(int i=0;i<=*n;i++)
	{
		if(i%2!=0)
		{
			sum+=i;
		}
	}
	cout<<sum;
}
int main()
{
	int n;
	cin>>n;
	int *ptr=&n;
	oddsum(&n);
}


	
