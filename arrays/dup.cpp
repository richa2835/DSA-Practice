#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    
    vector<int>a={1,1,2,2,2,3,3};
    
    /*for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    for(int j=1;j<n;j++){
        if(a[i]!=a[j]){
            int t=a[j];
            a[j]=a[i+1];
            a[i+1]=t;
            i++;
        }
    }
    for(int k=0;k<=i;k++){
        cout<<a[k]<<" ";
    }*/
   int n=a.size();
   int i=0;
   int j=1;
   while(i<n && j<n ){
    while(a[i]==a[j]){
        j++;
    }
    int t=a[i+1];
    a[i+1]=a[j];
    a[j]=t;
    j++;
    i++;
   }
   for(int m=0;m<n;m++){
    cout<<a[m]<<" ";
   }

    return 0;


}
