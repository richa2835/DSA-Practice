//insert el before vallue x
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
void transverse(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert_head(int el,Node* head){
    Node* temp=new Node(el);
    temp->next=head;
    head=temp;
    
}
void insert_at(int valu,int el,Node* head){
    Node* temp=head;
    if(head->data==valu){
        insert_head(el,head);
        
    }
    else{
        Node* prev=nullptr;
        while(temp){
            if(temp->data==valu){
                Node*temp1=new Node(el);
                temp1->next=temp;
                prev->next=temp1;
                break;


            }
            prev=temp;
            temp=temp->next;
            
        }
    }
    transverse(head);
    return;
}
int main(){
    vector<int>a={1,2,3,5};
    int val=5;
    int el=4;
    Node* head=conv(a);
    insert_at(5,4,head);
    return 0;
}