#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
    cout<<"enter the number:";
    int n;
    cin>>n;
    int a[n];
    int i=0;
    while(n>0){
        a[i]=n%2;
        i++;
        n=n/2;

    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<a[j];

    }
    cout<<"\nenter binary number:";
    string bin;
    cin>>bin;
    
    int len=bin.length();
    int k=0;
    int sum=0;
    for(i=len-1;i>=0;i--)
    {
        char k1=bin[i];
        int r=k1-48;
        int totint=r*pow(2,k);
        k++;
        sum+=totint;
    }
    cout<<sum;


