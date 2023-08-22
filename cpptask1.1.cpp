#include<iostream>
using namespace std;
class Time{
private:
	int Hours;
	int Minutes;
public:
	Time()
	{
	Hours=19;
	Minutes=40;
}
void inputfx()
{
	cin>>Hours>>Minutes;
}
void disp()
{
	cout<<"Time:"<<Hours<<":"<<Minutes;

}};
int main()
{
	Time T1;
	T1.inputfx();
	T1.disp();
};


