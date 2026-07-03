#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*int main(){
    int a[]={2,3,4,7,11};
    int ans;
    int k=5;
    int count=0;
    int j=1;
    int i=0;
    while(count<k){
    if(a[i]!=j){
        count++;

    }
    else{
        
        i++;
    }
    ans=j;
    j++;
}
cout<<ans;
return 0;
}*/

int main(){
    vector<int>v;
    v={4,7,11};
    int k=3;
    int n=v.size();
    vector<int>miss;
    for(int i=0;i<n;i++){
        miss.push_back(v[i]-(i+1));
    }
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        
        if(miss[mid]<k){
            l=mid+1;
        }
        
        else{
            h=mid-1;
        }
    }
    int ans=h+1+k;
    cout<<ans;
    return 0;
}