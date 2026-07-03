#include<iostream>
using namespace std;
int main(){
    int n=11;
    int a[]={0,1,1,0,1,2,1,2,0,0,0};
    int mid;
    int high=n-1;

    int low=mid=0;
    while(mid<=high){
        if(a[mid]==0){
            int temp=a[mid];
            a[mid]=a[low];
            a[low]=temp;
            mid++;
            low++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            int temp=a[mid];
            a[mid]=a[high];
            a[high]=temp;
            high--;

        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }


    return 0;
}
