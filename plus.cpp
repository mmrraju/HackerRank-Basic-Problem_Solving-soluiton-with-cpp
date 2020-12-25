#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> ar={1, 1, 0, -1, -1};
    int positive= 0;
    int negative= 0;
    int zero=0;
    for(int i=0; i<ar.size(); i++)
    {
        if(ar[i]>0)
            positive++;
        if(ar[i]<0)
            negative++;
        else
            zero++;
    }
    float ratio1, ratio2, ratio3;
    ratio1=float(positive)/float(ar.size());
    ratio2=float (negative)/float(ar.size());
    ratio3=float(zero)/float(ar.size());

    cout<<fixed<<setprecision(6)<<ratio1<<endl;
    cout<<fixed<<setprecision(6)<<ratio2<<endl;
    cout<<fixed<<setprecision(6)<<ratio3<<endl;
}
