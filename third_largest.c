#include<stdio.h>
#include<stdlib.h>
int find_nth_largest(int arr[],int l_s[2],int cur,int max)
{		
/*
arr[] : the array
l_s[2] : is a array with the nth largest value(at index 0) and smallest value(at index 1)
cur : current iteration
max : max iteration
*/
	int l,i,large,smallest;
	
	large=smallest=arr[0];		// default initialization
	if (cur>1)
		large=l_s[1]; // initializing with the smallest value
	if (cur>max)	// recursion breaking condition
		return l_s[0]; // returning the nth largest value
	for(i=0;i<10;i++)   // loop over array's 10 elements 
	{	
		if (cur==1)             // for the first time we find the most largest and smallest values 
		{
			if (large<arr[i])   // condition to find the 1st largest value
				large=arr[i];
			if (smallest>arr[i])// condition to find the smallest value
				smallest=arr[i];
		}
		else
		{
			if (large<arr[i] && arr[i]<l_s[0]) //condition to find the largest value which is smaller than the most largest value
			{
					large=arr[i];
			}
		}
	}
	if (cur==1)  // only assigned the smallest value once
		l_s[1]=smallest;
	l_s[0]=large; //updating the largest value to the nth largest value
	return find_nth_largest(arr,l_s,cur+1,max); // calling itself for the next iteration to find 2nd and then 3rd largest values
}
int main()
{
	int arr[10]={1,-2,-25,-21,-66,5,1,-35,-9,-13},i,n,largest,l_s[2];
	n=3; // the place of largest number ex: n=1 will give 1st largest number
	largest=find_nth_largest(arr,l_s,1,n);
	printf("\n%d largest=%d\n",n,largest);
	return 1;
}
