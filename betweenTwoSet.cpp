//Author: MMR Raju 04 Dec 2020.
#include<bits/stdc++.h>
int lcmFun(int, int);
int gcdFun(int, int);
using namespace std;
int gcdFun(int x, int y)
{
    int temp;
    while(y>0)
    {
         temp=y;
        y=x%y;
        x=temp;
    }
    return x;
}
int lcmFun(int x, int y)
{
    return (x*y)/gcdFun(x, y);
}

int main()
{
    int m, n;
    cin>>m>>n;
    int a[m], b[n];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    for(int j=0; j<n; j++)
    {
        cin>>b[j];
    }
    //Work for LCM
    int lm=a[0];
    for(int i=0; i<m-1; i++)
    {
        //lm=boost::math::lcm(lm, a[i+1]);
        lm=lcmFun(lm, a[i+1]);
        //cout<<lm<<" ";
    }

    //Work for GCM
    int gc=b[0];
    for(int i=0; i<n-1; i++)
    {
        gc=gcdFun(gc, b[i+1]);
        //cout<<gc<<" ";
    }


    int count=0;
    for(int i=lm, j=2; i<=gc; i=lm*j, j++)
    {
        if(gc%i==0)
        {
            count++;
        }
    }
    cout<<count<<endl;

}
