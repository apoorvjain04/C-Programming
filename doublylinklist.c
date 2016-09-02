/* DEVELOPER ---------- APOORV JAIN
   DATE --------------- 2-SEP-2016
   PROBLEM STATEMENT -- INSERTION DELETION AND DISPLAY IN A DOUBLY LINKED LIST
*/


// HEADER FILES
#include<stdio.h>
#include<stdlib.h>

// STRUCTURE OF DOUBLY LINKED LIST
typedef struct DoublyLinkList
{
int data;
struct DoublyLinkList *prev;
struct DoublyLinkList *next;
}dlinklist;

dlinklist *head;

// FUNCTION DECLARATION

void insert();
void delete();
void display();

// MAIN FUNCTION
int main()
{

int choice;

printf("\n\tPROGRAM OF DOUBLY LINKED LIST\n");

	while(1)
	{
		printf("\n\tPLEASE ENTER YOUR CHOICE\n");
		printf("\t 1. INSERT \n");
		printf("\t 2. DELETE \n");
		printf("\t 3. DISPLAY \n");
		printf("\t 4. EXIT \n");

		scanf("%d",&choice);

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
			default:printf("\nWRONG CHOICE");
				exit(0);
		}
	
	}

return 0;

}

// INSERT FUNCTION

void insert()
{
int data;
dlinklist *temp;

printf("\n\tENTER THE ELEMENT \n");
scanf("%d",&data);

	// FIRST NODE
	if(!head)
	{
		head = (dlinklist *)malloc(sizeof(dlinklist));
		head->prev= NULL;
		head->next= NULL;
		head->data=data;
	}
	// OTHER NODES ARE BEING INSERTED AT THE FIRST POSITION
	else
	{
		temp = (dlinklist *)malloc(sizeof(dlinklist));
		temp->data=data;
		temp->next=head;
		temp->prev=NULL;
		head->prev=temp;
		head = temp;
	}
}

// DISPLAY FUNCTION
void display()
{
	dlinklist * temp;
	temp = head;
	
	while(temp != NULL)
	{
		printf("%4d",temp->data);  // 4d PROVIDES SPACING OF 4 DIGITS AND PRINTS DATA IN SAME LINE
		temp=temp->next;
	}
	printf("\n");
}

// DELETE FUNCTION
void delete()
{
int data;
dlinklist *p;
p=head;

printf("\nENTER THE ELEMENT FROM LIST\n");
scanf("%d",&data);

	while(p)
	{
		if(p==head && p->data==data) // FIRST NODE
		{
			 head=p->next;
			 head->prev=NULL;
			 free(p);
			 return;
		}
		else if(p->next == NULL && p->data==data) // LAST NODE
		{
			 p->prev->next = NULL;
			 free(p);
			 return;
		}
		else
		{
				if(p->data==data) // INTERMEDIATE NODE
				{		
			   	p->prev->next = p->next;
			   	p->next->prev = p->prev;
			   	free(p);
			   	return;
	  			}  	
	  	}
	p=p->next;
	}
}






