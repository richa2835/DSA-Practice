#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int func(vector<int>weights,int cap){
    int tot=1;//important
    int sum=0;
    for(int i=0;i<weights.size();i++){
        if(sum+weights[i]<=cap){
            sum+=weights[i];
        }
        else{
            tot++;
            sum=weights[i];
        }
    }
    return tot;
}
int main(){
    vector<int>weights;
    int days=5;
    weights={1,2,3,4,5,6,7,8,9,10};
    int l=*max_element(weights.begin(),weights.end());//important;
    int maxi=accumulate(weights.begin(),weights.end(),0);
    int ans=0;
    
    while(l<=maxi){
        int mid=(l+maxi)/2;
        int totdays=func(weights,mid);
        if(totdays>days){
            l=mid+1;
        }
        else{
            ans=mid;
            maxi=mid-1;
        }
    }
    cout<<ans;
}
