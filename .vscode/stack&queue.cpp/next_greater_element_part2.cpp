#include<bits/stdc++.h>
using namespace std;
void next_greatr_element(vector<int>a){
    stack<int>s;
    int arr[a.size()];
    int n=a.size();
    for(int i=2*n-1;i>=0;i--){
        int ind=i%n;
        if(i>=n){
            if(s.empty()){
                s.push(a[ind]);
            }
            else{
                if(s.top()>a[ind]){
                    s.push(a[ind]);
                }
                else{
                    while(!s.empty() && s.top()<=a[ind]  ){
                        s.pop();
                    }
                    s.push(a[ind]);
                }
            }
        }
        else{
            if(s.empty()){
                s.push(a[i]);
                arr[i]=-1;
            }
            else{
                if(s.top()>a[ind]){
                    arr[i]=s.top();
                    s.push(a[ind]);
                }
                else{
                    while(!s.empty() && s.top()<=a[ind]  ){
                        s.pop();
                    }
                    if(s.empty()){
                        s.push(a[ind]);
                        arr[i]=-1;
                    }
                    else{
                        arr[i]=s.top();
                        s.push(a[ind]);
                    }
                }
            }

        }

    }
    for(int i=0;i<a.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>a={2,10,12,11,1};
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    next_greatr_element(a);
    return 0;

}