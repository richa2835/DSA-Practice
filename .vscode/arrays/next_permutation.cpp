#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    int a[]={3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    /*sort(a,a+n);
    while(next_permutation(a,a+n)){
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;*/
    int bindex;
    for(int i=n-1;i>1;i--){
        if(a[i]>a[i-1]){
            bindex=i-1;
            


        }
        else{
            cout<<"no next permutation"<<endl;
            return 1;
        }

    }
    for(int i=n-1;i>=bindex+1;i--){
        if(a[i]>a[bindex]){
            int temp=a[i];
            a[i]=a[bindex];
            a[bindex]=temp;
        }
    }
    reverse(a+bindex+1,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    
    return 0;
    



}