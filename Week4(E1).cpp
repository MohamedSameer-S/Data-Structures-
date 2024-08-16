#include<iostream>
using namespace std;

class node
{
 public:
 int data;
 node*next;

};






node*last=NULL;

void insertatfirst(int val)
{
    node* newnode=new node();
    if(newnode==NULL){
        return;
    }
    newnode->data=val;
    if(last==NULL)//list is empty
    {
        newnode->next=newnode;
        last=newnode;
    }
    else
    {
        newnode->next=last->next;
        last->next=newnode;
    }
}

void printlist()
{
    cout<<"Elements in the list are:"<<endl;
    node*temp=last->next;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=last->next);

}





int main()
{
 node*head=NULL;

 int n;
 int num;
 cout<<"Enter the value to insert:";
 cin>>num;
 //cout<<"Enter the no.of nodes:";
 //cin>>n;
 //for(int i=1;i<=n;i++)
 //{
 // node*new_node=new node();
  //cout<<"Enter the value of node:";
 // cin>>new_node->data;
 // new_node->next=head;
//head=new_node;
//}
  insertatfirst(num);
  printlist();
  return 0;

}
















