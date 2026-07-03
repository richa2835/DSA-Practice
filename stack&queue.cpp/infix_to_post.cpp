#include<bits/stdc++.h>
using namespace std;
int prior(char t){
    if(t=='^'){
        return 3;
    }
    else if(t=='*' || t=='/'){
        return 2;
    }
    else if(t=='+' || t=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string conv_post(string s){
    stack<char>st;
    string ans="";
    for(int i=0;i<s.size();i++){
        if((s[i]>='A' && s[i]<='Z') or (s[i]>='a' && s[i]<='z') or (s[i]>='0' && s[i]<='9')){
            ans=ans+s[i];
        }
        else if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.top()!='('){
                ans=ans+st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && prior(s[i])<=prior(st.top())) {
                ans=ans+st.top();
                st.pop();
            }
            st.push(s[i]);
            
        }
    }
    while(!st.empty())
    {ans=ans+st.top();
    st.pop();
}
    return ans;
}
int main(){
    string s="a+b(c^d)";
    string ans=conv_post(s);
    cout<<ans;
    return 0;
}