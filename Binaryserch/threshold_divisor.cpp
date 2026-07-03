#include<bits/stdc++.h>
using namespace std;
int func(vector<int>nums,int div){
    int tot=0;
    for(int i=0;i<nums.size();i++){
        tot+=ceil((double)nums[i]/(double)div);

    }
    return tot;
}
int main(){
    vector<int>nums;
    nums={1,2,5,9};
    int th=7;
    int n=*max_element(nums.begin(),nums.end());
    
    int l=1;
    int h=n;
    int ans=-1;
    while(l<=h){
        int mid=(l+h)/2;
        int tot=func(nums,mid);
        if(tot>th){
            l=mid+1;
        }else{
            ans=mid;
            h=mid-1;
        }
    }
    cout<<ans;
    return 0;
}