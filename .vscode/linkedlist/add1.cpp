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
Node* reverse(Node* head)
{
    if(head==nullptr || head->next==nullptr){
        return head;
    }
    Node* newh=reverse(head->next);
    Node* front=head->next;
    front->next=head;
    head->next=nullptr;
    return newh;
}
void add(Node* h){
    int carry=0;
    int sum;
    Node* temp=h;
    
    while(temp){
        if(temp==h){
            sum=1;
        }
        else{
            sum=0;
        }
        sum+=temp->data;
        sum+=carry;
        temp->data=sum%10;
        carry=sum/10;
        if(carry && temp->next!=nullptr)
        {
            temp=temp->next;

        }
        else if(carry && temp->next==nullptr){
            
        Node* temp1=new Node(carry);
        temp->next=temp1;
        Node* k=reverse(h);
        print(k);
        return;
        
    
        }
        else{
            Node* k=reverse(h);
            print(k);
            return ;

        }



    }

    

}
    
    
    

    



int main(){
    vector<int>a={9,9,9};
    Node* head=conv(a);
    print(head);
    Node* newh=reverse(head);
    add(newh);
    return 0;

}