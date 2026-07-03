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
void transverse(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* convtoll(vector<int>a){
    Node* head=new Node(a[0]);
    Node* mover=head;
    for(int i=1;i<a.size();i++){
        Node* temp=new Node(a[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

}
void delete_value(Node* head,int val){
    Node* temp=head;
    Node* prev=nullptr;
    while(temp){
        if(temp->data==val){
            if(prev==nullptr){
                head=head->next;
                
                

            }
            else{
                prev->next=temp->next;
                


            }
            free(temp);
            transverse(head);
            return;


        }
    prev=temp;
    temp=temp->next;
    }
    
    cout<<"val not found"<<endl;
    

}
int main(){
    vector<int>a={1,2,3,4,5};
    Node* head=convtoll(a);
    transverse(head);
    int val=7;
    delete_value(head,val);
    return 0;

}