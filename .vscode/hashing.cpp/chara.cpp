#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
   /* int hash[256]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]]++;
    }*/
   map<char,int>mp;
   for(int i=0;i<s.size();i++)
   {
        mp[s[i]]++;
   }
   
    cout<<"freq of:"<<endl;
    char c;
    cin>>c;
    cout<<mp[c];
    return 0;
}
