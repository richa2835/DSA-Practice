#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int> mp;

    int n;
    cin>>n;
    int a[n];
    cout<<"enter elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    

    

    /*
    cout<<"enter max:"<<endl;
    int m;
    cin>>m;
    int hashh[m+1]={0};
    for(int i=0;i<n;i++)
    {
        hashh[a[i]]++;
    }
    */

    cout<<"count of:"<<endl;
    int q;
    cin>>q;
    cout<<mp[q];
    return 0;
}