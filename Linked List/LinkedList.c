#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
};
struct node*head,*temp=NULL;
void create()
{
	struct node *p=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:\n");
	scanf("%d",&p->data);
	p->next=NULL;
	if(head==NULL)
	{
		head=temp=p;
	}
	else
	{
		
		temp->next=p;
		temp=p;
	}
}
void insertatbegining()
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data u want to insert:\n");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
}
void insertatend()
{
	struct node*newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data u want to insert:\n");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=newnode;
}
void insertAtanyposition()
{
	int i,data,n,loc;
	printf("Enter the position where you want to enter:");
	scanf("%d",&loc);
	if(loc<0 ){
	printf("invalid insertion\n");}
	else if(loc==0 || head==NULL)
	{
		create();
	}
	else
	{
		struct node*ptr=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data u want to insert:\n");
		scanf("%d",&ptr->data);
		temp=head;
		for(i=1;i<loc;i++)
		{
			temp=temp->next;
		}
		
		ptr->next=temp->next;
		temp->next=ptr;
	}
	
}
void deletefrombeg()
{
	temp=head;
	head=head->next;
	free(temp);
}
void deletefromend()
{
	struct node*prevnode;
	temp=head;
	prevnode=NULL;
	while(temp->next!=NULL)
	{
		prevnode=temp;
		temp=temp->next;
	}
	//if(temp==head){
		//head=NULL;
	//}else{
	prevnode->next=NULL;
	//}
	free(temp);
}
void deletefromposition()
{
	struct node*q;
	int pos,i=1;
	temp=head;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else 
	{
		printf("Enter tha position:\n");
		scanf("%d",&pos);
		while(i<pos-1){
			temp=temp->next;
			i++;
		}
		q=temp->next;
		temp->next=q->next;
		free(q);
	}
	
}
void display()
{
	temp=head;
	if(temp==NULL)
	{
		printf("List is empty\n");
		return;
	}
	printf("Nodes of singly linked list:\n");
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}printf("\n");
}
int main()
{
	int choice;
	int i,s=0;
	while(1)
	{
		printf("Press 1 to create, Press 2 to insert at begining, Press 3 to insert at end ,Press 4 to insert at any position,Press 5 to delete from begining,Press 6 to delete from end,Press 7 to delete from any position, Press 8 to display , Press 9 to exit\n");
		printf("Enter your choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				create(i);
				break;
			case 2 :
				insertatbegining();
				break;
			case 3 :
				insertatend();
				break;
			case 4:
				insertAtanyposition();
				break;
			case 5:
				deletefrombeg();
				break;
			case 6:
				deletefromend();
				break;
			case 7:
				deletefromposition();
				break;
			case 8:
				display();
				break;
			case 9 :
				exit(0);
				break;
			default:
				printf("Wrong choice\n");  
		}
				
	}

	return 0;
}
