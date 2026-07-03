#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num=0;
    if(n>0)
    {
        while(n>0)
        {
            num=num*10+(n%10);
            n=n/10;
        }
        cout<<num;
        

    }
    else{
        n=n*-1;
        while(n>0)
        {
            num=num*10+(n%10);
            n=n/10;
        }
        cout<<num*-1;

    }
    

    return 0;
}