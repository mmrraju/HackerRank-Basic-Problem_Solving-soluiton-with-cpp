//Author MMR Raju 05 Dec 2020
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int a[x];
    for(int i=0; i<x; i++)
    {
        cin>>a[i];
    }
    int d, m;
    cin>>d>>m;
    int count=0;
    for(int i=0; i<x; i++)
    {
        int s=0;
        for(int j=0; j<m; j++)
        {
            s = s + a[i+j];

        }
        if(s == d)
            {
                count++;
                s=0;
            }
    }
    cout<<count<<endl;
}
