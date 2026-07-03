#include<iostream>
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
void travel(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* covtoll(vector<int>a){
        Node* head=new Node(a[0]);
        Node* mover=head;
        for(int i=1;i<a.size();i++){
            Node* temp=new Node(a[i]);
            mover->next=temp;
            mover=temp;
        }
        return head;

    }
Node* delete_head(Node* head){
    Node* temp=head;
    head=head->next;
    free(temp);
    return head;
}

int main()
{
    vector<int>a={1,2,3,4,5};
    Node* head=covtoll(a);
    travel(head);
    Node* newhead=delete_head(head);
    travel(newhead);
    return 0;




}