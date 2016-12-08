/* 
   DEVELOPER ---------- APOORV JAIN
   DATE --------------- 08-DEC-2016
   PROBLEM STATEMENT -- PROGRAM TO DETERMINE WHETHER A NUMBER IS ARMSTRONG NUMBER OR NOT
   
   NOTE -- ARMSTRONG NUMBER CAN BE EXPLAINED WITH THE HELP OF SOME EXAMPLES
			371 = POWER(3,3) + POWER(7,3) + POWER(1,3)
			371 = 27	 + 343	      + 1
			371 = 371 ---> ARMSTRONG NUMBER
			   	
			123 = POWER(1,3) + POWER(2,3) + POWER(3,3)		
			123 = 1		 + 8	      + 27
			123 != 36 ---> NOT AN ARMSTRONG NUMBER
*/


//HEADER FILES
#include<stdio.h>
#include<math.h>

//MAIN FUNCTION
int main()
{
	int num,original_num,new_num,count=0;
	
	printf("PROGRAM OF ARMSTRONG NUMBER\n");
	printf("\nEnter a Number\n");
	scanf("%d",&num);
	original_num = num; // KEEPING THE ORIGINAL NUMBER SECURE
	
	//CALCULATING THE NUMBER OF DIGITS PRESENT IN GIVEN NUMBER
	while(num != 0)
	{
		num /= 10;
		count++;
	}
	
	num = original_num;
	
	//CALCULATING ARMSTRONG NUMBER
	while(num != 0)
	{
		new_num = new_num + pow(num%10,count);
		num /=10;
	}
	
	
	(new_num == original_num)?
	printf("%d Is Armstrong Number\n",original_num):printf("%d Is Not A Armstrong Number\n",original_num);
	
}
