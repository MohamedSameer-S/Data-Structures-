#include<iostream>
#include<string>
using namespace std;
class node
{
    public:
    int data2,data3;
    string data1;
    node* next;
};
void maxsalofemp(node* head)
{
    int max=head->data3;
    string name;
    node* tmp=head->next;
    while(tmp!=NULL)
    {
        if(tmp->data3>max)
        {
            max=tmp->data3;
            name=tmp->data1;

        }
        tmp=tmp->next;
    }
    cout<<"maximum salary of the employee is:"<<max<<endl;
    cout<<"Name is:"<<name<<endl;
}
int main()
{
    int id,sal;
    string name;
    int n;
    node* head=NULL;
    cout<<"Enter the number of nodes:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the name of employee:";
        cin>>name;
        cout<<"Enter the id of employeee:";
        cin>>id;
        cout<<"Enter salary of employee:";
        cin>>sal;
        node* newnode=new node();
        newnode->data1=name;
        newnode->data2=id;
        newnode->data3=sal;
        newnode->next=head;
        head=newnode;
    }
    maxsalofemp(head);
    return 0;
}
