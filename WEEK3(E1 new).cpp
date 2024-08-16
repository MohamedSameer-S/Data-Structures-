#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node * next;
    node* prev;
};
void getmiddle(node*head,int size)
{
    int mid;
    int i=0;
    node* curr=head;
    if(size%2==0)
    {
        mid=((size/2)+(size/2)+1)/2;
    }
    else
    {
        mid=(size+1)/2;
    }
    while(curr!=NULL)
    {
        if(i==mid)
        {
            cout<<"middle value is:"<<curr->data<<endl;
        }
        i++;
    curr=curr->next;
}
}
int main()
{
    node * head=NULL;
    node* second=NULL;
    node* third=NULL;
    node* fourth=NULL;
    head=new node();
    second=new node();
    third=new node();
    fourth=new node();
    head->data=10;
    head->next=second;
    head->prev=NULL;
    second->data=20;
    second->next=third;
    second->prev=head;
    third->data=30;
    third->next=fourth;
    third->prev=second;
    fourth->data=40;
    fourth->next=NULL;
    fourth->prev=third;
    getmiddle(head,4);
    return 0;
}
