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
void pairs(Node* head,int sum){
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    Node* t2=temp;
    Node* t1=head;
    while(t1->next!=nullptr && t2->back!=nullptr && t1->back!=t2){
    if(t1->data+t2->data<sum){
        t1=t1->next;
    }
    else if(t1->data+t2->data>sum){
        t2=t2->back;
    }
    else{
        cout<<t1->data<<" "<<t2->data<<endl;
        t1=t1->next;
    }
    }
    
}
int main(){
    vector<int>a={1,2,3};
    int sum=3;
    Node* h=conv(a);
    print(h);
    pairs(h,sum);
    return 0;


}