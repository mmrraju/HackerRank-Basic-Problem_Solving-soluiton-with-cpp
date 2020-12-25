///MMR Raju 16 Dec 2020
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	vector<int> l;
	for(int i=0; i<n; i++)
	{
	    int v;
	    cin>>v;
	    l.push_back(v);
	}
	int c, d, maximum=0;
	for(int i=0; i<n; i++)
	{
	    c=count(l.begin(), l.end(), i);
	    d=count(l.begin(), l.end(), i-1);
	    c=c+d;
	    if(c>maximum)
	        maximum=c;
	}
	cout<<maximum;
	return 0;
}
