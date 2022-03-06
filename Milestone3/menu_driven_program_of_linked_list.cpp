#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *head=NULL;
void create()
{
	int info;
	struct node *nn;
	struct node *temp;
	nn=(struct node*)malloc(sizeof(struct node));
	printf("\n\tenter data : ");
	scanf("%d",&info);
	nn->data=info;
	nn->next=NULL;
	if(head==NULL)
	{
		head=nn;
		temp=head;
	}
	else
	{
		temp->next=nn;
		temp=nn;
	}
}
void display()
{
	printf("\n\tyour linked list  :    ");
	struct node *temp;
	temp=head;
	while(temp!=NULL)
	{
	  	printf("%d-->",temp->data);
	  	temp=temp->next;
	}
	printf("NULL");
}
void  insert_at_front()
{
	int info;
	struct node *nn;
	nn=(struct node *)malloc(sizeof(struct node));
	printf("\nenter data : ");
	scanf("%d",&info);
	nn->data=info;
	nn->next=head;
	head=nn;
}
void insert_at_end()
{
	struct node *temp=head,*nn;
	int info;
	printf("\nenter data : ");
	scanf("%d",&info);
	nn=(struct node *)malloc(sizeof(struct node));
	nn->data=info;
	nn->next=NULL;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=nn;
}
void insert_at_position()
{
	int pos,i=1;
	printf("\n\tenter position  : ");
	scanf("%d",&pos);
	int info;
	printf("\n\tenter data  : ");
	scanf("%d",&info);
	struct node *nn,*temp=head;
	nn=(struct node *)malloc(sizeof(struct node));
	nn->data=info;
	if(head==NULL)
	{
		printf("\n\tlist is empty");
	}
	else if(pos==1)
	{
		nn->next=head;
		head=nn;
	}
	else
	{
		while(i<pos-1)
	    {
	    	temp=temp->next;
			i++;	
		}
		nn->next=temp->next;
		temp->next=nn;
	}
}
void delete_at_front()
{
	struct node *cur;
	 if (head == NULL)
        printf("\nList is empty\n");
     else
     {
     	cur=head->next;
	    head->next=NULL;
	    free(head);
	    head=cur;
	 }	
}
void delete_at_end()
{
	struct node *temp, *prevnode;
    if (head == NULL)
        printf("\nList is Empty\n");
    else {
        temp = head;
        while (temp->next != NULL) {
            prevnode = temp;
            temp = temp->next;
        }
        free(temp);
        prevnode->next =NULL;
    }
}
void delete_at_pos()
{
	struct node *temp, *position;
    int i = 1, pos;

    if (head == NULL)
        printf("\nList is empty\n");
  
    else {
        printf("\nEnter position : ");
        
        scanf("%d", &pos);
        position = malloc(sizeof(struct node));
        temp = head;
        
        while (i < pos - 1) {
            temp = temp->next;
            i++;
        }
        
        position = temp->next;
        temp->next = position->next;
        free(position);
    }
}
void search()
{
	int n,i=1;
	struct node *temp=head;
	int pos;
	printf("\n\t\tenter node position : ");
	scanf("%d",&pos);
	while(i<pos)
	{
		temp=temp->next;
	    i++;
	}
	printf("\n\t\tdata present at node position %d is %d ",pos,temp->data);
}
void reverse()
{
	struct node *prev=NULL,*cur=head,*newptr;
	while(cur!=NULL)
	{
		newptr=cur->next;
		cur->next=prev;
		
		prev=cur;
		cur=newptr;
	}
	head=prev;
}
void sorting()
{
	struct node *i,*j;
	int temp;
	for(i=head;i->next!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(i->data>j->data)
			{
				temp=i->data;
				i->data=j->data;
				j->data=temp;
			}
		}
	}
}
int main()
{
	int i,n;
	printf("\t\t\tSINGLY LINKED LIST\n");
	printf("\tenter number of nodes : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		create();
	}
	display();
	int ch,l;
	do
	{
		printf("\n\t\tvarious operations on linked list  ");
	printf("\n1.insert at front \n2.insert at end\n3.insert at specific location \n4.delete front node \n5.delete front end\n6.delete node at any position\n7.search element\n8.reverse list\n9.sort list");
	
	printf("\nenter choice  :  ");
	scanf("%d",&l);
	switch(l)
	{
		case 1 : insert_at_front();
	             display();
	             break;
	    case 2 : insert_at_end();
	             display();
				 break;
		case 3 : insert_at_position();
	             display();	 
				 break;
		case 4 : delete_at_front();
               	 display();
			     break;	   
		case 5 : delete_at_end();
	             display();	     
	             break;
	    case 6 : delete_at_pos();
		         display();
				 break;      
		case 7 : search();
		         break;	
		case 8 : reverse();	
		         display();
		         break; 
		case 9 : sorting();
		         display();
				 break;		 	  
	    default : 
		         printf("\nentered wrong choice ");       
	}
	printf("\ndo you wants to enter more : press 1 ");
scanf("%d",&ch);
		}while(ch==1);	
  return 0;
}		
