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
    Node* temp=head;
    for(int i=1;i<a.size();i++){
        Node* temp1=new Node(a[i]);
        temp->next=temp1;
        temp=temp1;

    }
    return head;
}
void print(Node* h){
    while(h){
        cout<<h->data<<" ";
        h=h->next;
    }
    cout<<endl;
}
Node* find_k(Node* t,int k){
    while(t && k>1){
        k--;
        t=t->next;
    }
    return t;

}
void reverse(Node* head){
    Node* prev=nullptr;
    Node* temp=head;
    while(temp){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;
    }

}
Node* krev(Node* h,int k){
    Node* prev=nullptr;
    Node* t=h;
    while(t){
        Node* kth_node=find_k(t,k);
        if(kth_node==nullptr){
            while(t){
                t=t->next;
            }
            break;
        }
        Node* next_node=kth_node->next;
        kth_node->next=nullptr;
        reverse(t);
        if(t==h){
            h=kth_node;
        }
        else{
            prev->next=kth_node;
        }
        prev=t;
        t=next_node;
        prev->next=next_node;


    }
    return h;

}
int main(){
    vector<int>a={1,2,3,4,5,6,7};
    int key=3;
    Node* h=conv(a);
    print(h);
    Node* kh=krev(h,key);

    print(kh);
    

    return 0;
}