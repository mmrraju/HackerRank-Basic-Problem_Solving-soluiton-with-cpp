#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, p;
    cin>>n>>p;
    int result = min(p/2, n/2-p/2);
    cout<<result;

}
