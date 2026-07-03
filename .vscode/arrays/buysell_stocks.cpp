#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[]={9,1,5,3,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    /*int mini=0;
    int maxi=n-1;
    int i=0;
    int j=n-1;
    int min=a[0];
    int max=a[n-1];
    while(mini<maxi && i<n && j>0){
        int iel=a[i];
        int jel=a[j];
        if(iel<min){
            min=iel;
            mini=i;
        }
        if(jel>max){
            max=jel;
            maxi=j;
        }
        i++;
        j--;
    }
    
    cout<<max-min;*/
    int maxp=0;
    int mini=a[0];
    for(int i=1;i<n;i++){
        int cost=a[i]-mini;
        maxp=max(maxp,cost);
        mini=min(mini,a[i]);

    }
    cout<<maxp;
    return 0;
}