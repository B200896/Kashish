#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int j=0;
    int k=n-1;
    int a[n];
    for( int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int i=0;
    while(i<=k)
    {
        if(a[i]==0)
        {
            swap(a[j],a[i]);
            i++;
            j++;
        }
        else if(a[i]==1)
        {
            i++;
        }
        else if(a[i]==2)
        {
            swap(a[i],a[k]);
            k--;
        }

    }
    for(i=0;i<n;i++)
        {
            cout<<a[i];
        }
}


