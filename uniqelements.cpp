#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=0;
    int j=0;
    int count=0;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[0]!=a[i])
            {
                count+=1;
                cout<<"unique element is:"<<" "<<a[i];

            }

        }

    }
    cout<<count;

}
