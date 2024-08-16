#include<iostream>
using namespace std;
class node
{
 public:
 int data;
 node*next;
};
class Q
{
 public:
 node*front=NULL;
 node*rear=NULL;

 void enqueueval(int d)
 {
  node*newnode=new node();
  newnode->data=d;

  if(front==NULL)
  {
   front=rear=newnode;
  }
  else
  {
   rear->next=newnode;
   rear=rear->next;
  }
}

void dequeueval()
{
 if(front!=rear)
 {
  node*tmp=front;
  front=front->next;
  delete tmp;
 }
 else
 {
  delete front;
  front=rear=NULL;
 }
}
void display()
{ node*j=front;
    while(j!=NULL){
        cout<<j->data<<" ";
        j=j->next;
    }
}
};
int main()
{
int n,val,i;
Q q1;
cout<<"Enter the no.of elements:";
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter value"<<i+1<<":";
cin>>val;
q1.enqueueval(val);
}
cout<<"Elments in the queue are:"<<endl;
q1.display();
cout<<"\n";
cout<<"After deletion, queue is:";
q1.dequeueval();
q1.display();
//q1.dequeueval();
//q1.dequeueval();
//q1.display();

//cout<<"Elements in queue are"<<endl;
//q1.display();


return 0;
}
