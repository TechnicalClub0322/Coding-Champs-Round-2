#include<stdio.h>

void main()
{
	int n,row,col; 
	
	printf("Enter Number of Rows:");
	scanf("%d",&n); //scanning the number of rows
	
	for(row=1;row<=(n*2)-1;row++) // loop for iterating in rows
	{
		for(col=1;col<=(n*2)-1;col++) //loop for iterating in columns
		{
			if(col<row&&row<=n) 
				printf(" "); //printing the spaces
			else if(col+(row-n)<n&&row>n)
				printf(" "); 
			else if(col<=((n*2)-1)-(row-1)&&row<=n)
				printf("*");
			else if((col-n)<=(row-n)&&row>n)
				printf("*");
		}
		printf("\n");
	}
}
//1 3 5 7 9

//(5*2)-1  nth odd number
