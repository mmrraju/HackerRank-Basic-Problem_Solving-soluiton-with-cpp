#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={1, 2, 4, 3, 5};
    int n=arr.size();
    sort(arr.begin(), arr.end());
    int minimum=0, maximum=0;
    for(int i=0; i<n; i++)
    {
        if(i!=n-1)
        {
            minimum= minimum+arr[i];
        }
        if(i>0)
        {
            maximum= maximum+arr[i];
        }
    }
    cout<<minimum<<" "<<maximum<<endl;
}
