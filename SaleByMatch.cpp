#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    vector<int>b;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        a.push_back(k);
    }
    for(int i=0; i<n; i++)
    {
        int j;
        for(j=0; j<i; j++)
        {
            if(a[i]==a[j])
                break;
        }
        if(i==j)
            b.push_back(a[i]);
    }
    sort(b.begin(), b.end());
    int len_a=a.size();
    int len_b=b.size();
    int result=0;
    for(int i=0; i<len_b; i++)
    {
        int count=0;
        for(int j=0; j<len_a; j++)
        {
            if(b[i]==a[j])
                count++;
        }
        result=result+ count/2;
    }
    cout<<result<<endl;
}
