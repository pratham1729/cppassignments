#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

void append(Node* &head,int x){
    Node* nodeptr;
    Node* newnode;
    newnode=new Node(x);
    if(head==NULL){
        head=newnode;
    }
    else{
        nodeptr=head;
        while (nodeptr->next!=NULL) nodeptr=nodeptr->next;
        nodeptr->next=newnode;
    }
}
void show(Node* head){
    Node* nodeptr;
    nodeptr=head;
    while(nodeptr!=NULL){
        cout<<nodeptr->data<<" ";
        nodeptr=nodeptr->next;
    }
    cout<<endl;
}

void ascendingsort(Node* head){
    Node* i;
    Node* j;
    for(i=head;i!=NULL;i=i->next){
        for(j=i->next;j!=NULL;j=j->next){
            if((i->data)>(j->data)){
                int c=i->data;
                i->data=j->data;
                j->data=c;
            }
        }
    }

}
void decsort(Node* head){
    Node* i;
    Node* j;
    for(i=head;i!=NULL;i=i->next){
        for(j=i->next;j!=NULL;j=j->next){
            if((i->data)<(j->data)){
                int c=i->data;
                i->data=j->data;
                j->data=c;
            }
        }
    }

}




int main(){
    Node* head=NULL;
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter the element to be added: ";
        cin>>x;
        append(head,x);
    }
    show(head);
    ascendingsort(head);
    show(head);
    decsort(head);
    show(head);
}