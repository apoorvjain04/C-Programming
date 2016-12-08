/* DEVELOPER ---------- APOORV JAIN
   DATE --------------- 08-DEC-2016
   PROBLEM STATEMENT -- PROGRAM TO DETERMINE WHETHER A NUMBER IS PRIME OR NOT
*/


//HEADER FILES
#include<stdio.h>
#include<math.h>

//MAIN FUNCTION
int main()
{

	int i,num;
	int flag = 0;
	
	printf("PROGRAM TO DETERMINE WHETHER A NUMBER IS PRIME OR NOT\n");
	printf("\nEnter a Number \n");
	scanf("%d",&num);
	
	for(i=2;i<=sqrt(num);i++) 
	{
		if((num%i)==0)
		{
			flag = 1;		//If factor exist flag will be set and come out of loop 
			break;
		}	
	}
	
	(flag==0)?printf("%d is Prime Number\n",num):printf("%d is Not a Prime Number\n",num);	
}

	/*
	 WE ARE EXECUTING LOOP TO SQRT OF THE NUMBER 
	 AS IF FACTORS EXIST THEY WILL APPEAR TILL THAT TIME
	 EXAMPLE : n=16 sqrt(n)=4
	 	   factors of 16 apart from 1 and 16
	 	   
	 	   2*8
	 	   4*4 --> if we go till 4 it is sufficient
	 	   8*2
	*/
