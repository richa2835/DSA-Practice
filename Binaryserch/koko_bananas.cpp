#include<bits/stdc++.h>
using namespace std;
 
int func(vector<int> nums,int mid){
    int tot=0;
    for(int i=0;i<nums.size();i++){
        tot+=ceil((double)nums[i]/(double)mid);
    }
    return tot;
}

int minimumRateToEatBananas(vector<int> nums, int h) {

    int low=1;
    int ans=0;
    int high=*max_element(nums.begin(),nums.end());
    while(low<=high){
        int mid=(low+high)/2;
        int toth=func(nums,mid);
        if(nums[mid]<=h){
            high=mid-1;
            ans=mid;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
 
    }
int main(){
    vector<int>nums;
    nums.push_back(25);
    nums.push_back(12);
    nums.push_back(8);
    nums.push_back(14);
    nums.push_back(9);

    int h=5;
    int c=minimumRateToEatBananas(nums,h);
    cout<<c;
    return 0;

}

