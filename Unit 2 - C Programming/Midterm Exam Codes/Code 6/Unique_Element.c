#include "stdio.h"

// Written by Mina Gamal
//c function to return unique number in array with one loop

int Unique(int arr[],int n)
{
	int i,u=arr[0];
	for(i=1;i<n;i++)
	{
		u^=arr[i];
	}
	return u;
}

int main()
{
	int n,arr[100],i;
	while(1)
	{
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

		printf("\nThe Unique Number is %d",Unique(arr,n));
		printf("\n\n");

	}

	return 0;
}
