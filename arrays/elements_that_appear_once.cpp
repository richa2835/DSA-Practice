#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,2,4,5};
    int n=a.size()+1;
    int ans=0;
    
    for(int i=1;i<=n;i++){
        ans^=i;
    }
    for(auto it:a){
        ans^=it;
    }
    cout<<ans;
    return 0;
}