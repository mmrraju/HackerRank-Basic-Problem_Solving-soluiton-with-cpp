#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, catA, catB, mouse;
    cin>>n;
    while(n>0)
    {
        cin>>catA>>catB>>mouse;
        if( abs(mouse-catA)<abs(mouse-catB) )
            cout<<"Cat A"<<endl;
        else if( abs(mouse-catA)>abs(mouse-catB) )
            cout<<"Cat B"<<endl;
        else
            cout<<"Mouse C"<<endl;
        n--;

    }
}
