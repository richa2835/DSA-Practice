#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>a={{1,3},{2,6},{7,9}};
    bool ans=true;
    for(int i=1;i<a.size();i++){
        if((a[i].first-a[i-1].second)< 0){
            ans=false;
        }
    }
    cout<<ans;
    return 0;
}