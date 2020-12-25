#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int level=0, num_valley=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='U')
        {
            if(level==-1)
                num_valley++;
            level++;
        }
        else
            level--;

    }
    cout<<num_valley<<endl;
}
