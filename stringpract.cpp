#include<iostream>
#include<string>
using namespace std;
int main()
{
    std::string s1="Hello World!";
    std::string s2="280305";
    cout<<s1[0]<<endl;
    cout<<s1.length()<<endl;
    cout<<s1.front()<<endl<<s1.back()<<endl;
    s1+=" Hey";
    cout<<s1<<endl;
    s1.insert(13,"oh");
    cout<<s1<<endl;
    s1.replace(12,3,"");
    cout<<s1<<endl;za[m]
    cout<<s1.find('H')<<endl;
    cout<<s1.substr(1,3)<<endl;
    int loc=s1.find("ell");
    if (loc!=std::string::npos)
    {
        cout<<"found at:"<<loc;
    }
    else{
        cout<<"not found";
    }
    cout<<s2<<endl;
    int k=std::stoi(s2);
    cout<<k<<endl;
    k+=1;
    cout<<k<<endl;
    std::string s3=std::to_string(k);
    cout<<s3;



}