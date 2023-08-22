#include<iostream>
#include<math.h>
using namespace std;
int pow(int *ptr1,int* ptr2)
{
	return pow(*ptr1,*ptr2);
}
int main()
{   
	int a,b;
	cin>>a>>b;
	int res;
	int *ptr1=&a;
	int *ptr2=&b;
	res=pow(ptr1,ptr2);
	cout<<res;
}


