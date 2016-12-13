/* 
   DEVELOPER ---------- APOORV JAIN
   DATE --------------- 13-DEC-2016
   PROBLEM STATEMENT -- PROGRAM TO COUNT NUMBER OF CHARACTERS AND NUMBER OF LINES 
*/

//HEADER FILES
#include<stdio.h>

//MAIN FUNCTION
int main()
{
	int c,num_char=0,num_lines=0;

	while((c=getchar())!=EOF)
	{
		++num_char;	//INCREASING CHARACTER COUNT
		if(c == '\n')	//CHECKING WHETHER A NEW LINE IS THERE
		++num_lines;	//INCREASING NEW LINE COUNT
	}

	printf("\nThe Number Of Character are %d and Number of Lines are %d \n",num_char,num_lines);

	return 0;
}

