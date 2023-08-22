#include<iostream>
using namespace std;
int cube(int *n)
{
	int cubenum;
	cubenum=*n **n **n;
	return cubenum;
}
int main()

{
	int n;
	cin>>n;
	int *ptr=&n;
	int c=cube(&n);
	cout<<c;
}