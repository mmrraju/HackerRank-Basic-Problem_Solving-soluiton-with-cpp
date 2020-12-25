
#include <bits/stdc++.h>

using namespace std;


int main() {
    int s;
    int n;
    int m;
    cin >> s >> n >> m;
    int k[n];
    int z=-1;
    int u[m];

    for(int i=0;i<n;i++)
    { cin >> k[i];
    }
    for(int i=0;i<m;i++)
    {
     cin >> u[i];    }
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<m;j++)
        {
        if(k[i]+u[j]<=s && k[i]+u[j]>z)
            z=k[i]+u[j];
    }
}
    cout<<z;
    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    vector<int>b;
    int budget, k, d;
    cin>>budget>>k>>d;
    for(int i=0; i<k; i++)
    {
        int j;
        cin>>j;
        a.push_back(j);
    }
    for(int i=0; i<d; i++)
    {
        int j;
        cin>>j;
        b.push_back(j);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int h=0;
    for(int i=0; i<k; i++)
    {
        for(int j=d-1; j>0; j--)
        {
            if(a[i]+b[j]<=budget)
                h=max(h,a[i]+b[j]);
        }
    }
    if(h==0)
    {
        h=-1;
        cout<<h<<endl;
    }
    else
        cout<<h<<endl;
}*/
