/* 
   DEVELOPER ---------- APOORV JAIN
   DATE --------------- 13-DEC-2016
   PROBLEM STATEMENT -- PROGRAM TO COUNT NUMBER OF BLANKSPACES, NUMBER OF TABS AND NUMBER OF LINES 
*/

//HEADER FILES
#include<stdio.h>

// MAIN FUNCTION
int main()
{
	int c,blank_count=0,tab_count=0,line_count=0;
	
	while((c=getchar())!=EOF)
		if(c == ' ')		//BLANK SPACE CHECK
		blank_count++;
		else if(c == '\t')	//TAB CHECK
		tab_count++;
		else if(c == '\n')	//NEWLINE CHECK
		line_count++;
	
	
	printf("\nBlank Space count is %d\n",blank_count);
	printf("Tab count is %d\n",tab_count);
	printf("Line count is %d\n",line_count);

return 0;
}
