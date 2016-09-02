/* DEVELOPER ---------- APOORV JAIN
   DATE --------------- 2-SEP-2016
   PROBLEM STATEMENT -- INSERTION DELETION AND DISPLAY IN A CIRCULAR LINKED LIST
*/


// HEADER FILES
#include<stdio.h>
#include<stdlib.h>

// STRUCTURE OF CIRCULAR LINKED LIST
typedef struct CircularLinkList
{
int data;
struct CircularLinkList *next;
}clinklist;

clinklist *head, *track;


// FUNCTION DECLARATION

void insert();
void delete();
void display();

int main()
{

int choice;

printf("\n\tPROGRAM OF CIRCULAR LINKED LIST\n");

	while(1)
	{
	printf("\n\tPLEASE ENTER YOUR CHOICE\n");
	printf("\n\t1. INSERT \t2. DELETE \t3. DISPLAY \t4. EXIT\n\n\t");
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
		default:printf("\nWRONG CHOICE. BYE."); 
			exit(0);
	}
	
	}

return 0;

}

//INSERTION AT END
void insert()
{
int data;
clinklist *temp;

printf("\n\tENTER THE ELEMENT \n\t");
scanf("%d",&data);

	// FIRST NODE
	if(!head)
	{
		head = (clinklist *)malloc(sizeof(clinklist));
		head->next= NULL;
		head->data=data;
		track=head;
	}
	// OTHER NODES
	else
	{
		temp = (clinklist *)malloc(sizeof(clinklist));
		temp->data = data;
		track->next=temp;
		temp->next=head;
		track=track->next; // TRACK WILL POINT TO LAST NOTE ENTERED
	}
}

// DISPLAY FUNCTION
void display()
{
	clinklist * temp;
	temp = head;
	
	do
	{
		printf("%4d",temp->data);
		temp=temp->next;
	}
	while(temp != head);
	printf("\n");
}

// DELETE FUNCTION
void delete()
{
	int data;
	clinklist *p,*t;
	p=t=head;
		
	printf("\nENTER THE ELEMENT FROM LIST\n");
	scanf("%d",&data);

	
	// FIRST NODE DELETION
	if(p==head && p->data==data)
	{
	head=p->next;
	track->next=head;
	free(p);
	return;
	}
	
	//OTHER NODES DELETION
	else
	{
		p=p->next;
		while(p != head)
		{
			if(p->data==data)
			{
				t->next=p->next;
				free(p);	
			}
		p=p->next;
		t=t->next;	
		}	
	}

}


