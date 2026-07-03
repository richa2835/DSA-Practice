#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int a[n1],b[n2],ins[n1+n2];
    for(int i=0;i<n1;i++){
        cin>>a[i];
    }
    for(int i=0;i<n2;i++){
        cin>>b[i];
    }
    int i=0;
    int j=0;
    int k=0;
    while(i<n1){
        if(a[i]<b[j]){
            i++;
            continue;
        }
        if(a[i]>b[j]){
            j++;
            continue;
        }
        if(i>0){
            if(a[i]==a[i-1]){
                i++;
                continue;
            }
        }
        if(a[i]==b[j]){
                ins[k++]=a[i];
                i++;
                j++;
                

                }
            }
        
   for(int m=0;m<k;m++){
    cout<<ins[m]<<" ";
   }
    

    return 0;
}