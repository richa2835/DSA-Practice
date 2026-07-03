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
void loop(Node* h){
    Node* f=h;
    Node* s=h;
    while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next->next;

        if(s==f){
            cout<<"its a loop"<<endl;
            int k=1;
            while(s!=f){
                k++;
                s=s->next;
                
            }
            s=h;
            while(s!=f){
                s=s->next;
                f=f->next;
            }
            Node* start=s;
            return;
        }
    }
    cout<<"its not  loop";
    return;
}
int main(){
    vector<int>a={1,2,3,4,5,6,7,}
}