#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    v={1,2,3,1,1,1,1,4,2,3};
    int n=v.size();
    int k=3;
    int len=0;
    int sum=0;
    int max=0;
    int i=0;
    int j=0;
    while(j<n){
        while(i<=j && i<n){
            sum+=v[j];
            if(sum<k){

                j++;
            }
            if(sum>k){
                
                sum=sum-v[i];
                i++;
            }
            if(sum==k){
                len=j-i+1;
                if(len>max){
                    max=len;
                }
                j++;
            }
        }


    }
    cout<<max;

    return 0;
}