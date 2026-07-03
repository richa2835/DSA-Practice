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
Node* reverse(Node* head){
    Node* current=head;
    Node* ans;
    while(current){
        Node* last=current->next;
        current->next=current->back;
        current->back=last;
        current=current->next;
        ans=last->back;
    }
    return ans;
    


}
int main(){
    vector<int>a={1,2,3,4};
    Node* head=conv(a);
    print(head);
    Node* newhead=reverse(head);
    print(newhead);
    return 0;
}