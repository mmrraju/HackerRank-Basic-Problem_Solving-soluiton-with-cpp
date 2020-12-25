#include<iostream>
using namespace std;
int main()
{
    int a[3], b[3], countA=0, countB=0;
    for(int i=0; i<3; i++)
        cin>>a[i];
    for(int j=0; j<3; j++)
        cin>>b[j];
    for(int k=0; k<3; k++)
    {
        if(a[k]>b[k])
            countA++;
        if(a[k]<b[k])
            countB++;
    }
    cout<<"Alis = "<<countA<<" Bobs = "<<countB<<endl;
}

