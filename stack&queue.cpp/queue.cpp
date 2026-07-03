#include<bits/stdc++.h>
using namespace std;


/*
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    return 0;
}*/
/*int start=-1;
int endi=-1;
void push(int x,int &start,int &end,int n,int a[]){
    if(end==n-1){
        cout<<"push fail"<<endl;
        return;
    }
    if(start==-1 && end==-1){
        start=(start+1)%n;
        end=(end+1)%n;
        a[end]=x;
        return;
    }
    end=(end+1)%n;
    a[end]=x;
    cout<<"push over"<<endl;
    return;

}
void pop(int &start,int &end,int a[]){
    if(end==-1 && start==-1){
        cout<<"pop fail"<<endl;
        return;


    }
    else if(start==end){
        start=-1;
        end=-1;
        cout<<"last pop done"<<endl;
        return;
    }
    start=(start+1)%5;
    cout<<"pop over"<<endl;
    return;
}
void on_top(int &start,int &end,int a[]){
    if(start==-1){
        cout<<"no el on top"<<endl;
        return;
    }
    cout<<a[start]<<endl;
    return;
}

int main(){
    int n=5;
    int a[n];
    
    
    push(1,start,endi,n,a);
    push(2,start,endi,n,a);
    push(3,start,endi,n,a);
    pop(start,endi,a);
    on_top(start,endi,a);
    return 0;
}
    */

struct Node{
    int d;
    Node* next;
    public:
    Node(int d1,Node* n1){
        d=d1;
        next=n1;
    }
    Node(int d1){
        d=d1;
        next=nullptr;
    }
};
void push(Node* &s,Node* &e,int x){
    Node* t=new Node(x);
    e->next=t;
    e=t;
    return;
}
void pop(Node* &s,Node* &e){
    if(s==e){
        s=nullptr;
        e=nullptr;
        return;
    }
    Node* t=s;
    s=s->next;
    free(t);
    return;
}
void on_top(Node* &s,Node* &e){
    if(s==nullptr){
        cout<<"null"<<endl;
        return;
    }
    cout<<s->d<<endl;
    return;
}
int main(){
    
    Node* start=new Node(1);
    Node* end=start;
    push(start,end,2);
    push(start,end,3);
    pop(start,end);
    on_top(start,end);
    return 0;
}