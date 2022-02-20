#include<iostream>
using namespace std;
#define max 10
class stack
{
	int top;
	int stk[max];
	public : 
	 void init()
	 {
	 	top=-1;
	 }
	 void push(int item)
	 {
	 	if(isfull())
	 	    cout<<"stack overflow!"<<endl;
	 	else
		{
			top=top+1;
            stk[top]=item;		 	
 		} 
	 }
	 void pop()
	 {
	 	if(isempty())
	 	    cout<<"stack overflow!"<<endl;
	    else
		{   
            top--;
		}	    
	 }
	 int isempty()
	 {
	 	if(top==-1)
	 	    return 1;
	 	else 
		    return 0;   
	 }
	 int isfull()
	 {
	 	if(top==max-1)
	 	    return 1;
	 	else 
		    return 0;   
	 }
	 void display()
	 {
	 	int i;
	 	cout<<endl<<"stack"<<endl;
	 	for(i=top;i>-1;i--)
	 	{
	 		cout<<stk[i]<<"\t";
		 }
	 }
};
int main()
{
	stack s;
	s.init();
	int ch,item,p;
	do
	{
		cout<<endl<<"menu"<<endl;
		cout<<"1.PUSH\t2.POP\t3.DISPLAY\t4.ISEMPTY\t5.ISFULL"<<endl;
		cout<<"enter choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1 : cout<<"enter item : ";
			         cin>>item;
			         s.push(item);
			         break;
			case 2 : s.pop();
			         cout<<"item poped!"<<endl;
					 break;
	        case 3 : s.display();
			         break;
			case 4 : p=s.isempty();
			         if(p) 
					 cout<<"stack underflow!"<<endl;
					 else
					 cout<<"stack not underflow!"<<endl;
					 break;
			case 5 : p=s.isfull();
			         if(p)
					 cout<<"stack overflow!"<<endl;
					 else
					 cout<<"stack not overflow!"<<endl;
					 break;		 		         
	   }				 
	}while(ch==1||ch==2||ch==3||ch==4||ch==5);
}
