#include<stdio.h>
#include<conio.h>

int main()
{
	long int arr[]={-12,-45,-67, -45 ,-34,-54,1,1,1,-500}, max, max2, max3;
	max=max2=max3=-2147483648;
	for(int k=1;k<=3;k++)
	{
		for(int i=0;i<10;i++)
		{
		if(arr[i]>=max)
		{
			max=arr[i];
		}
		else if(arr[i]>max2 && arr[i]<max)
		{
			max2=arr[i];
		}
		else if(arr[i]>max3 && arr[i]<max2)
		{
			max3=arr[i];
		}
		}
	}
	printf("\n3rd max = %d", max3); 
	getch();
	
}
