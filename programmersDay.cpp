#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    cin>>y;
    int d=243;
    string str, str1, str3;
    if(y>=1700 && y<=1917)
    {
        if(y%4==0)
            d++;
    }
    else if(y==1918)
    {
        d=d-14;
        if( y%400 || (y%4==0 & y%100!=0))
            d++;
    }
    else if(y>1918)
    {
        if( y%400 || (y%4==0 & y%100!=0))
            d++;
    }
    int day=256-d;
    string str2=".09.";
    str1 = to_string(day);
    str3 = to_string(y);


    str.insert(0,str1);
    str.insert(2,str2);
    str.insert(6, str3);

    cout<<str<<endl;
}
