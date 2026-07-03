#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void func(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
            st.push(s[i]);
        }
        else{
            if(s[i]==')'){
                if (st.top()=='('){
                    st.pop();
                    continue;
                }
                else{
                    cout<<"false"<<endl;
                    return;
                }
            }
            if(s[i]=='}'){
                if (st.top()=='{'){
                    st.pop();
                    continue;
                }
                else{
                    cout<<"false"<<endl;
                    return;
                }
            }
            if(s[i]==']'){
                if (st.top()=='['){
                    st.pop();
                    continue;
                }
                else{
                    cout<<"false"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"true";
    return;
}
int main(){
    string s="()[{()]}";
    func(s);
    return 0;
}