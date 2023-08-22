#include<iostream>
using namespace std;
int prn(int *n)
{
	for(int i=0;i<=*n;i++)
	{
		cout<<i<<" ";

	}
		
}
int main()
{
	int i;
	int n;
	cin>>n;
	int *ptr=&n;
	i=prn(&n);


}
