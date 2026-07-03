#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    
    
    vector<int> v;
    vector<int> v2(5,0);
    v.emplace_back(10);
    v.emplace_back(20);
    v.emplace_back(30);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    for (auto x:v2)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    v.pop_back();
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<"\n";
    for(int i=(int)v.size()-1;i>=0;i--)
    {
        cout<<v[i]<<" ";
    }


    return 0;

    

}