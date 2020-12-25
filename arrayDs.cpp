#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3};
    int len=a.size();
    reverse(a.begin(), a.begin()+len);
    for(int i=0; i<len; i++)
    {
        cout<<a[i]<<" ";
    }



}
