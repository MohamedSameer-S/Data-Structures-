#include<iostream>
#include<string>
using namespace std;
class node
{
    public:
  long int data1,data2;
  string data3,data4;
  node* next;
};
void printlist(node* head)
{
    node* ptr=head;
    if(head!=NULL)
    {
        cout<<"list before modifying"<<endl;
        do
        {
            cout<<ptr->data1<<" "<<ptr->data3<<" "<<ptr->data2<<" "<<ptr->data4<<endl;
            ptr=ptr->next;
        }while(ptr!=head);
    }
    cout<<endl;
}
void add(node * head,long int id,string name,long int phone_num,string email_id)
{
    node * curr=head;
    node * newnode=new node();
    while(curr->next!=head)
    {
        curr=curr->next;
    }
    newnode->data1=id;
    newnode->data2=phone_num;
    newnode->data3=name;
    newnode->data4=email_id;
    newnode->next=head;
    curr->next=newnode;
    curr=head;
    if(head!=NULL)
    {
        cout<<"After adding"<<endl;
        do
        {
        cout<<curr->data1<<" "<<curr->data3<<" "<<curr->data2<<" "<<curr->data4<<endl;
            curr=curr->next;
        }while(curr!=head);
    }
    cout<<endl;
}
void remov(node * head,int pos)
{
    node * temp = head;
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    node * t=temp->next;
    temp->next=temp->next->next;
    delete t;
    temp=head;
    if(head!=NULL)
    {
        cout<<"after removing"<<endl;
        do
        {
    cout<<temp->data1<<" "<<temp->data3<<" "<<temp->data2<<" "<<temp->data4<<endl;
    temp=temp->next;
        }while(temp!=head);
    }
    cout<<endl;
}
void update(node* head,int location)
{
    node* temp=head;
    int var;
    int new_id;
    string new_name;
    string new_email;
    cout<<"Enter id number for updation:";
    cin>>new_id;
    cout<<"Enter new name for updation:";
    cin>>new_name;
    cout<<"Enter new phone number for updation:";
    cin>>var;
    cout<<"Enter new email for updation:";
    cin>>new_email;
    for(int i=1;i<=location;i++)
    {
        temp=temp->next;
    }
    temp->data1=new_id;
    temp->data2=var;
    temp->data3=new_name;
    temp->data4=new_email;
        cout<<"after updation"<<endl;
            cout<<temp->data1<<endl<<temp->data3<<endl<<temp->data2<<endl<<temp->data4<<endl;
    }
void search(node * head,int id)
{
    node * var=head;
    if(var->data1!=id)
    {
        var=var->next;
    }
            cout<<"\nId : "<<var->data1<<"\nName : "<<var->data3<<"\nNumber : "<<var->data2<<"\nEmail : "<<var->data4;
    cout<<"\nYou have searched this contact "<<endl;
   }
int main()
{
    long int id,phone_num;
    string name,email_id;
    node* head=NULL;
    node* second=NULL;
    node* third=NULL;

    head=new node();
    second=new node();
    third=new node();

    cout<<"Enter id for 1st node:";
    cin>>id;
    cout<<"Enter name for 1st node:";
    cin>>name;
    cout<<"Enter phone number for 1st node:";
    cin>>phone_num;
    cout<<"Enter email for 1st node:";
    cin>>email_id;

    head->data1=id;
    head->data2=phone_num;
    head->data3=name;
    head->data4=email_id;
    head->next=second;

     cout<<"Enter id for 2nd node:";
    cin>>id;
    cout<<"Enter name for 2nd node:";
    cin>>name;
    cout<<"Enter phone number for 2nd node:";
    cin>>phone_num;
    cout<<"Enter email for 2nd node:";
    cin>>email_id;

    second->data1=id;
    second->data2=phone_num;
    second->data3=name;
    second->data4=email_id;
    second->next=third;

    cout<<"Enter id for 3rd node:";
    cin>>id;
    cout<<"Enter name for 3rd node:";
    cin>>name;
    cout<<"Enter phone number for 3rd node:";
    cin>>phone_num;
    cout<<"Enter email for 3rd node:";
    cin>>email_id;

    third->data1=id;
    third->data2=phone_num;
    third->data3=name;
    third->data4=email_id;
    third->next=head;

    printlist(head);
    cout<<"Enter new id to be inserted:";
    cin>>id;
    cout<<"Enter new name to be inserted:";
    cin>>name;
    cout<<"Enter new phone number to be inserted:";
    cin>>phone_num;
    cout<<"Enter new email id:";
    cin>>email_id;
    add(head,id,name,phone_num,email_id);

    int pos;
    cout<<"Enter the position to be deleted:";
    cin>>pos;
    remov(head,pos);

    int location;
    cout<<"Enter position to be updated:";
    cin>>location;
    update(head,location);

    cout<<"Enter id to be searched:";
    cin>>id;
    search(head,id);


    return 0;
}
