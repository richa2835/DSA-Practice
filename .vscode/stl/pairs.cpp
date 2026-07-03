#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>> p1={3,{4,5}};
    cout<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<int,int> a[]={{1,2},{3,4},{4,5}};
    cout<<a[1].second<<endl;
    return 0;

}