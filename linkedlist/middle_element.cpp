#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    public:
    Node(int d,Node* n){
        data=d;
        next=n;
    }
    Node(int d){
        data=d;
        next=nullptr;
    }

};
Node* conv(vector<int>a){
    Node* head=new Node(a[0]);
    Node* mover=head;
    for(int i=1;i<a.size();i++){
        Node* temp=new Node(a[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void print(Node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
Node* middle_el(Node* h){
    Node* temp=h;
    int len=0;
    while(temp){
        len++;
        temp=temp->next;

    }
    int bef_mid=len/2;
    temp=h;
    for(int i=1;i<=bef_mid;i++){
        temp=temp->next;
    }
    return temp;
}

int main(){
    vector<int>a={1,2,3,4,5};
    Node* h=conv(a);
    print(h);
    Node* ans=middle_el(h);
    cout<<ans->data;
    return 0;
}