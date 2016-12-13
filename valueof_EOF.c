/* 
   DEVELOPER ---------- APOORV JAIN
   DATE --------------- 13-DEC-2016
   PROBLEM STATEMENT -- PROGRAM TO FIND WHAT DOES EOF RETURNS
   
   NOTE -- EOF means End Of File. In Linux while you are entering a stream of characters from terminal and when you need to stop
   	   you need to press "Ctrl+d" that signifies EOF. So we need to find what value does EOF returns(0 or 1 or -1)

*/


//HEADER FILES
#include<stdio.h>


//MAIN FUNCTION
int main()
{
	int c;
	
	printf("Enter Text . Press Ctrl + d when you want to stop. \n ");
	
	while((c=getchar())!=EOF)
	putchar(c);		//DISPLAY WHAT IS BEING ENTERED

	if(c==1)
		printf("\nVALUE OF EOF IS 1");
		
	else if(c==-1)
		printf("\nVALUE OF EOF IS -1");
	
	else
		printf("\nVALUE OF EOF IS 0");
	
	return 0;

}

	
