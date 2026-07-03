#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    cout<<v[0]<<endl;
    cout<<v.back()<<endl;
    cout<<"iteratot"<<endl;

    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    cout<<"auto"<<endl;
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"insert"<<endl;
    v.insert(v.begin(),0);
    v.insert(v.begin()+4,4);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"delete"<<endl;
    v.erase(v.begin()+4);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"concatenation"<<endl;
    vector<int>v2(2,50);
    v.insert(v.begin()+4,v2.begin(),v2.end());
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<endl;
    cout<<"swap"<<endl;
    v.swap(v2);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it:v2)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    v.push_back(10);
    

    cout<<"print top"<<endl;
    v.pop_back();
     for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;



    return 0;
}