#include<iostream>
using namespace std;
void sd(int *n1,int *n2,int *s, int *d)
{
	*s= *n1+ *n2;
	*d=*n1-*n2;
}
int main()
{
	int n1;
	int n2,sum,diff;
	cin>>n1;
	cin>>n2;
	int *ptr1=&n1;
	int *ptr2=&n2;
	int *s=&sum;
    int *d=&diff;
    sd(ptr1,ptr2,s,d);
    cout<<sum<<" "<<diff;
    


}