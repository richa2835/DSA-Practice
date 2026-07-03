#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]==0){
            if(max<count){
                max=count;
            }
            count=0;
        }
        else{
            count++;
        }
    }
    cout<<max;
    return 0;
}