#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2)
{
    if(p1.second>p2.second)
    {
        return true;
    }
    else if(p1.second<p2.second)
    {
        return false;
    }
    else
    {
        if(p1.first<p2.second)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    vector<int>v;
    v.push_back(2);
    v.push_back(8);
    v.push_back(10);
    v.push_back(1);
    v.push_back(3);
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"asending sort"<<endl;
    sort(v.begin(),v.end());
    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"descent sort"<<endl;
    sort(v.begin(),v.end(),greater<int>());

    for(auto it:v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"combined"<<endl;
    vector<pair<int,int>>v1;
    v1.push_back({1,2});
    v1.push_back({3,7});
    v1.push_back({7,10});
    v1.push_back({3,10});
    sort(v1.begin(),v1.end(),comp);
    for(auto it:v1)
    {
        cout<<it.first<<it.second<<" ";
    }
    cout<<endl;
    cout<<*max_element(v.begin(),v.end())<<endl;



}