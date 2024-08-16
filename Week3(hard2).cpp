#include<iostream>
#include<string>
using namespace std;
class Node{
    public:
    int data;
    Node *next=NULL;
};

Node *removenode(Node *head){
    Node *prev=NULL;
    Node *curr=head,*Next=NULL;
    while(curr!=NULL){
        Next=curr->next;

        curr->next=prev;

        prev=curr;

        curr=Next;
    }
    head=prev;
    Node *result=new Node();
    result->next=prev;
    Node *current=head;
    while(current!=NULL){
        current=current->next;
        if(current!=NULL){
        if(prev->data <=current->data){
            prev->next=current;
            prev=prev->next;
        }
        else{
            prev->next=current->next;
        }}
        }
    return result->next;
}

int main(){
    Node *head=new Node();
    Node *second=new Node();
    Node *third=new Node();
    Node *fourth=new Node();
    Node *fifth=new Node();
    head->data=5;
    head->next=second;
    second->next=third;
    second->data=2;
    third->data=13;
    third->next=fourth;
    fourth->data=3;
    fourth->next=fifth;
    fifth->data=8;

    Node *result=removenode(head);

    Node *prev=NULL;
    Node *curr=result,*Next=NULL;
    while(curr!=NULL){
        Next=curr->next;

        curr->next=prev;

        prev=curr;

        curr=Next;
    }
    result=prev;
    cout<<"The resultant node is:"<<endl;
    while(result!=NULL){
        cout<<result->data<<" ";
        result=result->next;
    }


}

