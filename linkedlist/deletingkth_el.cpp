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
void transverse(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deletehead(Node* head){
    Node* temp=head;
    head=head->next;
    free(temp);
    transverse(head);
}
void deletetail(Node* head){
    Node* temp=head;
    while(temp->next->next){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    transverse(head);
}
void deletekth(Node* head,int k){
    if(k==0 || k>5){
        cout<<"not possible"<<endl;
    }
    else if(k==1){
        deletehead(head);
        
    }
    
    else{
        Node*temp=head;
        Node* prev=nullptr;
        int count=0;
        while(temp){
            count++;
            if(count==k){
                prev->next=temp->next;
                free(temp);
                transverse(head);
                break;

            }
            prev=temp;
            temp=temp->next;

        }

    }


}
int main(){
    vector<int>a={1,2,3,4,5};
    Node* head=convtoll(a);
    transverse(head);
    int k=6;
    deletekth(head,k);
    return 0;
}