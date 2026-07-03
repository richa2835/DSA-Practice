#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* back;
    Node* next;

    public:
    Node(int d,Node* b,Node* n){
        data=d;
        back=b;
        next=n;
    }
    Node(int d){
        data=d;
        back=nullptr;
        next=nullptr;
    }
};
Node* conv(vector<int>a){
    Node* head=new Node(a[0],nullptr,nullptr);
    Node* prev=head;
    for(int i=1;i<a.size();i++){
        Node* temp=new Node(a[i],prev,nullptr);
        prev->next=temp;
        prev=temp;
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
void insert_head(int val,Node* head){
    Node* temp=new Node(val);
    temp->next=head;
    head->back=temp;
    head=temp;
    print(head);
}
void insert_tail(int val,Node* head){
    Node* temp=new Node(val);
    Node*temp1=head;
    while(temp1->next!=nullptr){
        temp1=temp1->next;
    }
    temp1->next=temp;
    temp->back=temp1;
    print(head);

}
void insert_k(int val,Node* head,int k){
    if(k==1){
        insert_head(val,head);
        return;
    }
    Node* temp=new Node(val);
    
    Node* mover=head;
    int count=0;
    while(mover){
        count++;
        if(count==k){
            temp->back=mover->back->back;
            temp->next=mover;
            mover->back->next=temp;
            mover->back=temp;
            print(head);
            return;
            
        }
        mover=mover->next;
    }
    
}
void insert_val(int val,Node* head,int insel){
    Node* temp=new Node(insel);
    Node* mover=head;
    if(head->data==val){
        insert_head(insel,head);
        return;
    }
    while(mover){
        if(mover->data==val){
            temp->back=mover->back->back;
            temp->next=mover;
            mover->back->next=temp;
            mover->back=temp;
            print(head);
            return;
        }
        mover=mover->next;
    }
}
int main(){
    vector<int>a={1,2,3,4,5};
    Node* head=conv(a);
    insert_val(3,head,0);
    return 0;
}