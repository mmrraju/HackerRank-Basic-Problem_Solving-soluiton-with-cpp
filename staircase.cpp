#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=n;
    for(int i=0; i<n; i++)
    {
        cout<<setw(k);
        for(int j=0; j<i+1; j++)
        {
            cout<<"#";

        }
        k--;
        cout<<endl;

    }
}
