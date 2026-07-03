#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int possible(vector<int>a,int bloomday,int flw){
    int totb=0;
    int count=0;
    for(int i=0;i<a.size();i++){
        if(a[i]<=bloomday){
            count++;

        }
        else{
            
            totb=count/flw;
            count=0;
        }
    }
    return totb;


}
using namespace std;
int main(){
    vector<int>nums;
    nums={7,7,7,7,13,11,12,7};
    int bq=2;
    int flw=3;
    int ans;
    vector<int>a;
    int maxi=*max_element(nums.begin(),nums.end());
    int mini=*min_element(nums.begin(),nums.end());
    for(int i=mini;i<=maxi;i++){
        a.push_back(i);

    }
    while(mini<=maxi){
        int mid=(maxi+mini)/2;
        int c=(possible(a,mid,flw));
        if(c>=bq){
            ans=mid;
            maxi=mid-1;

        }
        else{
            mini=mid+1;
        }


    }
    cout<<ans;
    return 0;
}