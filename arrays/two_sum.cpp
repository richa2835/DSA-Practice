#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    /*map<int,int>m;
    for(int i=0;i<n;i++){
        m[i]=a[i];
        for(int j=0;j<i;j++){
            if(m[j]==k-m[i]){
                cout<<"true"<<" "<<i<<","<<j;
                return 1;
            }
        }
    }
    cout<<"no";*/
    int i=0;
    int j=n-1;
    int sum=0;
    while(i<n && i<j && j>0){
        sum=a[i]+a[j];
        if(sum<k){
            i++;;
        }
        else if(sum>k){
            j--;
        }
        else{
            cout<<"true:"<<i<<","<<j;
            return 1;
        }


    }
    

    return 0;
}