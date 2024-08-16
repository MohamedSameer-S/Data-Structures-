#include<iostream>
using namespace std;

class Queue
{
 public:
 int q[40];
 int n;
 int f=-1;
 int r=-1;

 Queue(int s)
 {
  n=s;
 }

 void enqueue(int elem)
 {
  if(r==-1)
  {
   r=0;
   f=0;
  }
 else if((r+1)%n==f)
 {
  cout<<"Overflow!!";

 }
 else
 {
  r=r+1;
  if(r==n)
  {
   r=0;}
  }
  q[r]=elem;
}

void display()
{
cout<<"Queue elements are"<<endl;
 for(int i=f;i<=r;i++)
 {
  cout<<q[i]<<"\t";
 }
 cout<<endl;
}

void dequeue()
{
    if(f==-1)
    {
        cout<<"Empty queue";
        return ;
    }
    else
    {
        if(f==r)
        {
         f=-1;
         r=-1;
        }
        else
        {
            cout<<"Removed element is: "<<q[f];
            f--;
        }
    }
}

};

int main()
{
 Queue q1(20);

 q1.enqueue(15);
 q1.enqueue(10);
 q1.enqueue(25);
 q1.display();
 q1.dequeue();

 return 0;

}





