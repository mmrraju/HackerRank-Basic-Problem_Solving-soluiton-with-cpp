#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    int n, k, b;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        int j;
        cin>>j;
        a.push_back(j);
    }
    cin>>b;
    int sum=0;
    for(int i=0; i<n; i++)
        sum=sum+a[i];
    sum=(sum-a[k])/2;
    if(b==sum)
        cout<<"No apptitude";
    else
        cout<<(sum-b)<<endl;
}
