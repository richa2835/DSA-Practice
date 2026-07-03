#include<iostream>
using namespace std;
int f(int a[],int n,int x){
    int l=0;
    int h=n-1;
    while(l<=h){
        int mid=(l+h)/2;
        if(a[mid]==x){
            return mid;
        }
        else if(a[l]<=a[mid]){
            if(a[l]<=x && x<=a[mid]){
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        else{
            if(a[mid]<=x && x<=a[h]){
                l=mid+1;
            }
            else{
                h=mid-1;
            }
        }
        

    }
    return -1;


}
int main(){
    int a[]={7,8,9,1,2,3,4,5,6};
    int x=11;
    int res=f(a,9,x);
    cout<<res;
    return 0;
}
