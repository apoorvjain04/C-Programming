/* DEVELOPED BY ------  APOORV JAIN 
   DATE --------------  31-AUGUST-2016
   PROBLEM STATEMENT--  INSERTION DELETION AND DISPLAY IN A LINKED LIST
*/



//HEADER FILES
#include<stdio.h>
#include<stdlib.h>

// STRUCTURE OF LINKED LIST
typedef struct Linklist
{

	int data;
	struct Linklist *next;

}linklist;

// HEAD POINTING TO FIRST NODE
linklist * head;


// METHOD DECLARATION
void insert();
void display();
void delete();

int main()
{

int choice;

	printf(" \n\tPROGRAM OF LINKED LIST\n ");

	while(1)
	{
		printf("\n\t PLEASE ENTER YOUR CHOICE \n");
		printf("\n\t 1. INSERT INTO LINKLIST ");
		printf("\n\t 2. DELETE FROM LINKLIST ");
		printf("\n\t 3. DISPLAY INTO LINKLIST ");
		printf("\n\t 4. EXIT \n ");

		scanf("\n\t%d",&choice);
	
		switch(choice)
		{
		case 1: insert();
		break;	
		case 2: delete();
		break;
		case 3: display();
		break;
		case 4: exit(0);
		break;
		}
	 	
	 	
	}

return 0;
}

//METHOD DEFINITION

void insert()
{
int data;
linklist *p;

printf("\nEnter the element");
scanf("\n%d",&data);

	if(head==NULL)
	{
		head = (linklist*)malloc(sizeof(linklist));
		head->data=data;
		head->next=NULL;
	}
	else
	{
	
		linklist * newnode = (linklist*)malloc(sizeof(linklist));
		newnode->data=data;
		newnode->next=NULL;

		p=head;
		while(p->next != NULL)
		{
		p=p->next;
		}

		p->next=newnode;
	}
}

void display()
{
linklist * p;
p=head;
	while(p != NULL)
	{
		printf("\n%d", p->data);
		p=p->next;
	}
}

void delete()
{

int data;
linklist *p=head;
linklist *t=head;
;
printf("\nEnter The element you want to delete\n");
scanf("%d",&data);

	if(!p)
	{
	printf("\nList is Empty");
	exit(0);
	}

	// deleting first node
	if(p->data==data && p == head)
		{
			head = p->next;
			free(p);
			return;
		}
	// deleting other node
	else
		{
			p=p->next;
			while(p!=NULL)
			{
				if(p->data==data)
				{
				t->next=p->next;
				}
				p=p->next;
				t=t->next;	
			}
						
		}
}
