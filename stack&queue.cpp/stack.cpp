#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
 int top=-1;

void push(int x,int a[],int &top,int n){
    if(top==n-1){
        cout<<"push"<<" "<<"full"<<endl;
        return;
    }
    top++;
    a[top]=x;
    return;
}
void pop(int a[],int &top){
    if (top==-1){
        cout<<"pop"<<" "<<"empty"<<endl;
        return;
    }
    top--;
    return;
}
void on_top(int a[],int &top){
    if(top==-1){
        cout<<"top"<<" ";
        cout<<"empty"<<endl;
    }
    cout<<a[top];
    return;
}
int main()
{
    int n=5;
    int a[n];
    push(1,a,top,n);
    push(2,a,top,n);
    push(3,a,top,n);
    pop(a,top);
    on_top(a,top);
    return 0;


    
}
    */
/*int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.pop();
    cout<<s.top()<<endl;
    cout<<s.size();
    return 0;

}*/
struct Node{
    int data;
    struct Node* next;

    public:
    Node(int d,Node* n){
        data=d;
        next=n;
    }
    Node(int d){
        data=d;
    }
};
void push(int x,Node* &head){
    
    Node* temp=new Node(x);
    temp->next=head;
    head=temp;
    cout<<"push done"<<endl;
    return;
    
}
void pop(Node* &head){
    if(head==NULL){
        cout<<"pop not possible"<<endl;
        return;
    }
    Node* temp=head;
    head=head->next;
    free(temp);
    cout<<"pop done"<<endl;
    return;
    
}
void on_top(Node* &h){
    if(h==nullptr){
        cout<<"empty on top"<<endl;
        return;
    }
    cout<<"top:"<<h->data<<endl;
    return;
}
int main(){
    Node* head=new Node(1);
    push(2,head);
    push(3,head);
    push(4,head);
    pop(head);
    on_top(head);
    pop(head);
    pop(head);
    pop(head);
    pop(head);
    return 0;

}