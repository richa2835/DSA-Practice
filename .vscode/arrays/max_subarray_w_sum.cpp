#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>h;
    int sum=0;
    int len=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        h[i]=sum;
        int dif=sum-k;
        for(int j=0;j<i;j++){
            if(h[j]==dif){
                int templ=i-j;
                if(templ>len){
                    len=templ;
                }
            }
        }
    }
    cout<<len<<endl;

}*/
int main(){
    int k;
    cin>>k;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0;
    int j=0;
    int sum=0;
    int len=0;
    while(i<n && j<n){
            sum+=a[j];
            j++;
            if(sum>k){
                sum-=a[i];
                i++;
            }
            if(sum==k)
            {
                int l=j-i;//imp//
                if(len<l){
                    len=l;
                }
            }
    
    }
    cout<<len<<endl;
    return 0;


}