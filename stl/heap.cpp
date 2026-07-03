#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    pq.push(2);
    pq.push(8);
    pq.push(3);
    cout<<pq.top()<<endl;
    cout<<"min heap"<<endl;
    priority_queue<int,vector<int>,greater<int>> mpq;
    mpq.push(5);
    mpq.push(8);
    mpq.push(3);
    int l=mpq.size();
    for(int i=0;i<l;i++){
        cout<<mpq.top()<<endl;
        mpq.pop();

    }
    
    
    


    

    return 0;
}