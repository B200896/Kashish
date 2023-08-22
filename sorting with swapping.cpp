#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        int mi=a[i+1];
        for(int j=i+1;j<n;j++)
        {
            mi = min(mi,a[j]);

        }

        if (mi<a[i])
        {
            int ti=-1;
            for(int j=i+1;j<n;j++)
            {
               {
                    ti =j;
                }
            }
            cout<<"t"<<ti<<" ";
            cout<<a[ti]<<" "<<a[i];
            swap(a[ti],a[i]);
        }



    }


}
