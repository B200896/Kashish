#include<iostream>
using namespace std;
int main()
{
	int num;
	int *ptr1;
	int **ptr2;
	cin>>num;
	ptr1=&num;
	ptr2=&ptr1;
	**ptr2=20;
	cout<<**ptr2;



}