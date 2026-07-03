#include<iostream>
using namespace std;
int main(){
    int a[]={9,8,7,2,0};
    int b[]={0,1,2,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=1;i<n;i++){
        if(b[i-1]>b[i])
        {
            cout<<"not sorted";
            return -1;
        }

    }
    cout<<"sorted";
    return 0;
}