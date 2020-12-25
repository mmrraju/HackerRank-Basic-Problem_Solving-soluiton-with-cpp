#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int pdfView(vector<int> h, string word)
{
    char c;
    string str="abcdefghijklmnopqrstuvwxyz";
    int len=word.size();
    int ht=0;
    for(int i=0; i<len; i++)
    {
        c=word[i];
        for(int j=0; j<26; j++)
        {
            if(c==str[j])
            {
                ht=max(ht, h[j]);
                break;
            }

        }
    }
    return ht*len;
}
int main()
{
    vector<int> height { 1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 7 };
    /*for(int i=0; i<26; i++)
        cin>>height[i];*/
    string word;
    cin>>word;
    int result=pdfView(height, word);
    cout<<result<<endl;


}
