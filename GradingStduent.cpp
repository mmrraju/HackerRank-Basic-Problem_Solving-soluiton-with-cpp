#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> gradingStudent(vector<int> mark)
{
    int  m;
    for(int i=0; i<mark.size(); i++)
    {
        if(mark[i]%5!=0)
        {
            m=(mark[i]/5+1)*5;
            if(m-mark[i]<3)
                mark[i]=m;

        }
    }
    return mark;
}
int main()
{
    vector<int> mark={75, 67, 38};
    vector<int> result= gradingStudent(mark);
    for(int i=0; i<result.size(); i++)
        cout<<result[i]<<endl;
}
