
/* DEVELOPER ---------- APOORV JAIN
   DATE --------------- 8-DEC-2016
   PROBLEM STATEMENT -- CHECK WHETHER THE NUMBER IS EVEN OR ODD
*/

//HEADER FILE
#include<stdio.h>


//MAIN FUNCTION
int main()
{

	int num;
	printf("PROGRAM TO CHECK NUMBER IS EVEN OR ODD\n");
	printf("\nEnter a Number\n");
	scanf("%d",&num);
	
	(num%2==0)?printf("%d Number is Even \n",num):printf("%d Number is Odd \n",num);  // TERNARY OPERATOR IS USED
	
return 0;
}
