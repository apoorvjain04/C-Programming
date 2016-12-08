/*
   DEVELOPER ---------- APOORV JAIN
   DATE --------------- 08-DEC-2016
   PROBLEM STATEMENT -- PRINTING COMPLETE PYRAMID
*/

//HEADER FILE
#include<stdio.h>

//MAIN FUNCTION
int main()
{

int size,i,j;

	printf("PROGRAM OF PRINTING PYRAMID\n");
	printf("\nEnter The Size of Pyramid  "); //HEIGHT OF PYRAMID
	scanf("%d",&size);
	
	for(i=1;i<=size;i++) 			//This outer for loop is for rows
	{
		for(j=size;j>i;j--)		//This for loop is for printing empty spaces. 
		{				//Empty space in a row = Total rows - Current row number
			printf(" ");
		}
		for(j=1;j<2*i;j++)		//This for loop prints '*'
		{				//Number of stars in a row = 2*current row number - 1
			printf("*");
		}
	printf("\n");
	}
}
