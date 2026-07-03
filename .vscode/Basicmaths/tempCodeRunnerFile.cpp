#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int y;
    cin>>y;
    vector<int> res;
    if(n>y)
    {
        for(int i=1;i<=y;i++)
        {
            if((n%i==0) && (y%i==0))
            {
                res.push_back(i);
                
            }
        }
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            if((n%i==0) && (y%i==0))
            {
                res.push_back(i);
                
            }

        }
    }
    for(auto it:res)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<*max_element(res.begin(),res.end());
    return 0;
}