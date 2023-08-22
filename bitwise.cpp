#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	cout<<"THE number is:"<<num;
	if(num & 1==1)
	{
		cout<<"The bit is set"<<" "<<num;

	}
	else
	{
		cout<<"The bit is unset";
	}

};