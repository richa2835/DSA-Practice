#include<bits/stdc++.h>
using namespace std;
vector<int> previous_lesser_el(vector<int>a){
    stack<int>s;
    vector<int>ans;
    for(int i=0;i<a.size();i++){
        if(s.empty()){
            ans.push_back(-1);
            s.push(a[i]);
        }
        else{
            if(s.top()<a[i]){
                ans.push_back(s.top());
                s.push(a[i]);
            }
            else{
                while(!s.empty() && s.top()>=a[i]){
                    s.pop();
                }
                if(!s.empty()){
                    ans.push_back(s.top());
                    s.push(a[i]);
                }
                else{
                    ans.push_back(-1);
                    s.push(a[i]);
                }
            }
        }
    }
    return ans;
}
int main(){
    vector<int>a={5,7,9,6,7,4,5,1,3,7};
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int>ans=previous_lesser_el(a);
    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}