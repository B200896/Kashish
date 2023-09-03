#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	int mul=0;
	for(int i=1;i<=10;i++)
	{
		
		if(num!=0)
		{
		mul=num*i;
		cout<<mul<<endl;
	}
	else
	{
		cout<<"Sorry but Not possible!";
		break;
	}
	}
}
