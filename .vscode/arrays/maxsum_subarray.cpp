#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    cout<<"enter no. of elements:";
    int n;
    cin>>n;
    int a[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+a[i];
        if(sum>max){
            max=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<max;
    return 0;

}