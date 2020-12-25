#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s, t, i, j;
    cout<<"Enter the starting and ending point: ";
    cin>>s>>t;
    cout<<"\nEnter the location of apple & orange tree: ";
    int a, b;
    cin>>a>>b;
    cout<<"\nEnter the number of apple & orange: ";
    int m, n;
    cin>>m>>n;
    cout<<"\nEnter the distance of apple & orange: ";
    int apple_distance[m], orange_distance[n];
    for( i=0; i<m; i++)
        cin>>apple_distance[i];
    cout<<"\n ";
    for( j=0; j<n; j++)
        cin>>orange_distance[j];

    int apple=0, orange=0;

    for( i=0; i<m; i++)
    {
        //apple_distance[i]=apple_distance[i]+a;
        if((apple_distance[i]+a)>=s&&(apple_distance[i]+a)<=t)
        {
            apple++;
        }

    }
    for( j=0; j<n; j++)
    {
        //orange_distance[j]=orange_distance[j]+b;
        if( (orange_distance[j]+b) >= s && (orange_distance[j]+b) <= t)
            orange++;
    }
    cout<<endl<<apple<<endl<<orange<<endl;
    return 0;
}

