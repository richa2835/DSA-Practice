#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
int main(){
    int n;
    cin>>n;
    int a[n];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            count++;
        }
    }
    for(int i=0;i<n-count;i++)
    {
        if(a[i]==0){
            for(int j=i;j<n-1;j++){
                a[j]=a[j+1];
            }
            a[n-1]=0;
            i--;
        }
        else{
            continue;
        }

    }

    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    
    return 0;
}*/
int main(){
    vector<int>a={1,0,2,3,2,0,0,4,5,1};
    int n=a.size();
    int i=0;
    int j=0;
    while(j<n){
        if(a[j]!=0){
            swap(a[i],a[j]);
            i++;
        }
        j++;
    }
    
    
    for(auto it:a){
        cout<<it<<" ";
    }
    return 0;

    
}