#include<iostream>
using namespace std;
int main(){
    int n=17;
    int a[]={7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
    int count=0;
    int el=a[0];
    for(int i=0;i<n;i++){
        if(a[i]==el){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            el=a[i+1];
        }

    }
    cout<<el;
}
