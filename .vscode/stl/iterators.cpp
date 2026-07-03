#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(2,50);
    v.push_back(10);
    v.emplace_back(20);
    vector<int>::iterator it=v.begin();
    for(vector<int>::iterator it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+1);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    v.insert(v.begin()+1,50);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<v.size();
    cout<<endl;
    v.clear();
    cout<<v.empty();


    return 0;
}