#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

    public:
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
void transverse(Node* head){
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert_atpost(Node* head,int pos,int el){
    Node* temp=new Node(el);
    
    if (pos==1){
        temp->next=head;
        head=temp;

        
    }
    else{
        Node* mover=head;
        int count=0;
        while(mover){
            count++;
            
            if(count==pos-1){
                temp->next=mover->next;
                mover->next=temp;
                break;


            }
            mover=mover->next;

        }



    }
    transverse(head);
    return;
}
int main(){
    vector<int>a={1,2,3,4};
    Node* head=conv(a);
    transverse(head);


    int pos=1;
    int el=0;
    insert_atpost(head,pos,el);
    return 0;

}