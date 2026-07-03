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
    int r;
    cin>>r;
    int k=r%n;
    /*int j=0;
    int temp[k];
    for(int i=n-k;i<n;i++){
        temp[j]=a[i];
        j++;

    }
    for(int i=n-1;i>=k;i--){
        a[i]=a[i-k];
    }
    for(int i=0;i<k;i++){
        a[i]=temp[i];

    }*/
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}