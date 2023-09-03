
#include <iostream>

using namespace std;
int main()
{
	int n;
	cin>>n;
	int i;
	int a[n];
	int flag=0;
	//int s[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
    	if(a[i]==a[n-i-1])
    	{
    	    flag=1;
    	}
    	else
    	{
    	    flag=0;
    	    break;
    	}
	}
	if(flag==1)
	{
	    cout<<"it is palindrome";
	}
	else
	
	    cout<<"it is not palindrome";
};
