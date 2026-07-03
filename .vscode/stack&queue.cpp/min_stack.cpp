#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Minstack{
    public:
    
    stack<int>st;
    int mini=INT_MAX;
    void push(int x){
        if(st.empty()){
            st.push(x);
            mini=x;

        }
        else if(x>mini){
            st.push(x);

        }
        else{
            st.push(2*x-mini);
            mini=x;
        }
    }
    void pop(){
        if(st.empty()){
            cout<<"already empty"<<endl;
            return;
        }
        else{
            int x=st.top();
            if(x<mini){
                mini=2*mini-x;

            }
            st.pop();
        }
    }
    void get_min(){
        cout<<mini<<endl;
    }
    void get_top(){
        if(st.empty()){
            cout<<"empty"<<endl;
        }
        else{
            cout<<st.top()<<endl;
        }
    }
};
int main(){
    Minstack st;
    st.push(1);
    st.push(3);
    st.push(0);
    st.get_min();
    st.pop();
    st.get_min();
    return 0;


}