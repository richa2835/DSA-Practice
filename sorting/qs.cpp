#include<iostream>
using namespace std;
int f(int a[],int low,int high){
    int pivot=a[low];
    int i=low;
    int j=high;
    while(i<j){
        while(a[i]<=pivot && i<=high-1){
            i++;
        }
        while(a[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            int temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    int temp=a[low];
    a[low]=a[j];
    a[j]=temp;
    return j;
}
void qs(int a[],int low,int high){
    if(low<high){

        int pindex=f(a,low,high);
        qs(a,low,pindex-1);
        qs(a,pindex+1,high);
    }
    
}
int main(){
    int a[]={0,5,8,2,1};
    qs(a,0,4);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
        return 0;
    }
}
