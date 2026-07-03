#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={10,22,12,3,0,6};
    int n=6;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(a[i]>maxi){
            cout<<a[i]<<" ";
            maxi=a[i];
        }

    }
    return 0;
}