#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;

    public:
    Node(int d,Node*n,Node*b){
        data=d;
        next=n;
        back=b;
    }

    Node(int d){
        data=d;
        back=nullptr;
        next=nullptr;
    }
};
Node* conv(vector<int>a){
    Node* head=new Node(a[0]);
    Node* prev=head;
    for(int i=1;i<a.size();i++){
        Node* temp=new Node(a[i],nullptr,prev);
        prev->next=temp;
        prev=temp;
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
void delete_head(Node* head){
    Node* temp=head;
    head=head->next;
    head->back=nullptr;
    free(temp);
    print(head);

}
void delete_tail(Node* head){
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->back->next=nullptr;
    free(temp);
    print(head);

}
void delete_k(Node* head,int k,vector<int>a){
    if(k==1){
        delete_head(head);
        return;
    }
    else if(k==a.size()){
        delete_tail(head);
        return;

    }
    else{
        Node* temp=head;
        int count=0;
        while(temp){
            count++;
            if(count==k){
                temp->back->next=temp->next;
                temp->next->back=temp->back;
                free(temp);
                print(head);
                return;
            }
            temp=temp->next;

        }

    }
    

}
void del_val(Node* head,int val){//del el before val
    Node* temp=head;
    if(head->data==val){
        delete_head(head);return;
    }
    else{
        while(temp){
            if(temp->data==val){
                temp->back->next=temp->next;
                temp->next->back=temp->back;
                free(temp);
                print(head);
                return;
            }
            temp=temp->next;
        }
    }

}
int main(){
    vector<int>a={1,2,3,4,5};
    Node* head=conv(a);
    print(head);
   
    del_val(head,3);
    return 0;
}