//Author MMR Raju 05 Dec 2020
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int a[m];
    for(int i=0; i<m; i++)
        cin>>a[i];
    int h_s, l_s;
    h_s=l_s=a[0];
    int h_count=0;
    int l_count=0;
    for(int i=1; i<m; i++)
    {
        if(a[i]>h_s)
        {
            h_s=a[i];
            h_count++;
        }
        else if(a[i]<l_s)
        {
            l_s=a[i];
            l_count++;
        }
    }
    cout<<h_count<<endl;
    cout<<l_count<<endl;
}
