#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={5, 5, 2, 4};
    sort(arr.begin(), arr.end(), greater<int>());
    int count=0;
    for(int i=0; i<arr.size(); i++)
    {
        if(arr[i]==arr[0])
            count++;
    }
    cout<<count<<endl;
}
