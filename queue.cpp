#include<iostream.h>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace td;
struct node
{
 private:
 node*front;
 public:
 priority_queue()
 {
 front=null;
 }
 void insert(int item, int priority)
 {
 node *tmp, *q;
 tmp=new node;
 tmp->info=item;
 tem->priority=priority;
 if(front == null || priority < front->priority)
 {
 tmp->link=front;
 front=tmp;
 }
 else
 {
 q=front;
 while(q->link!=null && q->link->priority <= priority)
 q=q->link;
 tmp->link=q->link;
 q->link=tmp;
 }
 }
 void del()
 {
 node *tmp;
 if(front==null)
 cout<<"Queue Underflow\n");
 else
 {
 tmp=front;
 cout<<"Deleted item is:"<<tmp->info<<endl;
 front=front->link;
 free(tmp);
 }
 }
 void display()
 {
 node *ptr;
 ptr=front;
 if(front==null)
 cout<<"Queue is empty\n";
 else
 {
 cout<<"Queue is:\n";
 cout<<"Priority Item\n';
 while(ptr!=null)
 {
 cout<<ptr->priority<<"
 ptr=ptr->link;
 }
 }
 }
 int main()
 {
 int chiice , item, priority;
 priority_Queue pq;
 do
 {
 cout<<"1.Insert\n";
 cout<<"2.Delete\n";
 cout<<"3.Display\n";
 cout<<"4.Quit\n";
 cout<<"Enter your choice:";
 cin>>choice;
 switch(choice)
 {
 case 1:
 cout<<"Input the item value to be added in the queue:";
 cin>>item;
 cout<<"Enter its priority:";
 cin>>priorityl;
 pq.insert(item,priority);
 break;
 case 2:
 pq.del();
 break;
 case3:
 pq.display();
 break;
 case 4:
 break;
 default:
 cout<<"Wrong choice\n";
 }
 }
 while(choice!=4);
 return 0;
 }

