#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k=r%n;
    /*int temp[k];
    for(int i=0;i<k;i++){
        temp[i]=a[i];

    }
    for(int i=0;i<n-k;i++){
        a[i]=a[i+k];
    }
    int j=0;
    int i=n-k;
    while(i<=n && j<k){
        a[i]=temp[j];
        i++;
        j++;

    }*/
   reverse(a,a+k);
   reverse(a+k,a+n);
   reverse(a,a+n);
    for(int m=0;m<n;m++){
        cout<<a[m]<<" ";
    }
    return 0;

}