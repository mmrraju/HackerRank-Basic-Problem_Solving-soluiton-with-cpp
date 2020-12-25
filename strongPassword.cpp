#include<bits/stdc++.h>
using namespace std;
int main()
{
    //string number="0123456789";
    //string upper_case="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    //string lower_case="abcdefghijklmnopqrstuvwxyz";
    string str;
    cin>>str;
    int len=str.size();
    bool N, U, L, S;
    N=U=L=S=false;
    int count=0;
    for(int i=0; i<len; i++)
    {
        if(isupper(str[i]))
            U=true;
        if(islower(str[i]))
            L=true;
        if(isdigit(str[i]))
            N=true;
        if(str[i]=='!'|| str[i]=='@'|| str[i]=='#'|| str[i]=='$'|| str[i]=='%'|| str[i]=='^'|| str[i]=='&'|| str[i]=='*'|| str[i]=='('|| str[i]==')'|| str[i]=='-'|| str[i]=='+')
            S=true;
    }
    if(!U)
        count++;
    if(!L)
        count++;
    if(!N)
        count++;
    if(!S)
        count++;
    if(len<6)
        cout<<max(6-len, count);
    else
        cout<<count;
}
