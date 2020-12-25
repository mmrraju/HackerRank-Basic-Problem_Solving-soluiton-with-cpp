#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, k;
    cin>>m>>k;
    int arr[m];
    for(int i=0; i<m; i++)
    {
        cin>>arr[i];
    }

    int count=0;

    for(int i=0; i<m-1; i++)
    {
        for(int j=m-1; j>i; j--)
        {
            if( (arr[i]+arr[j])%k==0)
                count++;
        }
    }
    cout<<count<<endl;
}
