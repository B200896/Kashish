#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int *ptr1;
	int **ptr2;
	ptr1=&num;
	ptr2=&ptr1;
	cout<<*ptr1<<"\n"<<**ptr2;


}