#include<iostream>
using namespace std;
int grade(int *n1,int *n2,int *n3)
{
	int avg=(*n1+*n2+*n3)/3;
	return avg;

}
int main()
{
	
	int n1;
	int n2;
	int n3;
	cin>>n1;
	cin>>n2;
	cin>>n3;
	
	int *ptr1=&n1;
	int *ptr2=&n2;
	int *ptr3=&n3;
	int p=grade(&n1,&n2,&n3);
	cout<<p;
}		

		
		

