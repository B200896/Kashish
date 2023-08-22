#include<iostream>
using namespace std;
int inc(int *n)
{
	int num=0;
	num=*n+1;
	return num;
}

	
int main()
{
	int n;
	cin>>n;
	int *ptr=&n;
	int i=inc(&n);
	cout<<i;
}