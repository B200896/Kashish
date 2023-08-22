#include<iostream>
using namespace std;
int temp(float *x,float *y)
{
	float fer,float cel;
	fer=(*x*1.8)+32;
	cel=(*y-32)*0.555;
}
int main()
{
	float c,f;
	cin>>c>>f;
	float *x,*y;
	x=&c;
	y=&f;
	temp(x,y);
	cout<<"fer:"<<fer<<endl;
	cal=((*y)-32)*0.5555;
	cout<<"cel :"<<cel;



}
