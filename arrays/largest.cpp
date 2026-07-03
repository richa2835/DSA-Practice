#include<iostream>
using namespace std;
int main(){
    int a[]={8,9,0,1,4};
    int n=sizeof(a)/sizeof(a[0]);
    int l=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>l){
            l=a[i];
        }
    }
    cout<<l;
    return 0;

}