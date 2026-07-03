#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a={1,1,2,3,3,4,4};
    int ans=0;
    int n=(a.size()/2)+1;
    for(int i=1;i<=n;i++){
        ans^=i;
        ans^=i;
    }
    int ans2=0;
    for(auto it:a){
        ans2^=it;
    }
    cout<<(ans^ans2);
    return 0;
}