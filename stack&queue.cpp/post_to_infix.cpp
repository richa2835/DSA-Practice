#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void conv_to_infix(string s){
    stack<string>st;
    string ans="";
    for(int i=0;i<s.size();i++){
        if((s[i]>='a' && s[i]<='z') or (s[i]>='A' && s[i]<='Z') or (s[i]>='0' && s[i]<='9')){
            string c1=to_string(s[i]);
            st.push(c1);
        }
        else{
            string t1=st.top();
            st.pop();
            string newt='('+st.top()+s[i]+t1+')';
            st.pop();
            st.push(newt);

        }

    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();

    }
    cout<<st.top();
}

int main(){
    string s="ab-de+f*/";
    conv_to_infix(s);
    return 0;
}