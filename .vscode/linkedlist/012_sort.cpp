#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int d,Node* n){
        data=d;
        next=n;
    }
    Node(int d1){
        data=d1;
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
void sort(Node* head){
    Node* zero_head=new Node(-1);
    Node* one_head=new Node(-1);
    Node* two_head=new Node(-1);
    Node* zero=zero_head;
    Node* one=one_head;
    Node* two=two_head;
    Node* temp=head;
    while(temp){
        if(temp->data==0){
            zero->next=temp;
            zero=temp;

        }
        if(temp->data==1){
            one->next=temp;
            one=temp;
        }
        if(temp->data==2){
            two->next=temp;
            two=temp;
        }
        temp=temp->next;

    }
    if(one_head->next!=nullptr){
        zero->next=one_head->next;
    }
    else{
        zero->next=two_head->next;
    }
    one->next=two_head->next;
    two->next=nullptr;
    print(zero_head->next);


}
int main(){
    vector<int>a={0,1,0,1,1};
    Node* h=conv(a);
    print(h);
    sort(h);
    return 0;

}
