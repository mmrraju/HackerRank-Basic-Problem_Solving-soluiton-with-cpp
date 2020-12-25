#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a= {1, 2, 3, 4, 5, 4, 3, 2, 1, 3, 4};
    vector<int>b;
    vector<int>c;
    for(int i=0; i<a.size(); i++)
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
    int higest_count=0, result;
    for(int i=0; i<b.size(); i++)
        {
            int count=0;
            for(int j=0; j<a.size(); j++)
            {
                if(b[i]==a[j])
                    count++;
            }
            if(higest_count<count)
            {
                higest_count=count;
                result=b[i];
            }

            //c.push_back(count);
        }
    cout<<result<<endl;

}
