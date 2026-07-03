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
Node* intersect(Node* h1,Node* h2){
    Node* t1=h1;
    Node* t2=h2;
    while(t1!=t2){
        t1=t1->next;
        t2=t2->next;

        if(t1==t2){
            return t1;
        }
        if(t1==NULL){
            t1=h2;
        }
        if(t2==NULL){
            t2=h1;
        }
    }
    return t1;
}

int main(){
    vector<int>a={3,2,4,5};
    Node* h1=conv(a);
    print(h1);
    vector<int>b={1,2,4,5};
    Node* h2=conv(b);
    print(h2);
    Node* ans=intersect(h1,h2);
    cout<<ans->data;
    return 0;


}