#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++)
	{
		int x;//6
		cin>>x;
		v.push_back(x);
	}
	int x=6;
	v.push_back(x);
	n=v.size();
	for(int i=0;i<n;i++)
	{
		cout<<v[i];
	}
}
