#include<bits/stdc++.h>//really difficult
using namespace std;
bool canplace(vector<int>a,int dist,int cows){
    int lastplacedat=a[0];//see this
    int cowsplaced=1;
    for(int i=1;i<a.size();i++){
        if(a[i]-lastplacedat>=dist){//confusing
            cowsplaced++;
            lastplacedat=a[i];
        }
    }
    if(cowsplaced>=cows){
        return true;
    }
    return false;

}
int main(){
    int ans;
    vector<int>a;
    a={0,3,4,9,7,10};
    sort(a.begin(), a.end());//dont forget
    int n=a.size();
    int cows=4;
    int l=1;
    int h=*max_element(a.begin(),a.end());
    while(l<=h){
        int mid=(l+h)/2;
        if(canplace(a,mid,cows)){
            ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    cout<<ans;
}