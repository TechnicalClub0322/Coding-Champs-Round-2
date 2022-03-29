#include<stdio.h>
void fib(prev,cur,startterm,term)
{
	if (startterm>term)
	{
		return;
	}
	
	if (startterm<=2)
	{
		printf("%d  ",startterm-1);
		fib(prev,cur,startterm+1,term);	
	}
	else
	{
		int next;
		next=prev+cur;
		printf("%d  ",next);
		prev=cur;
		cur=next;
		fib(prev,cur,startterm+1,term);	
	}	
}
void main()
{
	int n;
	printf("ENTER THE NUMBER OF TERMS YOU WANT TO PRINT THE FIBONACCI SERIES: ");
	scanf("%d",&n);
	fib(0,1,1,n);
}
