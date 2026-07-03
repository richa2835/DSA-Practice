#include<iostream>
using namespace std;
void inserti(int a[],int n){
    for(int i=1;i<n;i++)
    {
        int el=a[i];
        for(int j=i-1;j<=0;j--){
            if(el>a[j])
            {
                continue;
            }
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;

            


        }
    }
}
int main(){
    int a[]={2,8,3,1,0};
    inserti(a,5);
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}