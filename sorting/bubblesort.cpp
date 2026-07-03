#include<iostream>
using namespace std;
void bubble(int a[],int n){
    for(int i=n-1;i>=1;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(a[j+1]<a[j])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){
    int a[]={2,8,3,0};
    bubble(a,4);
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}