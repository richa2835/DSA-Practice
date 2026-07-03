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
Node* delete_key(Node* head,int key){
    Node* temp=head;
    
    while(temp){
        if(head->data==key && temp==head){
        head->next->back=nullptr;
        head=head->next;
        temp=head;
        

    }
    else if(temp->data==key && temp!=head && temp->next!=nullptr){
            temp->back->next=temp->next;
            temp->next->back=temp->back;
            
            temp=temp->next;

        }
    else if(temp->data==key && temp!=head && temp->next==nullptr){
        temp->back->next=temp->next;
        free(temp);
        temp=temp->next;
    }
    else{
        temp=temp->next;
    }

    }
    return head;
}
int main(){
    vector<int>a={10,0,10,1,1,10};
    Node* head=conv(a);
    print(head);
    int key=10;
    Node* ans=delete_key(head,key);
    
    print(ans);
    return 0;


}