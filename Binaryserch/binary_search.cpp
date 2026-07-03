#include<iostream>
using namespace std;
int f(int a[],int x,int low,int high){
    while(low<=high){
    int mid=low+high/2;
    if(a[mid]==x){
            return mid;
        }
    else if(a[mid]>x){
            low=mid+1;
        }
    else{
            high=mid-1;
        }
    f(a,x,low,high);
    }
    return -1;

    

}
int main(){
    int x;
    cin>>x;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    /*int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+high/2;
        if(a[mid]==x){
            cout<<mid;
            return -1;
        }
        else if(a[mid]>x){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

    }
    cout<<-1;
    return 0;*/
    
    int res=f(a,x,0,n-1);
    cout<<res;
    return 0;

}