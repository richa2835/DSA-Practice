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
/*void reverse(Node* h){
    Node* temp=h;
    Node* prev=nullptr;
    while(temp){
        Node* front=temp->next;
        temp->next=prev;
        prev=temp;
        temp=front;

    }
    print(prev);
    
    }*/
Node* reverse(Node* h){
    if(h==nullptr || h->next==nullptr){
        return h;
    }
    Node* newhead=reverse(h->next);
    Node* front=h->next;
    front->next=h;
    h->next=nullptr;
    return newhead;

}

int main(){
    vector<int>a={1,2,3,4,5};
    Node* h=conv(a);
    print(h);
    Node* nh=reverse(h);
    print(nh);
    return 0;
}
