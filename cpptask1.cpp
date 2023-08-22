#include<iostream>
using namespace std;
class fraction{
private:
	int x;
	int y;
	int add;
	int substract;
	int multiply;
	int divide;
public:
	fraction()
	{
	int x=4;
	int y=2;
}
void addfx(){
	add=x+y;
}
void subfx(){
	substract=x-y;
}
void mulfx(){
	multiply=x*y;
}
void divfx(){
	divide=x/y;
}
void inputfx()
{
	cin>>x>>y;
	
}
void disfx()
{   cout<<"Add:"<<add<<"\n";
    cout<<"Substract:"<<substract<<"\n";
	cout<<"Multiply:"<<multiply<<"\n";
	cout<<"divide:"<<divide;
}
};
int main()
{
	fraction f1;
	f1.inputfx();
	f1.addfx();
	f1.subfx();
	f1.mulfx();
	f1.divfx();
	f1.disfx();
}