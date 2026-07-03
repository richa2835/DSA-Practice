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
void remove(Node* head,int k){
    int count=0;
    Node* temp=head;
    while(temp){
        count++;
        temp=temp->next;
    }
    Node* temp1=head;
    if(k==count){
        
        head=head->next;
        free(temp1);
    }
    else{
        int start=count-k;
    for(int i=1;i<start;i++){
        temp1=temp1->next;
    }
    Node* temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);

    }
    
    print(head);
}
int main(){
    vector<int>a={1,2,3,4,5};
    int k=1;
    Node* h=conv(a);
    print(h);
    remove(h,k);
    return 0;
}