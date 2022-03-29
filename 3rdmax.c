#include<stdio.h>
#include<conio.h>

int main()
{
	long int arr[]={1,-2,-25,-21,-66,5,1,-35,-9,-13}, max, max2, max3,i,k;
	max=max2=max3=-2147483648; // this is the lowest possible value of long int
	
	for(k=1;k<=3;k++)
	{
		for(i=0;i<10;i++)
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
	
}
