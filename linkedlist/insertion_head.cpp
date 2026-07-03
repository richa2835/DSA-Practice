#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int d){
        data=d;
        next=nullptr;
    }
};
void transverse(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* convtoll(vector<int>a){
    Node* head=new Node(a[0]);
    Node* mover=head;
    for(int i=1;i<a.size();i++){
        Node * temp=new Node(a[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

}
void insert_head(Node* head,int val){
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
    transverse(head);
    return;
}
int main(){
    vector<int>a={2,3,4,5};
    Node* head=convtoll(a);
    transverse(head);
    insert_head(head,1);
    return 0;
}