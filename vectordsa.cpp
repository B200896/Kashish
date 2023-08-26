#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
	
	vector <int >v;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	vector<int >ans;
	int idx=0;
	for(int i=n-1;i>=0;i--)
	{
		ans.push_back(v[i]);
	}
	for(auto it : ans)
	{
		cout<<it<<" ";
	}
	
}
