#include<iostream>
using namespace std;
int main(){
    int a[]={10,10,10};
    int n=sizeof(a)/sizeof(a[0]);
    int l=a[0];
    int sl=-1;
    
    for(int i=0;i<n;i++){
        if(a[i]>l){
            sl=l;
            l=a[i];

        }
        else if(a[i]>sl && a[i]!=l){
            sl=a[i];
        }
    }
    cout<<sl;
    return 0;

}