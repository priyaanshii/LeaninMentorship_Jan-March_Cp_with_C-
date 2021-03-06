#include<iostream>
#define max 10
using namespace std;
class queue
{
	int front;
	int rear;
	int queue[max];
	public: 
	void init();
	void enqueue();
	void dequeue();
	void display();
};
void queue::init()
{
	front=-1;
	rear=-1;
}
void queue::enqueue()
{
    int item;
	if(rear==max-1)
	cout<<"queue overflow"<<endl;
	else
	{
		cout<<"\nenter element : ";
       	cin>>item;
       	if(front==-1&&rear==-1)
       	{
       		front=0;
       		rear=0;
		}
		else
		{
			rear=rear+1;
		}
		queue[rear]=item;
	}
	cout<<"\nitem inserted : "<<queue[rear]<<endl;
}
void queue::dequeue()
{
	int item;
	if(front==-1&&rear==-1)
         cout<<"\nqueue underflow"<<endl;
    else
	{
		item=queue[front];
		if(front==rear)
		{
			front=-1;
			rear=-1;
		}
		else
		front=front+1;
    }     
    cout<<"\nitem deleted : "<<item<<endl;
}
void queue::display()
{
	if(front==-1&&rear==-1)
	cout<<"\nqueue underflow"<<endl;
	else
	{
		cout<<"\nqueue is : ";
		for(int i=front;i<=rear;i++)
		{
			cout<<queue[i]<<"\t";
		}
	}
	cout<<endl;
}
main()
{
	queue obj;
	int n;
	cout<<"\t\t\tLINEAR QUEUE"<<endl;
	obj.init();
    do
    {
    	cout<<"\t\t\tMENU"<<endl;
    	cout<<"1 ENQUEUE\t2 DEQUEUE\t3 DISPLAY \t4 EXIT"<<endl;
    	cout<<"enter choice : ";
    	cin>>n;
    	switch(n)
    	{
    		case 1 : obj.enqueue(); break;
    		case 2 : obj.dequeue(); break;
    		case 3 : obj.display(); break;
		}
    	
	}while(n==1||n==2||n==3);
}
