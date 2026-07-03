#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={1,1,0,1,1,1,0,1,1};
    int n=9;
    int count=0;
    int i=0;
    int max=INT_MIN;
    while(i<n){
        if(a[i]==1){
            count++;
        }
        else{
            if(count>max){
                max=count;
                
            }
            count=0;
        }
        i++;
        
    }
    cout<<max;


    return 0;

}
