#include<iostream>
#include<string>
using namespace std;
class node
{
    public:
    int data1,data3;
    string data2;
    node* next;
};

void completefirst(node* head)
{
    int min=head->data3;
    node* temp=head->next;
    if(head!=NULL)
    {
        do
        {
            if(temp->data3<min)
        {
            min=temp->data3;

        }
        temp=temp->next;
        }while(temp!=head);
    }
    cout<<"number "<<min<<" with task allotment will complete first"<<endl;

}
int main()
{
    int id,task;
    string name;
   node* head=NULL;
   node* second=NULL;
   node* third=NULL;

   head=new node();
   second=new node();
   third=new node();

 cout<<"Enter the id of the employee:";
   cin>>id;
   cout<<"Enter name of the employee:";
   cin>>name;
   cout<<"enter number of tasks:";
   cin>>task;
   head->data1=id;
   head->data2=name;
   head->data3=task;
   head->next=second;

   cout<<"Enter the id of the employee:";
   cin>>id;
   cout<<"Enter name of the employee:";
   cin>>name;
   cout<<"enter number of tasks:";
   cin>>task;
   second->data1=id;
   second->data2=name;
   second->data3=task;
   second->next=third;

   cout<<"Enter the id of the employee:";
   cin>>id;
   cout<<"Enter name of the employee:";
   cin>>name;
   cout<<"enter number of tasks:";
   cin>>task;
   third->data1=id;
   third->data2=name;
   third->data3=task;
   third->next=head;

   completefirst(head);
}
