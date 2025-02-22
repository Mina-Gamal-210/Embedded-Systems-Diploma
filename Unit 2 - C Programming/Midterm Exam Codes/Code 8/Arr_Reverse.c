#include "stdio.h"

// Written by Mina Gamal
// c function to take an array and reverse its elements

void Arr_Reverse(int arr[],int n)
{
	int i,t;
	for(i=0;i<n/2;i++)
	{
		t = arr[i];
		arr[i]=arr[n-1-i];
		arr[n-1-i]=t;
	}
}

int main()
{
	int n,arr[100],i;

	printf("Please Enter number of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("Element %d: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("\nArray >> { ");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		if(i!=(n-1))
			printf(",");

	}
	printf(" }");

	Arr_Reverse(arr,n);
	printf("\n\nReversed Array >> {");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
		if(i!=(n-1))
			printf(",");

	}
	printf(" }");




	return 0;
}
