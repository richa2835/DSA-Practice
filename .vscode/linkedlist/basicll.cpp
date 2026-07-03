#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int d1,Node* n1){
        data=d1;
        next=n1;
    }
    Node(int d1){
        data=d1;
        next=nullptr;
    }

};
Node* conv(vector<int>a){
    Node* head=new Node(a[0],nullptr);
    Node *mover=head;
    for(int i=1;i<a.size();i++){
        Node* temp=new Node(a[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

}
int main(){
    cout<<"start"<<endl;
    vector<int>a={1,2,3,4};
    Node* head=conv(a);
    int m=5;
    int ans=0;
    Node* temp=head;
    while(temp){
        if(temp->data==m){
            ans=1;
            cout<<ans;
            return 1;
        }
        temp=temp->next;
       
    }
    cout<<ans;

    return 0;
}