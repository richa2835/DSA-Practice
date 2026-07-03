#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int d,Node*n,Node*b){
        data=d;
        next=n;
        back=b;
    }
    Node(int d){
        data=d;
        next=nullptr;
        back=nullptr;
    }
};
Node* conv(vector<int>a){
    Node*head=new Node(a[0]);
    Node* prev=head;
    for(int i=1;i<a.size();i++){
        Node* temp=new Node(a[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void transverse(Node * head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    vector<int>a={1,2,3,4};
    Node* head=conv(a);
    transverse(head);
    return 0;
}