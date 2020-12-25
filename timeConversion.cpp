#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string timeConvertion(string str)
{
    string hour_string=str.substr(0,2);
    int hour = stoi(hour_string);
    size_t pos=str.find("PM");
    if(pos!=string::npos)
    {
        if(hour+12<24)
            hour_string = to_string(hour+12);
        else
            hour_string="12";
    }
    else{
        if(hour==12)
            hour_string="00";
    }
    return str.replace(0, 2, hour_string).erase(str.size()-2);
}
int main()
{
    string str="12:03:10AM";
    string result=timeConvertion(str);
    cout<<result;
}
