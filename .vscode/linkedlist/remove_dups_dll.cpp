#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;
    public:
    Node(int d,Node* n,Node* b){
        data=d;
        next=n;
        back=b;
    }

    Node(int d){
        data=d;
        next=nullptr;
        back=nullptr;
    }
};
Node* conv(vector<int>a){
    Node* head=new Node(a[0],nullptr,nullptr);
    Node* prev=head;
    for(int i=1;i<a.size();i++){
        Node* temp=new Node(a[i],nullptr,prev);
        prev->next=temp;
        prev=temp;

    }
    return head;

}
void print(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* remove_dup(Node* h){
    Node* t1=h;
    
    Node* t2=h->next;
    while(t2){
        if(t1->data==t2->data){
            t1->next=t2->next;
            t2->next->back=t1;
            t2=t1->next;
        }
        else{
            t1=t2;
        t2=t2->next;

        }
        


    }
    return h;

}
int main(){
    vector<int>a={1};
    Node* h=conv(a);
    print(h);
    Node* h1=remove_dup(h);
    print(h1);

    return 0;
}