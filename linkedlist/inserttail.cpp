#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    public:
    Node(int d){
        data=d;
        next=nullptr;
    }
};
Node* convtoll(vector<int>a){
    Node* head=new Node(a[0]);
    Node* mover=head;
    for(int i=1;i<a.size();i++){
        Node* temp=new Node(a[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void transverse(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert_tail(Node* head,int val){
    Node* temp=head;
    Node* temp1=new Node(val);
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=temp1;
    transverse(head);
}
int main(){
    vector<int>a={1,2,3,4};
    Node* head=convtoll(a);
    insert_tail(head,5);
    return 0;
}