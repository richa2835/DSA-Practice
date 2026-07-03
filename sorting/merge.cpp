#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void m(int a[],int low,int mid,int high){
    vector<int>v;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(a[left]<a[right]){
            v.push_back(a[left]);
            left++;
        }
        else{
            v.push_back(a[right]);
            right++;
        }
    }
    while(left<=mid){
        v.push_back(a[left]);
        left++;
    }
    while(right<=high){
        v.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        a[i]=v[i-low];
    }
}
void ms(int a[],int left,int right){
    int mid=(left+right)/2;
    if (left>=right){
        return;

    }
    ms(a,left,mid);
    ms(a,mid+1,right);
    m(a,left,mid,right);
}
int main(){
    int a[]={9,7,0,10,3};
    ms(a,0,4);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}