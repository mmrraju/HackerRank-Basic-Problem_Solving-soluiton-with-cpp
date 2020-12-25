#include<bits/stdc++.h>
using namespace std;
int camelCase(string s)
{
    s[0]=tolower(s[0]);
    int count=1;
    for(int i=0; i<s.size(); i++)
        if(isupper(s[i]))
            count++;
    return count;

}
int main()
{
    string str;
    cin>>str;
    int word_number=camelCase(str);
    cout<<word_number<<endl;
}
