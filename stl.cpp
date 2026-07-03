#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);

   for(auto x:v)
   {
    cout<<x<<" ";
   }
   cout<<endl;
   for(int i=(int)v.size()-1;i>=0;i--)
   {
    cout<<v[i]<<" ";
   }
   cout<<endl;
   int max=v[0];
   for(int i=1;i<v.size();i++)
   {
     if(v[i]>max)
     {
        max=v[i];
     }
   }
   cout<<max;

    return 0;

}


