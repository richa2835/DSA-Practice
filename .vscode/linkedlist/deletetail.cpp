#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int d){
        data=d;
        next=nullptr;
    }

};
Node* convtoll(vector<int>nums){
    Node* head=new Node(nums[0]);
    Node* mover=head;
    for(int i=1;i<nums.size();i++){
        Node* temp=new Node(nums[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void transverse(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deletetail(Node* head){
    Node* temp=head;
    while(temp->next->next){
        temp=temp->next;
    }
    Node* temp1=temp->next;
    temp->next=nullptr;
    free(temp1);
    transverse(head);



}
int main(){
    vector<int>a={1,2,3,4,5};
    Node* head=convtoll(a);
    transverse(head);
    deletetail(head);
    return 0;
}