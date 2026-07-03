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
Node* sort_merge(Node* h1,Node* h2){
    Node* head=new Node(-1);
    Node* temp=head;
    Node* t1=h1;
    Node* t2=h2;
    while(t1 && t2){
        if(t1->data < t2->data){
            temp->next=t1;
            t1=t1->next;
            

        }
        else{
            temp->next=t2;
            t2=t2->next;
            
        }
        temp=temp->next;
    }
    if(t2){
        temp->next=t2;
    }
    if(t1){
        temp->next=t1;
    }
    return head->next;
}
int main(){
    vector<int>a={2,4,8,10};
    vector<int>b={1,3,3,6,11,14};
    Node* h1=conv(a);
    Node* h2=conv(b);
    print(h1);
    print(h2);
    Node* ans=sort_merge(h1,h2);
    print(ans);
    return 0;
}