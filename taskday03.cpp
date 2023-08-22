#include<iostream>
using namespace std;
class rectangle{
private:
	int length;
	int breadth;
	int area;
	int parameterfx;

public:
	rectangle(){
	length=2;
	breadth=3;
}
void areafx()
{
	area=length*breadth;
}
void dis(){
	//cout<<"Input"<<length<<" "<<breadth<<endl;
	cout<<"Area="<<area<<"\n";
	cout<<"parameter="<<parameterfx;
	
}
void inputfxn()
{
	cin>>length>>breadth;
}
void parameter()
{
	parameterfx=2*(length+breadth);
}
};
int main(){
rectangle r1;
// r1.areafx();
// r1.dis();
r1.inputfxn();
r1.areafx();
r1.parameter();
r1.dis();

};




