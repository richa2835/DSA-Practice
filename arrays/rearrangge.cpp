#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={3,1,-2,-5,2,-4,3,6,-2,1};
    int n=sizeof(a)/sizeof(a[0]);
    int ans[n];
    /*int e=0;
    int odd=1;
    for(int i=0;i<n;i++)
    {
        if(a[i]>0){
            ans[e]=a[i];
            e=e+2;
        }
        else{
            ans[odd]=a[i];
            odd=odd+2;
        }
        
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }*/
   vector<int>pos;
   vector<int>neg;
   
   for(int i=0;i<n;i++){
    if(a[i]>0){
        pos.push_back(a[i]);
    }
    else{
        neg.push_back(a[i]);
    }


   }
   int minimal_length;
   int max_l;
   vector<int>temp;;
   if(pos.size()>neg.size()){
    minimal_length=neg.size();
    max_l=pos.size();
    temp=pos;

   }
   else{
    minimal_length=pos.size();
    max_l=neg.size();
    temp=neg;
   }
   for(int i=0;i<minimal_length;i++){
    ans[2*i]=pos[i];
    ans[2*i + 1]=neg[i];
   }
   int index=2*minimal_length;
   for(int i=minimal_length;i<max_l;i++){
    ans[index]=temp[i];
    index++;
   }
   for(int i=0;i<n;i++){
    cout<<ans[i]<<" ";
   }

    return 0;
}
