#include<bits/stdc++.h>
using namespace std;
list<int> next_greater(vector<int> a){
    stack<int>s;
    int nge[a.size()];
    for(int i=a.size()-1;i>=0;i--){

        if(s.empty()){
            nge[i]=-1;
            s.push(a[i]);
            

        }
        else{
            if(a[i]<s.top()){
                nge[i]=s.top();

                s.push(a[i]);
            }
            else{
                while(!s.empty() && a[i]>s.top() ){
                    s.pop();
                }
                if(!s.empty()){
                    nge[i]=s.top();
                    s.push(a[i]);
                }
                else{
                    nge[i]=-1;
                s.push(a[i]);
            
                    
                }
            }
        }


    }
    list<int> l;
    for(int i=0;i<a.size();i++){
        l.push_back(nge[i]);
    }
    return l;
}
int main(){
    vector<int> a={4,12,5,3,1,2,5,3,1,2,4,6};
    for(auto it:a){
        cout<<it<<" ";
    }
    cout<<endl;
    list<int>l=next_greater(a);
    for(auto it:l){
        cout<<it<<" ";
    }
    return 0;

}