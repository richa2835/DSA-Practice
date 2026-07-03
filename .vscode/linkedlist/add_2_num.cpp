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
Node* add(Node* h1,Node* h2){
    Node* t1=h1;
    Node* t2=h2;
    int carry=0;
    Node* dummy=new Node(-1);
    Node* current=dummy;
    while(t1 || t2){
        int sum=0;
        if(t1){
            sum+=t1->data;
        }
        if(t2){
            sum+=t2->data;
        }
        sum+=carry;

        Node* temp=new Node(sum%10);
        carry=sum/10;
        current->next=temp;
        current=temp;
        if(t1){
            t1=t1->next;
        }
        if(t2){
            t2=t2->next;
        }
    }
    if(carry){
        Node* temp=new Node(carry);
        current->next=temp;
        current=temp;
    }
    return dummy->next;
}

int main(){
    vector<int>a={3,2,1};
    vector<int>b={7,7,2,3};
    Node* h1=conv(a);
    Node* h2=conv(b);
    print(h1);
    print(h2);
    Node* h3=add(h1,h2);
    print(h3);
    return 0;
}