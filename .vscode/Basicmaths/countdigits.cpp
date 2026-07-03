#include<iostream>
using namespace std;
int main(){
    int n;

    cin>>n;
    int dup=n;
    


    string s=to_string(n);
    int len=s.size();
    cout<<len<<endl;;
    int rev=0;
    while(n>0)
    {
        rev=rev*10+(n%10);
        n=n/10;
    }
    cout<<rev<<endl;
    if(dup==n)
    {
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not";
    }
    return 0;
}
